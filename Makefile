#
# Makefile
#

makefile_name := $(abspath $(lastword $(MAKEFILE_LIST)))
makefile_path := $(strip $(patsubst %/,% , $(dir $(makefile_name))))

# CC ?= gcc
CROSS := arm-none-linux-gnueabihf-
CC := $(CROSS)gcc
SZ := $(CROSS)size
PRJ_DIR := $(makefile_path)
LVGL_DIR := $(PRJ_DIR)
LVGL_DIR_NAME ?= lvgl
CFLAGS += -I$(LVGL_DIR)/ -I$(makefile_path)/ -c -fmessage-length=0

LDFLAGS := -lSDL2 -lm

BUILD_DIR := build/
OBJ_DIR := $(BUILD_DIR)object/
GEN_OBJ_DIR := $(OBJ_DIR)generated/
BIN_DIR := $(BUILD_DIR)bin/

RM := rm -f
RMDIR := rm -rf

EXEC = lvgl_app
MKDIR_P = mkdir -p

LDFLAGS += -LSDL2/lib

-include $(LVGL_DIR)/lvgl/lvgl.mk
-include $(LVGL_DIR)/lv_drivers/lv_drivers.mk
-include $(LVGL_DIR)/lv_examples/lv_examples.mk
-include $(PRJ_DIR)/gui_guider/generated/generated.mk
-include $(PRJ_DIR)/gui_guider/custom/custom.mk

#Collect the files to compile
CSRCS += main.c
DEPPATH += --dep-path $(makefile_path)/
VPATH += :$(makefile_path)/
CFLAGS += "-I$(makefile_path)/"

CFLAGS += "-ISDL2/include" -MMD -MP

OBJEXT := .o

AOBJS = $(addprefix $(OBJ_DIR),$(ASRCS:.S=$(OBJEXT)))
COBJS = $(addprefix $(OBJ_DIR),$(CSRCS:.c=$(OBJEXT)))
DEPS = $(addprefix $(OBJ_DIR),$(CSRCS:.c=.d))
GEN_AOBJS = $(addprefix $(GEN_OBJ_DIR),$(GEN_ASRCS:.S=$(OBJEXT)))
GEN_COBJS = $(addprefix $(GEN_OBJ_DIR),$(GEN_CSRCS:.c=$(OBJEXT)))

DEPS += $(addprefix $(GEN_OBJ_DIR),$(GEN_CSRCS:.c=.d))


SRCS = $(ASRCS) $(CSRCS)
OBJS = $(AOBJS) $(COBJS)
GEN_SRCS = $(GEN_ASRCS) $(GEN_CSRCS)
GEN_OBJS = $(GEN_AOBJS) $(GEN_COBJS)

.PHONY: all env clean default clean_gen
all: env default

# monitor header files
-include $(DEPS)

env:
	@if [ ! -d "build/bin" ]; then $(MKDIR_P) build/bin; fi
	@if [ ! -d "build/object/generated" ]; then $(MKDIR_P) build/object/generated; fi

$(OBJ_DIR)main.o: main.c
	@echo "Compiling $(makefile_path)/$<"
	@$(CC)  $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: %.c
	@echo "Compiling $<"
	@$(CC)  $(CFLAGS) -c $< -o $@

$(GEN_OBJ_DIR)%.o: %.c
	@echo "Compiling $<"
	@$(CC)  $(CFLAGS) -c $< -o $@

default: $(OBJS) $(GEN_OBJS)
	@echo "Linking $(EXEC)"
	@$(CC) -o $(BIN_DIR)$(EXEC) $(OBJS) $(GEN_OBJS) $(LDFLAGS)
	$(SZ) $(BUILD_DIR)bin/$(EXEC)

clean:
	-@$(RMDIR) build

gen_images := $(wildcard $(PRJ_DIR)/gui_guider/generated/images/*.c)
gen_srcs := $(gen_images) $(wildcard $(PRJ_DIR)/gui_guider/generated/*.c) $(wildcard $(PRJ_DIR)/gui_guider/generated/*.h)

clean_gen_img:
	$(RM) $(LVGL_DIR)/gui_guider/generated/images/*.c

clean_gen: clean_gen_img
	$(RM) $(LVGL_DIR)/gui_guider/generated/*.c
	$(RM) $(LVGL_DIR)/gui_guider/generated/*.h
