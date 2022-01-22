/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"
#include "custom.h"




void events_init(lv_ui *ui)
{
}

static void home_imgbtncopyevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		guider_load_screen(SCR_LOADER);
		add_loader(load_copy);
	}
		break;
	default:
		break;
	}
}

static void home_imgbtnsetevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		guider_load_screen(SCR_SETUP); 
		lv_demo_printer_anim_in_all(guider_ui.setup, 200);
	}
		break;
	default:
		break;
	}
}

static void home_imgbtnscanevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		guider_load_screen(SCR_LOADER);
		add_loader(load_scan);
	}
		break;
	default:
		break;
	}
}

static void home_imgbtnprtevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		guider_load_screen(SCR_LOADER);
		add_loader(load_print);
	}
		break;
	default:
		break;
	}
}

void events_init_home(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->home_imgbtncopy, home_imgbtncopyevent_handler);
	lv_obj_set_event_cb(ui->home_imgbtnset, home_imgbtnsetevent_handler);
	lv_obj_set_event_cb(ui->home_imgbtnscan, home_imgbtnscanevent_handler);
	lv_obj_set_event_cb(ui->home_imgbtnprt, home_imgbtnprtevent_handler);
}
