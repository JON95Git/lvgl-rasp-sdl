// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_

#include "gui_guider.h"

enum SCR_ID {
	SCR_HOME = 0,
	SCR_COPY_HOME = 1,
	SCR_COPY_NEXT = 2,
	SCR_SCAN_HOME = 3,
	SCR_PRT_HOME = 4,
	SCR_PRT_USB = 5,
	SCR_PRT_MB = 6,
	SCR_PRT_IT = 7,
	SCR_SETUP = 8,
	SCR_LOADER = 9,
	SCR_SAVED = 10
};

extern int cur_scr;
extern lv_anim_t ani_en_btn_click;

void home_event_init(void);
void copy_home_event_init(void);
void copy_next_event_init(void);
void scan_home_event_init(void);
void prt_home_event_init(void);
void prt_usb_event_init(void);
void prt_mb_event_init(void);
void prtit_event_init(void);
void setup_event_init(void);
void loader_event_init(void);
void saved_event_init(void);
void event_cb(void);

void custom_init(lv_ui *ui);
void guider_load_screen(int scr_id);
void lv_demo_printer_anim_in_all(lv_obj_t * obj, uint32_t delay);
void add_loader(void (*end_cb)(lv_anim_t *));
void load_copy(lv_anim_t *a);
void load_scan(lv_anim_t *a);
void load_print(lv_anim_t *a);

#endif /* EVENT_CB_H_ */
