# images
include $(PRJ_DIR)/gui_guider/generated/images/images.mk

# GUI Guider fonts
include $(PRJ_DIR)/gui_guider/generated/guider_fonts/guider_fonts.mk

# GUI Guider customer fonts
include $(PRJ_DIR)/gui_guider/generated/guider_customer_fonts/guider_customer_fonts.mk


GEN_CSRCS += $(notdir $(wildcard $(PRJ_DIR)/gui_guider/generated/*.c))

DEPPATH += --dep-path $(PRJ_DIR)/gui_guider/generated
VPATH += :$(PRJ_DIR)/gui_guider/generated

CFLAGS += "-I$(PRJ_DIR)/gui_guider/generated"