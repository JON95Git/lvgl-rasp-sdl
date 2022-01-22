/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_copynext(lv_ui *ui){

	//Write codes copynext
	ui->copynext = lv_obj_create(NULL, NULL);

	//Write codes copynext_cont1
	ui->copynext_cont1 = lv_cont_create(ui->copynext, NULL);

	//Write style LV_CONT_PART_MAIN for copynext_cont1
	static lv_style_t style_copynext_cont1_main;
	lv_style_init(&style_copynext_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_cont1_main
	lv_style_set_radius(&style_copynext_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copynext_cont1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copynext_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copynext_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_cont1, LV_CONT_PART_MAIN, &style_copynext_cont1_main);
	lv_obj_set_pos(ui->copynext_cont1, 0, 0);
	lv_obj_set_size(ui->copynext_cont1, 480, 100);
	lv_obj_set_click(ui->copynext_cont1, false);
	lv_cont_set_layout(ui->copynext_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copynext_cont1, LV_FIT_NONE);

	//Write codes copynext_cont2
	ui->copynext_cont2 = lv_cont_create(ui->copynext, NULL);

	//Write style LV_CONT_PART_MAIN for copynext_cont2
	static lv_style_t style_copynext_cont2_main;
	lv_style_init(&style_copynext_cont2_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_cont2_main
	lv_style_set_radius(&style_copynext_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_cont2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_cont2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copynext_cont2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copynext_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copynext_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_cont2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_cont2, LV_CONT_PART_MAIN, &style_copynext_cont2_main);
	lv_obj_set_pos(ui->copynext_cont2, 0, 100);
	lv_obj_set_size(ui->copynext_cont2, 480, 172);
	lv_obj_set_click(ui->copynext_cont2, false);
	lv_cont_set_layout(ui->copynext_cont2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copynext_cont2, LV_FIT_NONE);

	//Write codes copynext_label1
	ui->copynext_label1 = lv_label_create(ui->copynext, NULL);
	lv_label_set_text(ui->copynext_label1, "ADJUST IMAGE");
	lv_label_set_long_mode(ui->copynext_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copynext_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copynext_label1
	static lv_style_t style_copynext_label1_main;
	lv_style_init(&style_copynext_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_label1_main
	lv_style_set_radius(&style_copynext_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copynext_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_copynext_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_copynext_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copynext_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_label1, LV_LABEL_PART_MAIN, &style_copynext_label1_main);
	lv_obj_set_pos(ui->copynext_label1, 136, 30);
	lv_obj_set_size(ui->copynext_label1, 225, 0);

	//Write codes copynext_img3
	ui->copynext_img3 = lv_img_create(ui->copynext, NULL);

	//Write style LV_IMG_PART_MAIN for copynext_img3
	static lv_style_t style_copynext_img3_main;
	lv_style_init(&style_copynext_img3_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_img3_main
	lv_style_set_image_recolor(&style_copynext_img3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_copynext_img3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_copynext_img3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_img3, LV_IMG_PART_MAIN, &style_copynext_img3_main);
	lv_obj_set_pos(ui->copynext_img3, 27, 75);
	lv_obj_set_size(ui->copynext_img3, 250, 150);
	lv_obj_set_click(ui->copynext_img3, true);
	lv_img_set_src(ui->copynext_img3,&_example_alpha_250x150);
	lv_img_set_pivot(ui->copynext_img3, 0,0);
	lv_img_set_angle(ui->copynext_img3, 0);

	//Write codes copynext_cont4
	ui->copynext_cont4 = lv_cont_create(ui->copynext, NULL);

	//Write style LV_CONT_PART_MAIN for copynext_cont4
	static lv_style_t style_copynext_cont4_main;
	lv_style_init(&style_copynext_cont4_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_cont4_main
	lv_style_set_radius(&style_copynext_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_cont4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_cont4_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copynext_cont4_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copynext_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copynext_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_cont4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_cont4, LV_CONT_PART_MAIN, &style_copynext_cont4_main);
	lv_obj_set_pos(ui->copynext_cont4, 305, 80);
	lv_obj_set_size(ui->copynext_cont4, 150, 130);
	lv_obj_set_click(ui->copynext_cont4, false);
	lv_cont_set_layout(ui->copynext_cont4, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copynext_cont4, LV_FIT_NONE);

	//Write codes copynext_ddlist2
	ui->copynext_ddlist2 = lv_dropdown_create(ui->copynext, NULL);
	lv_dropdown_set_options(ui->copynext_ddlist2, "72 DPI\n96 DPI\n150 DPI\n300 DPI\n600 DPI\n900 DPI\n1200 DPI");
	lv_dropdown_set_max_height(ui->copynext_ddlist2, 90);

	//Write style LV_DROPDOWN_PART_MAIN for copynext_ddlist2
	static lv_style_t style_copynext_ddlist2_main;
	lv_style_init(&style_copynext_ddlist2_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist2_main
	lv_style_set_radius(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_line_space(&style_copynext_ddlist2_main, LV_STATE_DEFAULT, 20);
	lv_obj_add_style(ui->copynext_ddlist2, LV_DROPDOWN_PART_MAIN, &style_copynext_ddlist2_main);

	//Write style LV_DROPDOWN_PART_SELECTED for copynext_ddlist2
	static lv_style_t style_copynext_ddlist2_selected;
	lv_style_init(&style_copynext_ddlist2_selected);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist2_selected
	lv_style_set_radius(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_copynext_ddlist2_selected, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->copynext_ddlist2, LV_DROPDOWN_PART_SELECTED, &style_copynext_ddlist2_selected);

	//Write style LV_DROPDOWN_PART_LIST for copynext_ddlist2
	static lv_style_t style_copynext_ddlist2_list;
	lv_style_init(&style_copynext_ddlist2_list);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist2_list
	lv_style_set_radius(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_copynext_ddlist2_list, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->copynext_ddlist2, LV_DROPDOWN_PART_LIST, &style_copynext_ddlist2_list);
	lv_obj_set_pos(ui->copynext_ddlist2, 166, 237);
	lv_obj_set_width(ui->copynext_ddlist2, 100);

	//Write codes copynext_btncopyback
	ui->copynext_btncopyback = lv_btn_create(ui->copynext, NULL);

	//Write style LV_BTN_PART_MAIN for copynext_btncopyback
	static lv_style_t style_copynext_btncopyback_main;
	lv_style_init(&style_copynext_btncopyback_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_btncopyback_main
	lv_style_set_radius(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_btncopyback_main, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_copynext_btncopyback_main
	lv_style_set_radius(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_btncopyback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copynext_btncopyback_main
	lv_style_set_radius(&style_copynext_btncopyback_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_copynext_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_btncopyback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_btncopyback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copynext_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_btncopyback_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_copynext_btncopyback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copynext_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_btncopyback_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_copynext_btncopyback_main
	lv_style_set_radius(&style_copynext_btncopyback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copynext_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_btncopyback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copynext_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_btncopyback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copynext_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copynext_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copynext_btncopyback, LV_BTN_PART_MAIN, &style_copynext_btncopyback_main);
	lv_obj_set_pos(ui->copynext_btncopyback, 50, 25);
	lv_obj_set_size(ui->copynext_btncopyback, 30, 30);
	ui->copynext_btncopyback_label = lv_label_create(ui->copynext_btncopyback, NULL);
	lv_label_set_text(ui->copynext_btncopyback_label, "");
	lv_obj_set_style_local_text_color(ui->copynext_btncopyback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));

	//Write codes copynext_swcolor
	ui->copynext_swcolor = lv_switch_create(ui->copynext, NULL);

	//Write style LV_SWITCH_PART_BG for copynext_swcolor
	static lv_style_t style_copynext_swcolor_bg;
	lv_style_init(&style_copynext_swcolor_bg);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swcolor_bg
	lv_style_set_radius(&style_copynext_swcolor_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swcolor_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copynext_swcolor_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copynext_swcolor_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swcolor_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swcolor, LV_SWITCH_PART_BG, &style_copynext_swcolor_bg);

	//Write style LV_SWITCH_PART_INDIC for copynext_swcolor
	static lv_style_t style_copynext_swcolor_indic;
	lv_style_init(&style_copynext_swcolor_indic);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swcolor_indic
	lv_style_set_radius(&style_copynext_swcolor_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swcolor_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_copynext_swcolor_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_copynext_swcolor_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swcolor_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swcolor, LV_SWITCH_PART_INDIC, &style_copynext_swcolor_indic);

	//Write style LV_SWITCH_PART_KNOB for copynext_swcolor
	static lv_style_t style_copynext_swcolor_knob;
	lv_style_init(&style_copynext_swcolor_knob);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swcolor_knob
	lv_style_set_radius(&style_copynext_swcolor_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swcolor_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_swcolor_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_swcolor_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swcolor_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swcolor, LV_SWITCH_PART_KNOB, &style_copynext_swcolor_knob);
	lv_obj_set_pos(ui->copynext_swcolor, 323, 175);
	lv_obj_set_size(ui->copynext_swcolor, 40, 20);
	lv_switch_set_anim_time(ui->copynext_swcolor, 600);

	//Write codes copynext_labelcopy
	ui->copynext_labelcopy = lv_label_create(ui->copynext, NULL);
	lv_label_set_text(ui->copynext_labelcopy, "Copies");
	lv_label_set_long_mode(ui->copynext_labelcopy, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copynext_labelcopy, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copynext_labelcopy
	static lv_style_t style_copynext_labelcopy_main;
	lv_style_init(&style_copynext_labelcopy_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_labelcopy_main
	lv_style_set_radius(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_labelcopy, LV_LABEL_PART_MAIN, &style_copynext_labelcopy_main);
	lv_obj_set_pos(ui->copynext_labelcopy, 348, 80);
	lv_obj_set_size(ui->copynext_labelcopy, 64, 0);

	//Write codes copynext_up
	ui->copynext_up = lv_btn_create(ui->copynext, NULL);

	//Write style LV_BTN_PART_MAIN for copynext_up
	static lv_style_t style_copynext_up_main;
	lv_style_init(&style_copynext_up_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_up_main
	lv_style_set_radius(&style_copynext_up_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_up_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_up_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_up_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_up_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_up_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_up_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_copynext_up_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copynext_up_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_copynext_up_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_copynext_up_main
	lv_style_set_radius(&style_copynext_up_main, LV_STATE_FOCUSED, 0);
	lv_style_set_bg_color(&style_copynext_up_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_up_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_up_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_up_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copynext_up_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_up_main, LV_STATE_FOCUSED, 0);
	lv_style_set_border_opa(&style_copynext_up_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copynext_up_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_copynext_up_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copynext_up_main
	lv_style_set_radius(&style_copynext_up_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_copynext_up_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_up_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_up_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_up_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copynext_up_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_up_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_copynext_up_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copynext_up_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_copynext_up_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_copynext_up_main
	lv_style_set_radius(&style_copynext_up_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copynext_up_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_up_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_up_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_up_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copynext_up_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_up_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copynext_up_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copynext_up_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_up_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copynext_up, LV_BTN_PART_MAIN, &style_copynext_up_main);
	lv_obj_set_pos(ui->copynext_up, 417, 110);
	lv_obj_set_size(ui->copynext_up, 20, 20);
	ui->copynext_up_label = lv_label_create(ui->copynext_up, NULL);
	lv_label_set_text(ui->copynext_up_label, "");
	lv_obj_set_style_local_text_color(ui->copynext_up_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));

	//Write codes copynext_down
	ui->copynext_down = lv_btn_create(ui->copynext, NULL);

	//Write style LV_BTN_PART_MAIN for copynext_down
	static lv_style_t style_copynext_down_main;
	lv_style_init(&style_copynext_down_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_down_main
	lv_style_set_radius(&style_copynext_down_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_down_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_down_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_down_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_down_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_down_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_down_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_copynext_down_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copynext_down_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_copynext_down_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_copynext_down_main
	lv_style_set_radius(&style_copynext_down_main, LV_STATE_FOCUSED, 0);
	lv_style_set_bg_color(&style_copynext_down_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_down_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_down_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_down_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copynext_down_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_down_main, LV_STATE_FOCUSED, 0);
	lv_style_set_border_opa(&style_copynext_down_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copynext_down_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_copynext_down_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copynext_down_main
	lv_style_set_radius(&style_copynext_down_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_copynext_down_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_down_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_down_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_down_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copynext_down_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_down_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_copynext_down_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copynext_down_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_down_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_copynext_down_main
	lv_style_set_radius(&style_copynext_down_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copynext_down_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_down_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_down_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_down_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copynext_down_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_down_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copynext_down_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copynext_down_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_down_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copynext_down, LV_BTN_PART_MAIN, &style_copynext_down_main);
	lv_obj_set_pos(ui->copynext_down, 322, 110);
	lv_obj_set_size(ui->copynext_down, 20, 20);
	ui->copynext_down_label = lv_label_create(ui->copynext_down, NULL);
	lv_label_set_text(ui->copynext_down_label, "");
	lv_obj_set_style_local_text_color(ui->copynext_down_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));

	//Write codes copynext_labelcnt
	ui->copynext_labelcnt = lv_label_create(ui->copynext, NULL);
	lv_label_set_text(ui->copynext_labelcnt, "1");
	lv_label_set_long_mode(ui->copynext_labelcnt, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copynext_labelcnt, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copynext_labelcnt
	static lv_style_t style_copynext_labelcnt_main;
	lv_style_init(&style_copynext_labelcnt_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_labelcnt_main
	lv_style_set_radius(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_labelcnt, LV_LABEL_PART_MAIN, &style_copynext_labelcnt_main);
	lv_obj_set_pos(ui->copynext_labelcnt, 351, 108);
	lv_obj_set_size(ui->copynext_labelcnt, 56, 0);

	//Write codes copynext_labelcolor
	ui->copynext_labelcolor = lv_label_create(ui->copynext, NULL);
	lv_label_set_text(ui->copynext_labelcolor, "Color");
	lv_label_set_long_mode(ui->copynext_labelcolor, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copynext_labelcolor, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copynext_labelcolor
	static lv_style_t style_copynext_labelcolor_main;
	lv_style_init(&style_copynext_labelcolor_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_labelcolor_main
	lv_style_set_radius(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_labelcolor, LV_LABEL_PART_MAIN, &style_copynext_labelcolor_main);
	lv_obj_set_pos(ui->copynext_labelcolor, 314, 146);
	lv_obj_set_size(ui->copynext_labelcolor, 50, 0);

	//Write codes copynext_labelvert
	ui->copynext_labelvert = lv_label_create(ui->copynext, NULL);
	lv_label_set_text(ui->copynext_labelvert, "Verical");
	lv_label_set_long_mode(ui->copynext_labelvert, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copynext_labelvert, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copynext_labelvert
	static lv_style_t style_copynext_labelvert_main;
	lv_style_init(&style_copynext_labelvert_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_labelvert_main
	lv_style_set_radius(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copynext_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_labelvert_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copynext_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_copynext_labelvert_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copynext_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copynext_labelvert, LV_LABEL_PART_MAIN, &style_copynext_labelvert_main);
	lv_obj_set_pos(ui->copynext_labelvert, 380, 146);
	lv_obj_set_size(ui->copynext_labelvert, 70, 0);

	//Write codes copynext_swvert
	ui->copynext_swvert = lv_switch_create(ui->copynext, NULL);

	//Write style LV_SWITCH_PART_BG for copynext_swvert
	static lv_style_t style_copynext_swvert_bg;
	lv_style_init(&style_copynext_swvert_bg);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swvert_bg
	lv_style_set_radius(&style_copynext_swvert_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swvert_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copynext_swvert_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copynext_swvert_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swvert_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swvert, LV_SWITCH_PART_BG, &style_copynext_swvert_bg);

	//Write style LV_SWITCH_PART_INDIC for copynext_swvert
	static lv_style_t style_copynext_swvert_indic;
	lv_style_init(&style_copynext_swvert_indic);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swvert_indic
	lv_style_set_radius(&style_copynext_swvert_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swvert_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_copynext_swvert_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_copynext_swvert_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swvert_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swvert, LV_SWITCH_PART_INDIC, &style_copynext_swvert_indic);

	//Write style LV_SWITCH_PART_KNOB for copynext_swvert
	static lv_style_t style_copynext_swvert_knob;
	lv_style_init(&style_copynext_swvert_knob);

	//Write style state: LV_STATE_DEFAULT for style_copynext_swvert_knob
	lv_style_set_radius(&style_copynext_swvert_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_copynext_swvert_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_swvert_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_swvert_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_swvert_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copynext_swvert, LV_SWITCH_PART_KNOB, &style_copynext_swvert_knob);
	lv_obj_set_pos(ui->copynext_swvert, 390, 175);
	lv_obj_set_size(ui->copynext_swvert, 40, 20);
	lv_switch_set_anim_time(ui->copynext_swvert, 100);

	//Write codes copynext_ddlist1
	ui->copynext_ddlist1 = lv_dropdown_create(ui->copynext, NULL);
	lv_dropdown_set_options(ui->copynext_ddlist1, "Best\nNormal\nDraft");
	lv_dropdown_set_max_height(ui->copynext_ddlist1, 90);

	//Write style LV_DROPDOWN_PART_MAIN for copynext_ddlist1
	static lv_style_t style_copynext_ddlist1_main;
	lv_style_init(&style_copynext_ddlist1_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist1_main
	lv_style_set_radius(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_line_space(&style_copynext_ddlist1_main, LV_STATE_DEFAULT, 20);
	lv_obj_add_style(ui->copynext_ddlist1, LV_DROPDOWN_PART_MAIN, &style_copynext_ddlist1_main);

	//Write style LV_DROPDOWN_PART_SELECTED for copynext_ddlist1
	static lv_style_t style_copynext_ddlist1_selected;
	lv_style_init(&style_copynext_ddlist1_selected);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist1_selected
	lv_style_set_radius(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_copynext_ddlist1_selected, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->copynext_ddlist1, LV_DROPDOWN_PART_SELECTED, &style_copynext_ddlist1_selected);

	//Write style LV_DROPDOWN_PART_LIST for copynext_ddlist1
	static lv_style_t style_copynext_ddlist1_list;
	lv_style_init(&style_copynext_ddlist1_list);

	//Write style state: LV_STATE_DEFAULT for style_copynext_ddlist1_list
	lv_style_set_radius(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_copynext_ddlist1_list, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->copynext_ddlist1, LV_DROPDOWN_PART_LIST, &style_copynext_ddlist1_list);
	lv_obj_set_pos(ui->copynext_ddlist1, 28, 237);
	lv_obj_set_width(ui->copynext_ddlist1, 100);

	//Write codes copynext_print
	ui->copynext_print = lv_btn_create(ui->copynext, NULL);

	//Write style LV_BTN_PART_MAIN for copynext_print
	static lv_style_t style_copynext_print_main;
	lv_style_init(&style_copynext_print_main);

	//Write style state: LV_STATE_DEFAULT for style_copynext_print_main
	lv_style_set_radius(&style_copynext_print_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copynext_print_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_print_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_print_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_print_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copynext_print_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_print_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_copynext_print_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copynext_print_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_outline_opa(&style_copynext_print_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_copynext_print_main
	lv_style_set_radius(&style_copynext_print_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_copynext_print_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_print_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_print_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_print_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copynext_print_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_print_main, LV_STATE_FOCUSED, 0);
	lv_style_set_border_opa(&style_copynext_print_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copynext_print_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_outline_opa(&style_copynext_print_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copynext_print_main
	lv_style_set_radius(&style_copynext_print_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_copynext_print_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copynext_print_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copynext_print_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_print_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copynext_print_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_print_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_copynext_print_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copynext_print_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_outline_opa(&style_copynext_print_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_copynext_print_main
	lv_style_set_radius(&style_copynext_print_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copynext_print_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copynext_print_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copynext_print_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copynext_print_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copynext_print_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copynext_print_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copynext_print_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copynext_print_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copynext_print_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copynext_print, LV_BTN_PART_MAIN, &style_copynext_print_main);
	lv_obj_set_pos(ui->copynext_print, 320, 223);
	lv_obj_set_size(ui->copynext_print, 118, 40);
	ui->copynext_print_label = lv_label_create(ui->copynext_print, NULL);
	lv_label_set_text(ui->copynext_print_label, "PRINT");
	lv_obj_set_style_local_text_color(ui->copynext_print_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->copynext_print_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);
}