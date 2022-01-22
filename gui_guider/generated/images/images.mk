GEN_CSRCS += $(notdir $(wildcard $(PRJ_DIR)/gui_guider/generated/images/*.c))

DEPPATH += --dep-path $(PRJ_DIR)/gui_guider/generated/images
VPATH += :$(PRJ_DIR)/gui_guider/generated/images

CFLAGS += "-I$(PRJ_DIR)/gui_guider/generated/images"