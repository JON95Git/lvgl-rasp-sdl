## SPDX-License-Identifier: MIT
## Copyright 2020 NXP

GEN_CSRCS += $(notdir $(wildcard $(PRJ_DIR)/gui_guider/custom/*.c))

DEPPATH += --dep-path $(PRJ_DIR)/gui_guider/custom
VPATH += :$(PRJ_DIR)/gui_guider/custom

CFLAGS += "-I$(PRJ_DIR)/gui_guider/custom"
