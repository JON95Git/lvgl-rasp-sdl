GEN_CSRCS += $(notdir $(wildcard $(PRJ_DIR)/gui_guider/generated/guider_customer_fonts/*.c))

DEPPATH += --dep-path $(PRJ_DIR)/gui_guider/generated/guider_customer_fonts
VPATH += :$(PRJ_DIR)/gui_guider/generated/guider_customer_fonts

CFLAGS += "-I$(PRJ_DIR)/gui_guider/generated/guider_customer_fonts"