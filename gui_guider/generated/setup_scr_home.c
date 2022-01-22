/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_home(lv_ui *ui){

	//Write codes home
	ui->home = lv_obj_create(NULL, NULL);

	//Write codes home_cont1
	ui->home_cont1 = lv_cont_create(ui->home, NULL);

	//Write style LV_CONT_PART_MAIN for home_cont1
	static lv_style_t style_home_cont1_main;
	lv_style_init(&style_home_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_home_cont1_main
	lv_style_set_radius(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_home_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_home_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_home_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_home_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_cont1, LV_CONT_PART_MAIN, &style_home_cont1_main);
	lv_obj_set_pos(ui->home_cont1, 0, 0);
	lv_obj_set_size(ui->home_cont1, 480, 100);
	lv_obj_set_click(ui->home_cont1, false);
	lv_cont_set_layout(ui->home_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->home_cont1, LV_FIT_NONE);

	//Write codes home_whitebg
	ui->home_whitebg = lv_cont_create(ui->home, NULL);

	//Write style LV_CONT_PART_MAIN for home_whitebg
	static lv_style_t style_home_whitebg_main;
	lv_style_init(&style_home_whitebg_main);

	//Write style state: LV_STATE_DEFAULT for style_home_whitebg_main
	lv_style_set_radius(&style_home_whitebg_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_whitebg_main, LV_STATE_DEFAULT, lv_color_make(0xa7, 0xc6, 0xec));
	lv_style_set_bg_grad_color(&style_home_whitebg_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_home_whitebg_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_whitebg_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_home_whitebg_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_home_whitebg_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_home_whitebg_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_home_whitebg_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_whitebg_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_whitebg_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_whitebg_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_whitebg, LV_CONT_PART_MAIN, &style_home_whitebg_main);
	lv_obj_set_pos(ui->home_whitebg, 0, 100);
	lv_obj_set_size(ui->home_whitebg, 480, 172);
	lv_obj_set_click(ui->home_whitebg, false);
	lv_cont_set_layout(ui->home_whitebg, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->home_whitebg, LV_FIT_NONE);

	//Write codes home_cont2
	ui->home_cont2 = lv_cont_create(ui->home, NULL);

	//Write style LV_CONT_PART_MAIN for home_cont2
	static lv_style_t style_home_cont2_main;
	lv_style_init(&style_home_cont2_main);

	//Write style state: LV_STATE_DEFAULT for style_home_cont2_main
	lv_style_set_radius(&style_home_cont2_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_home_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_home_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_home_cont2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_home_cont2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_home_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_home_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_home_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_cont2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_cont2, LV_CONT_PART_MAIN, &style_home_cont2_main);
	lv_obj_set_pos(ui->home_cont2, 40, 80);
	lv_obj_set_size(ui->home_cont2, 380, 120);
	lv_obj_set_click(ui->home_cont2, false);
	lv_cont_set_layout(ui->home_cont2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->home_cont2, LV_FIT_NONE);

	//Write codes home_labeldate
	ui->home_labeldate = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labeldate, "20 Nov 2020 08:08");
	lv_label_set_long_mode(ui->home_labeldate, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labeldate, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labeldate
	static lv_style_t style_home_labeldate_main;
	lv_style_init(&style_home_labeldate_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labeldate_main
	lv_style_set_radius(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labeldate_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_home_labeldate_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_home_labeldate_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labeldate_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_home_labeldate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home_labeldate_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labeldate_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labeldate, LV_LABEL_PART_MAIN, &style_home_labeldate_main);
	lv_obj_set_pos(ui->home_labeldate, 240, 30);
	lv_obj_set_size(ui->home_labeldate, 225, 0);

	//Write codes home_imgbtncopy
	ui->home_imgbtncopy = lv_imgbtn_create(ui->home, NULL);

	//Write style LV_IMGBTN_PART_MAIN for home_imgbtncopy
	static lv_style_t style_home_imgbtncopy_main;
	lv_style_init(&style_home_imgbtncopy_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgbtncopy_main
	lv_style_set_text_color(&style_home_imgbtncopy_main, LV_STATE_DEFAULT, lv_color_make(0xfd, 0xfc, 0xfc));
	lv_style_set_image_recolor(&style_home_imgbtncopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgbtncopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgbtncopy_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_home_imgbtncopy_main
	lv_style_set_text_color(&style_home_imgbtncopy_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtncopy_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtncopy_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_home_imgbtncopy_main
	lv_style_set_text_color(&style_home_imgbtncopy_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtncopy_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtncopy_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->home_imgbtncopy, LV_IMGBTN_PART_MAIN, &style_home_imgbtncopy_main);
	lv_obj_set_pos(ui->home_imgbtncopy, 50, 90);
	lv_obj_set_size(ui->home_imgbtncopy, 85, 100);
	lv_imgbtn_set_src(ui->home_imgbtncopy,LV_BTN_STATE_RELEASED,&_btn_bg_1_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtncopy,LV_BTN_STATE_PRESSED,&_btn_bg_1_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtncopy,LV_BTN_STATE_CHECKED_RELEASED,&_btn_bg_1_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtncopy,LV_BTN_STATE_CHECKED_PRESSED,&_btn_bg_1_alpha_85x100);

	//Write codes home_labelcopy
	ui->home_labelcopy = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labelcopy, "COPY");
	lv_label_set_long_mode(ui->home_labelcopy, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labelcopy, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labelcopy
	static lv_style_t style_home_labelcopy_main;
	lv_style_init(&style_home_labelcopy_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labelcopy_main
	lv_style_set_radius(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_labelcopy_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_home_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xfa, 0xfa, 0xfa));
	lv_style_set_text_font(&style_home_labelcopy_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labelcopy, LV_LABEL_PART_MAIN, &style_home_labelcopy_main);
	lv_obj_set_pos(ui->home_labelcopy, 60, 155);
	lv_obj_set_size(ui->home_labelcopy, 62, 0);

	//Write codes home_imgbtnset
	ui->home_imgbtnset = lv_imgbtn_create(ui->home, NULL);

	//Write style LV_IMGBTN_PART_MAIN for home_imgbtnset
	static lv_style_t style_home_imgbtnset_main;
	lv_style_init(&style_home_imgbtnset_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgbtnset_main
	lv_style_set_text_color(&style_home_imgbtnset_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_home_imgbtnset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgbtnset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgbtnset_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_home_imgbtnset_main
	lv_style_set_text_color(&style_home_imgbtnset_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnset_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnset_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_home_imgbtnset_main
	lv_style_set_text_color(&style_home_imgbtnset_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnset_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnset_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->home_imgbtnset, LV_IMGBTN_PART_MAIN, &style_home_imgbtnset_main);
	lv_obj_set_pos(ui->home_imgbtnset, 320, 90);
	lv_obj_set_size(ui->home_imgbtnset, 85, 100);
	lv_imgbtn_set_src(ui->home_imgbtnset,LV_BTN_STATE_RELEASED,&_btn4_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnset,LV_BTN_STATE_PRESSED,&_btn4_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnset,LV_BTN_STATE_CHECKED_RELEASED,&_btn4_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnset,LV_BTN_STATE_CHECKED_PRESSED,&_btn4_alpha_85x100);

	//Write codes home_imgbtnscan
	ui->home_imgbtnscan = lv_imgbtn_create(ui->home, NULL);

	//Write style LV_IMGBTN_PART_MAIN for home_imgbtnscan
	static lv_style_t style_home_imgbtnscan_main;
	lv_style_init(&style_home_imgbtnscan_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgbtnscan_main
	lv_style_set_text_color(&style_home_imgbtnscan_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_home_imgbtnscan_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgbtnscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgbtnscan_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_home_imgbtnscan_main
	lv_style_set_text_color(&style_home_imgbtnscan_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnscan_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnscan_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_home_imgbtnscan_main
	lv_style_set_text_color(&style_home_imgbtnscan_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnscan_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnscan_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->home_imgbtnscan, LV_IMGBTN_PART_MAIN, &style_home_imgbtnscan_main);
	lv_obj_set_pos(ui->home_imgbtnscan, 140, 90);
	lv_obj_set_size(ui->home_imgbtnscan, 85, 100);
	lv_imgbtn_set_src(ui->home_imgbtnscan,LV_BTN_STATE_RELEASED,&_btn2_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnscan,LV_BTN_STATE_PRESSED,&_btn2_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnscan,LV_BTN_STATE_CHECKED_RELEASED,&_btn2_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnscan,LV_BTN_STATE_CHECKED_PRESSED,&_btn2_alpha_85x100);

	//Write codes home_imgbtnprt
	ui->home_imgbtnprt = lv_imgbtn_create(ui->home, NULL);

	//Write style LV_IMGBTN_PART_MAIN for home_imgbtnprt
	static lv_style_t style_home_imgbtnprt_main;
	lv_style_init(&style_home_imgbtnprt_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgbtnprt_main
	lv_style_set_text_color(&style_home_imgbtnprt_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_home_imgbtnprt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgbtnprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgbtnprt_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_home_imgbtnprt_main
	lv_style_set_text_color(&style_home_imgbtnprt_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnprt_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnprt_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_home_imgbtnprt_main
	lv_style_set_text_color(&style_home_imgbtnprt_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_home_imgbtnprt_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_home_imgbtnprt_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->home_imgbtnprt, LV_IMGBTN_PART_MAIN, &style_home_imgbtnprt_main);
	lv_obj_set_pos(ui->home_imgbtnprt, 230, 90);
	lv_obj_set_size(ui->home_imgbtnprt, 85, 100);
	lv_imgbtn_set_src(ui->home_imgbtnprt,LV_BTN_STATE_RELEASED,&_btn3_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnprt,LV_BTN_STATE_PRESSED,&_btn3_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnprt,LV_BTN_STATE_CHECKED_RELEASED,&_btn3_alpha_85x100);
	lv_imgbtn_set_src(ui->home_imgbtnprt,LV_BTN_STATE_CHECKED_PRESSED,&_btn3_alpha_85x100);

	//Write codes home_labelscan
	ui->home_labelscan = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labelscan, "SCAN");
	lv_label_set_long_mode(ui->home_labelscan, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labelscan, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labelscan
	static lv_style_t style_home_labelscan_main;
	lv_style_init(&style_home_labelscan_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labelscan_main
	lv_style_set_radius(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labelscan_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_labelscan_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_labelscan_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_home_labelscan_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home_labelscan_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labelscan_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labelscan, LV_LABEL_PART_MAIN, &style_home_labelscan_main);
	lv_obj_set_pos(ui->home_labelscan, 150, 155);
	lv_obj_set_size(ui->home_labelscan, 60, 0);

	//Write codes home_labelprt
	ui->home_labelprt = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labelprt, "PRINT");
	lv_label_set_long_mode(ui->home_labelprt, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labelprt, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labelprt
	static lv_style_t style_home_labelprt_main;
	lv_style_init(&style_home_labelprt_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labelprt_main
	lv_style_set_radius(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labelprt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_labelprt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_labelprt_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_home_labelprt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home_labelprt_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labelprt_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labelprt, LV_LABEL_PART_MAIN, &style_home_labelprt_main);
	lv_obj_set_pos(ui->home_labelprt, 240, 155);
	lv_obj_set_size(ui->home_labelprt, 70, 0);

	//Write codes home_labelset
	ui->home_labelset = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labelset, "SETUP");
	lv_label_set_long_mode(ui->home_labelset, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labelset, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labelset
	static lv_style_t style_home_labelset_main;
	lv_style_init(&style_home_labelset_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labelset_main
	lv_style_set_radius(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labelset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_labelset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_labelset_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_home_labelset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home_labelset_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labelset_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labelset, LV_LABEL_PART_MAIN, &style_home_labelset_main);
	lv_obj_set_pos(ui->home_labelset, 328, 155);
	lv_obj_set_size(ui->home_labelset, 75, 0);

	//Write codes home_labelnote
	ui->home_labelnote = lv_label_create(ui->home, NULL);
	lv_label_set_text(ui->home_labelnote, "What do you want to do today?");
	lv_label_set_long_mode(ui->home_labelnote, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->home_labelnote, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for home_labelnote
	static lv_style_t style_home_labelnote_main;
	lv_style_init(&style_home_labelnote_main);

	//Write style state: LV_STATE_DEFAULT for style_home_labelnote_main
	lv_style_set_radius(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_home_labelnote_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_home_labelnote_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_home_labelnote_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_labelnote_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_home_labelnote_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_home_labelnote_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_labelnote_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_labelnote, LV_LABEL_PART_MAIN, &style_home_labelnote_main);
	lv_obj_set_pos(ui->home_labelnote, 16, 225);
	lv_obj_set_size(ui->home_labelnote, 276, 0);

	//Write codes home_contbars
	ui->home_contbars = lv_cont_create(ui->home, NULL);

	//Write style LV_CONT_PART_MAIN for home_contbars
	static lv_style_t style_home_contbars_main;
	lv_style_init(&style_home_contbars_main);

	//Write style state: LV_STATE_DEFAULT for style_home_contbars_main
	lv_style_set_radius(&style_home_contbars_main, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_home_contbars_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_home_contbars_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_home_contbars_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_contbars_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_home_contbars_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_home_contbars_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_home_contbars_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_home_contbars_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_home_contbars_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_home_contbars_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_home_contbars_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->home_contbars, LV_CONT_PART_MAIN, &style_home_contbars_main);
	lv_obj_set_pos(ui->home_contbars, 300, 205);
	lv_obj_set_size(ui->home_contbars, 150, 50);
	lv_obj_set_click(ui->home_contbars, false);
	lv_cont_set_layout(ui->home_contbars, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->home_contbars, LV_FIT_NONE);

	//Write codes home_bar1
	ui->home_bar1 = lv_bar_create(ui->home, NULL);

	//Write style LV_BAR_PART_BG for home_bar1
	static lv_style_t style_home_bar1_bg;
	lv_style_init(&style_home_bar1_bg);

	//Write style state: LV_STATE_DEFAULT for style_home_bar1_bg
	lv_style_set_radius(&style_home_bar1_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_home_bar1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_bar1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_bar1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar1_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar1, LV_BAR_PART_BG, &style_home_bar1_bg);

	//Write style LV_BAR_PART_INDIC for home_bar1
	static lv_style_t style_home_bar1_indic;
	lv_style_init(&style_home_bar1_indic);

	//Write style state: LV_STATE_DEFAULT for style_home_bar1_indic
	lv_style_set_radius(&style_home_bar1_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_home_bar1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_home_bar1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_home_bar1_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar1_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar1, LV_BAR_PART_INDIC, &style_home_bar1_indic);
	lv_obj_set_pos(ui->home_bar1, 315, 220);
	lv_obj_set_size(ui->home_bar1, 20, 30);
	lv_bar_set_anim_time(ui->home_bar1,1000);
	lv_bar_set_value(ui->home_bar1,60,LV_ANIM_OFF);
	lv_bar_set_range(ui->home_bar1,0,100);

	//Write codes home_bar2
	ui->home_bar2 = lv_bar_create(ui->home, NULL);

	//Write style LV_BAR_PART_BG for home_bar2
	static lv_style_t style_home_bar2_bg;
	lv_style_init(&style_home_bar2_bg);

	//Write style state: LV_STATE_DEFAULT for style_home_bar2_bg
	lv_style_set_radius(&style_home_bar2_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_home_bar2_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_bar2_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_bar2_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar2_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar2, LV_BAR_PART_BG, &style_home_bar2_bg);

	//Write style LV_BAR_PART_INDIC for home_bar2
	static lv_style_t style_home_bar2_indic;
	lv_style_init(&style_home_bar2_indic);

	//Write style state: LV_STATE_DEFAULT for style_home_bar2_indic
	lv_style_set_radius(&style_home_bar2_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_home_bar2_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0xff));
	lv_style_set_bg_grad_color(&style_home_bar2_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0xff));
	lv_style_set_bg_grad_dir(&style_home_bar2_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar2_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar2, LV_BAR_PART_INDIC, &style_home_bar2_indic);
	lv_obj_set_pos(ui->home_bar2, 350, 220);
	lv_obj_set_size(ui->home_bar2, 20, 30);
	lv_bar_set_anim_time(ui->home_bar2,1000);
	lv_bar_set_value(ui->home_bar2,40,LV_ANIM_OFF);
	lv_bar_set_range(ui->home_bar2,0,100);

	//Write codes home_bar3
	ui->home_bar3 = lv_bar_create(ui->home, NULL);

	//Write style LV_BAR_PART_BG for home_bar3
	static lv_style_t style_home_bar3_bg;
	lv_style_init(&style_home_bar3_bg);

	//Write style state: LV_STATE_DEFAULT for style_home_bar3_bg
	lv_style_set_radius(&style_home_bar3_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_home_bar3_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_bar3_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_bar3_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar3_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar3, LV_BAR_PART_BG, &style_home_bar3_bg);

	//Write style LV_BAR_PART_INDIC for home_bar3
	static lv_style_t style_home_bar3_indic;
	lv_style_init(&style_home_bar3_indic);

	//Write style state: LV_STATE_DEFAULT for style_home_bar3_indic
	lv_style_set_radius(&style_home_bar3_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_home_bar3_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0x80));
	lv_style_set_bg_grad_color(&style_home_bar3_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0x80));
	lv_style_set_bg_grad_dir(&style_home_bar3_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar3_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar3, LV_BAR_PART_INDIC, &style_home_bar3_indic);
	lv_obj_set_pos(ui->home_bar3, 385, 220);
	lv_obj_set_size(ui->home_bar3, 20, 30);
	lv_bar_set_anim_time(ui->home_bar3,1000);
	lv_bar_set_value(ui->home_bar3,80,LV_ANIM_OFF);
	lv_bar_set_range(ui->home_bar3,0,100);

	//Write codes home_bar4
	ui->home_bar4 = lv_bar_create(ui->home, NULL);

	//Write style LV_BAR_PART_BG for home_bar4
	static lv_style_t style_home_bar4_bg;
	lv_style_init(&style_home_bar4_bg);

	//Write style state: LV_STATE_DEFAULT for style_home_bar4_bg
	lv_style_set_radius(&style_home_bar4_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_bg_color(&style_home_bar4_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home_bar4_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home_bar4_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar4_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar4, LV_BAR_PART_BG, &style_home_bar4_bg);

	//Write style LV_BAR_PART_INDIC for home_bar4
	static lv_style_t style_home_bar4_indic;
	lv_style_init(&style_home_bar4_indic);

	//Write style state: LV_STATE_DEFAULT for style_home_bar4_indic
	lv_style_set_radius(&style_home_bar4_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_home_bar4_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_home_bar4_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_home_bar4_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home_bar4_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_bar4, LV_BAR_PART_INDIC, &style_home_bar4_indic);
	lv_obj_set_pos(ui->home_bar4, 425, 220);
	lv_obj_set_size(ui->home_bar4, 20, 30);
	lv_bar_set_anim_time(ui->home_bar4,1000);
	lv_bar_set_value(ui->home_bar4,30,LV_ANIM_OFF);
	lv_bar_set_range(ui->home_bar4,0,100);

	//Write codes home_wifi
	ui->home_wifi = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_wifi
	static lv_style_t style_home_wifi_main;
	lv_style_init(&style_home_wifi_main);

	//Write style state: LV_STATE_DEFAULT for style_home_wifi_main
	lv_style_set_image_recolor(&style_home_wifi_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_wifi_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_wifi_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_wifi, LV_IMG_PART_MAIN, &style_home_wifi_main);
	lv_obj_set_pos(ui->home_wifi, 56, 31);
	lv_obj_set_size(ui->home_wifi, 29, 19);
	lv_obj_set_click(ui->home_wifi, true);
	lv_img_set_src(ui->home_wifi,&_wifi_alpha_29x19);
	lv_img_set_pivot(ui->home_wifi, 0,0);
	lv_img_set_angle(ui->home_wifi, 0);

	//Write codes home_tel
	ui->home_tel = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_tel
	static lv_style_t style_home_tel_main;
	lv_style_init(&style_home_tel_main);

	//Write style state: LV_STATE_DEFAULT for style_home_tel_main
	lv_style_set_image_recolor(&style_home_tel_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_tel_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_tel_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_tel, LV_IMG_PART_MAIN, &style_home_tel_main);
	lv_obj_set_pos(ui->home_tel, 105, 30);
	lv_obj_set_size(ui->home_tel, 21, 21);
	lv_obj_set_click(ui->home_tel, true);
	lv_img_set_src(ui->home_tel,&_tel_alpha_21x21);
	lv_img_set_pivot(ui->home_tel, 0,0);
	lv_img_set_angle(ui->home_tel, 0);

	//Write codes home_eco
	ui->home_eco = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_eco
	static lv_style_t style_home_eco_main;
	lv_style_init(&style_home_eco_main);

	//Write style state: LV_STATE_DEFAULT for style_home_eco_main
	lv_style_set_image_recolor(&style_home_eco_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_eco_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_eco_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_eco, LV_IMG_PART_MAIN, &style_home_eco_main);
	lv_obj_set_pos(ui->home_eco, 147, 30);
	lv_obj_set_size(ui->home_eco, 21, 21);
	lv_obj_set_click(ui->home_eco, true);
	lv_img_set_src(ui->home_eco,&_eco_alpha_21x21);
	lv_img_set_pivot(ui->home_eco, 0,0);
	lv_img_set_angle(ui->home_eco, 0);

	//Write codes home_pc
	ui->home_pc = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_pc
	static lv_style_t style_home_pc_main;
	lv_style_init(&style_home_pc_main);

	//Write style state: LV_STATE_DEFAULT for style_home_pc_main
	lv_style_set_image_recolor(&style_home_pc_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_pc_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_pc_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_pc, LV_IMG_PART_MAIN, &style_home_pc_main);
	lv_obj_set_pos(ui->home_pc, 198, 30);
	lv_obj_set_size(ui->home_pc, 21, 21);
	lv_obj_set_click(ui->home_pc, true);
	lv_img_set_src(ui->home_pc,&_pc_alpha_21x21);
	lv_img_set_pivot(ui->home_pc, 0,0);
	lv_img_set_angle(ui->home_pc, 0);

	//Write codes home_imgcopy
	ui->home_imgcopy = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_imgcopy
	static lv_style_t style_home_imgcopy_main;
	lv_style_init(&style_home_imgcopy_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgcopy_main
	lv_style_set_image_recolor(&style_home_imgcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgcopy_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_imgcopy, LV_IMG_PART_MAIN, &style_home_imgcopy_main);
	lv_obj_set_pos(ui->home_imgcopy, 90, 108);
	lv_obj_set_size(ui->home_imgcopy, 29, 29);
	lv_obj_set_click(ui->home_imgcopy, true);
	lv_img_set_src(ui->home_imgcopy,&_copy_alpha_29x29);
	lv_img_set_pivot(ui->home_imgcopy, 0,0);
	lv_img_set_angle(ui->home_imgcopy, 0);

	//Write codes home_imgscan
	ui->home_imgscan = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_imgscan
	static lv_style_t style_home_imgscan_main;
	lv_style_init(&style_home_imgscan_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgscan_main
	lv_style_set_image_recolor(&style_home_imgscan_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgscan_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgscan_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_imgscan, LV_IMG_PART_MAIN, &style_home_imgscan_main);
	lv_obj_set_pos(ui->home_imgscan, 180, 108);
	lv_obj_set_size(ui->home_imgscan, 29, 29);
	lv_obj_set_click(ui->home_imgscan, true);
	lv_img_set_src(ui->home_imgscan,&_scan_alpha_29x29);
	lv_img_set_pivot(ui->home_imgscan, 0,0);
	lv_img_set_angle(ui->home_imgscan, 0);

	//Write codes home_imgprt
	ui->home_imgprt = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_imgprt
	static lv_style_t style_home_imgprt_main;
	lv_style_init(&style_home_imgprt_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgprt_main
	lv_style_set_image_recolor(&style_home_imgprt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgprt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgprt_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_imgprt, LV_IMG_PART_MAIN, &style_home_imgprt_main);
	lv_obj_set_pos(ui->home_imgprt, 270, 108);
	lv_obj_set_size(ui->home_imgprt, 29, 29);
	lv_obj_set_click(ui->home_imgprt, true);
	lv_img_set_src(ui->home_imgprt,&_print_alpha_29x29);
	lv_img_set_pivot(ui->home_imgprt, 0,0);
	lv_img_set_angle(ui->home_imgprt, 0);

	//Write codes home_imgset
	ui->home_imgset = lv_img_create(ui->home, NULL);

	//Write style LV_IMG_PART_MAIN for home_imgset
	static lv_style_t style_home_imgset_main;
	lv_style_init(&style_home_imgset_main);

	//Write style state: LV_STATE_DEFAULT for style_home_imgset_main
	lv_style_set_image_recolor(&style_home_imgset_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_home_imgset_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_home_imgset_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->home_imgset, LV_IMG_PART_MAIN, &style_home_imgset_main);
	lv_obj_set_pos(ui->home_imgset, 360, 108);
	lv_obj_set_size(ui->home_imgset, 29, 29);
	lv_obj_set_click(ui->home_imgset, true);
	lv_img_set_src(ui->home_imgset,&_setup_alpha_29x29);
	lv_img_set_pivot(ui->home_imgset, 0,0);
	lv_img_set_angle(ui->home_imgset, 0);

	//Init events for screen
	events_init_home(ui);
}