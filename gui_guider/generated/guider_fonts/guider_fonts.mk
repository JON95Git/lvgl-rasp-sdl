GEN_CSRCS += $(notdir $(wildcard $(PRJ_DIR)/gui_guider/generated/guider_fonts/*.c))

DEPPATH += --dep-path $(PRJ_DIR)/gui_guider/generated/guider_fonts
VPATH += :$(PRJ_DIR)/gui_guider/generated/guider_fonts

CFLAGS += "-I$(PRJ_DIR)/gui_guider/generated/guider_fonts"