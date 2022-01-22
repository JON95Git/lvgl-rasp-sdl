/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_loader(lv_ui *ui){

	//Write codes loader
	ui->loader = lv_obj_create(NULL, NULL);

	//Write codes loader_cont0
	ui->loader_cont0 = lv_cont_create(ui->loader, NULL);

	//Write style LV_CONT_PART_MAIN for loader_cont0
	static lv_style_t style_loader_cont0_main;
	lv_style_init(&style_loader_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_loader_cont0_main
	lv_style_set_radius(&style_loader_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_loader_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_loader_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_loader_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_loader_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_loader_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_loader_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_loader_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_loader_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_loader_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_loader_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_loader_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->loader_cont0, LV_CONT_PART_MAIN, &style_loader_cont0_main);
	lv_obj_set_pos(ui->loader_cont0, 0, 0);
	lv_obj_set_size(ui->loader_cont0, 480, 272);
	lv_obj_set_click(ui->loader_cont0, false);
	lv_cont_set_layout(ui->loader_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->loader_cont0, LV_FIT_NONE);

	//Write codes loader_loadarc
	ui->loader_loadarc = lv_arc_create(ui->loader, NULL);

	//Write style LV_ARC_PART_BG for loader_loadarc
	static lv_style_t style_loader_loadarc_bg;
	lv_style_init(&style_loader_loadarc_bg);

	//Write style state: LV_STATE_DEFAULT for style_loader_loadarc_bg
	lv_style_set_bg_color(&style_loader_loadarc_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x23, 0x46));
	lv_style_set_bg_grad_color(&style_loader_loadarc_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x23, 0x46));
	lv_style_set_bg_grad_dir(&style_loader_loadarc_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_width(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_loader_loadarc_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x23, 0x46));
	lv_style_set_line_width(&style_loader_loadarc_bg, LV_STATE_DEFAULT, 5);
	lv_obj_add_style(ui->loader_loadarc, LV_ARC_PART_BG, &style_loader_loadarc_bg);

	//Write style LV_ARC_PART_INDIC for loader_loadarc
	static lv_style_t style_loader_loadarc_indic;
	lv_style_init(&style_loader_loadarc_indic);

	//Write style state: LV_STATE_DEFAULT for style_loader_loadarc_indic
	lv_style_set_line_color(&style_loader_loadarc_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_line_width(&style_loader_loadarc_indic, LV_STATE_DEFAULT, 5);
	lv_obj_add_style(ui->loader_loadarc, LV_ARC_PART_INDIC, &style_loader_loadarc_indic);
	lv_obj_set_pos(ui->loader_loadarc, 180, 80);
	lv_obj_set_size(ui->loader_loadarc, 110, 110);
	lv_arc_set_angles(ui->loader_loadarc, 271, 271);
	lv_arc_set_bg_angles(ui->loader_loadarc, 0, 360);
	lv_arc_set_rotation(ui->loader_loadarc, 0);
	lv_obj_set_style_local_line_rounded(ui->loader_loadarc, LV_ARC_PART_INDIC, LV_STATE_DEFAULT, 0);

	//Write codes loader_loadlabel
	ui->loader_loadlabel = lv_label_create(ui->loader, NULL);
	lv_label_set_text(ui->loader_loadlabel, "0 %");
	lv_label_set_long_mode(ui->loader_loadlabel, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->loader_loadlabel, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for loader_loadlabel
	static lv_style_t style_loader_loadlabel_main;
	lv_style_init(&style_loader_loadlabel_main);

	//Write style state: LV_STATE_DEFAULT for style_loader_loadlabel_main
	lv_style_set_radius(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_loader_loadlabel_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_loader_loadlabel_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_loader_loadlabel_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_loader_loadlabel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_loader_loadlabel_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_loader_loadlabel_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->loader_loadlabel, LV_LABEL_PART_MAIN, &style_loader_loadlabel_main);
	lv_obj_set_pos(ui->loader_loadlabel, 201, 125);
	lv_obj_set_size(ui->loader_loadlabel, 80, 0);
}