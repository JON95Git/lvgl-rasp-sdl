/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_copyhome(lv_ui *ui){

	//Write codes copyhome
	ui->copyhome = lv_obj_create(NULL, NULL);

	//Write codes copyhome_cont1
	ui->copyhome_cont1 = lv_cont_create(ui->copyhome, NULL);

	//Write style LV_CONT_PART_MAIN for copyhome_cont1
	static lv_style_t style_copyhome_cont1_main;
	lv_style_init(&style_copyhome_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_cont1_main
	lv_style_set_radius(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copyhome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copyhome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copyhome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copyhome_cont1, LV_CONT_PART_MAIN, &style_copyhome_cont1_main);
	lv_obj_set_pos(ui->copyhome_cont1, 0, 0);
	lv_obj_set_size(ui->copyhome_cont1, 480, 100);
	lv_obj_set_click(ui->copyhome_cont1, false);
	lv_cont_set_layout(ui->copyhome_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copyhome_cont1, LV_FIT_NONE);

	//Write codes copyhome_cont2
	ui->copyhome_cont2 = lv_cont_create(ui->copyhome, NULL);

	//Write style LV_CONT_PART_MAIN for copyhome_cont2
	static lv_style_t style_copyhome_cont2_main;
	lv_style_init(&style_copyhome_cont2_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_cont2_main
	lv_style_set_radius(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copyhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_cont2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copyhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copyhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copyhome_cont2, LV_CONT_PART_MAIN, &style_copyhome_cont2_main);
	lv_obj_set_pos(ui->copyhome_cont2, 0, 100);
	lv_obj_set_size(ui->copyhome_cont2, 480, 172);
	lv_obj_set_click(ui->copyhome_cont2, false);
	lv_cont_set_layout(ui->copyhome_cont2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copyhome_cont2, LV_FIT_NONE);

	//Write codes copyhome_label1
	ui->copyhome_label1 = lv_label_create(ui->copyhome, NULL);
	lv_label_set_text(ui->copyhome_label1, "ADJUST IMAGE");
	lv_label_set_long_mode(ui->copyhome_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->copyhome_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for copyhome_label1
	static lv_style_t style_copyhome_label1_main;
	lv_style_init(&style_copyhome_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_label1_main
	lv_style_set_radius(&style_copyhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copyhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_copyhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_copyhome_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_copyhome_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_copyhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copyhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copyhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copyhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copyhome_label1, LV_LABEL_PART_MAIN, &style_copyhome_label1_main);
	lv_obj_set_pos(ui->copyhome_label1, 136, 30);
	lv_obj_set_size(ui->copyhome_label1, 225, 0);

	//Write codes copyhome_img3
	ui->copyhome_img3 = lv_img_create(ui->copyhome, NULL);

	//Write style LV_IMG_PART_MAIN for copyhome_img3
	static lv_style_t style_copyhome_img3_main;
	lv_style_init(&style_copyhome_img3_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_img3_main
	lv_style_set_image_recolor(&style_copyhome_img3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_copyhome_img3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_copyhome_img3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_img3, LV_IMG_PART_MAIN, &style_copyhome_img3_main);
	lv_obj_set_pos(ui->copyhome_img3, 27, 75);
	lv_obj_set_size(ui->copyhome_img3, 300, 172);
	lv_obj_set_click(ui->copyhome_img3, true);
	lv_img_set_src(ui->copyhome_img3,&_example_alpha_300x172);
	lv_img_set_pivot(ui->copyhome_img3, 0,0);
	lv_img_set_angle(ui->copyhome_img3, 0);

	//Write codes copyhome_cont4
	ui->copyhome_cont4 = lv_cont_create(ui->copyhome, NULL);

	//Write style LV_CONT_PART_MAIN for copyhome_cont4
	static lv_style_t style_copyhome_cont4_main;
	lv_style_init(&style_copyhome_cont4_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_cont4_main
	lv_style_set_radius(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copyhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_cont4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copyhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_copyhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->copyhome_cont4, LV_CONT_PART_MAIN, &style_copyhome_cont4_main);
	lv_obj_set_pos(ui->copyhome_cont4, 368, 80);
	lv_obj_set_size(ui->copyhome_cont4, 80, 130);
	lv_obj_set_click(ui->copyhome_cont4, false);
	lv_cont_set_layout(ui->copyhome_cont4, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->copyhome_cont4, LV_FIT_NONE);

	//Write codes copyhome_btncopynext
	ui->copyhome_btncopynext = lv_btn_create(ui->copyhome, NULL);

	//Write style LV_BTN_PART_MAIN for copyhome_btncopynext
	static lv_style_t style_copyhome_btncopynext_main;
	lv_style_init(&style_copyhome_btncopynext_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_btncopynext_main
	lv_style_set_radius(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_color(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopynext_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_copyhome_btncopynext_main
	lv_style_set_radius(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopynext_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copyhome_btncopynext_main
	lv_style_set_radius(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopynext_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_copyhome_btncopynext_main
	lv_style_set_radius(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopynext_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copyhome_btncopynext, LV_BTN_PART_MAIN, &style_copyhome_btncopynext_main);
	lv_obj_set_pos(ui->copyhome_btncopynext, 368, 221);
	lv_obj_set_size(ui->copyhome_btncopynext, 80, 40);
	ui->copyhome_btncopynext_label = lv_label_create(ui->copyhome_btncopynext, NULL);
	lv_label_set_text(ui->copyhome_btncopynext_label, "NEXT");
	lv_obj_set_style_local_text_color(ui->copyhome_btncopynext_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->copyhome_btncopynext_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes copyhome_sliderhue
	ui->copyhome_sliderhue = lv_slider_create(ui->copyhome, NULL);

	//Write style LV_SLIDER_PART_INDIC for copyhome_sliderhue
	static lv_style_t style_copyhome_sliderhue_indic;
	lv_style_init(&style_copyhome_sliderhue_indic);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderhue_indic
	lv_style_set_radius(&style_copyhome_sliderhue_indic, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderhue_indic, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copyhome_sliderhue_indic, LV_STATE_DEFAULT, lv_color_make(0xdd, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderhue_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderhue_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_sliderhue, LV_SLIDER_PART_INDIC, &style_copyhome_sliderhue_indic);

	//Write style LV_SLIDER_PART_BG for copyhome_sliderhue
	static lv_style_t style_copyhome_sliderhue_bg;
	lv_style_init(&style_copyhome_sliderhue_bg);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderhue_bg
	lv_style_set_radius(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_sliderhue_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_copyhome_sliderhue_bg
	lv_style_set_outline_color(&style_copyhome_sliderhue_bg, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_sliderhue_bg, LV_STATE_FOCUSED, 255);
	lv_obj_add_style(ui->copyhome_sliderhue, LV_SLIDER_PART_BG, &style_copyhome_sliderhue_bg);

	//Write style LV_SLIDER_PART_KNOB for copyhome_sliderhue
	static lv_style_t style_copyhome_sliderhue_knob;
	lv_style_init(&style_copyhome_sliderhue_knob);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderhue_knob
	lv_style_set_radius(&style_copyhome_sliderhue_knob, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderhue_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_sliderhue_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderhue_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderhue_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_sliderhue, LV_SLIDER_PART_KNOB, &style_copyhome_sliderhue_knob);
	lv_obj_set_pos(ui->copyhome_sliderhue, 420, 115);
	lv_obj_set_size(ui->copyhome_sliderhue, 8, 80);
	lv_slider_set_range(ui->copyhome_sliderhue,0, 100);
	lv_slider_set_value(ui->copyhome_sliderhue,50,false);

	//Write codes copyhome_sliderbright
	ui->copyhome_sliderbright = lv_slider_create(ui->copyhome, NULL);

	//Write style LV_SLIDER_PART_INDIC for copyhome_sliderbright
	static lv_style_t style_copyhome_sliderbright_indic;
	lv_style_init(&style_copyhome_sliderbright_indic);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderbright_indic
	lv_style_set_radius(&style_copyhome_sliderbright_indic, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderbright_indic, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copyhome_sliderbright_indic, LV_STATE_DEFAULT, lv_color_make(0xdd, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderbright_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderbright_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_sliderbright, LV_SLIDER_PART_INDIC, &style_copyhome_sliderbright_indic);

	//Write style LV_SLIDER_PART_BG for copyhome_sliderbright
	static lv_style_t style_copyhome_sliderbright_bg;
	lv_style_init(&style_copyhome_sliderbright_bg);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderbright_bg
	lv_style_set_radius(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_sliderbright_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_copyhome_sliderbright_bg
	lv_style_set_outline_color(&style_copyhome_sliderbright_bg, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_sliderbright_bg, LV_STATE_FOCUSED, 255);
	lv_obj_add_style(ui->copyhome_sliderbright, LV_SLIDER_PART_BG, &style_copyhome_sliderbright_bg);

	//Write style LV_SLIDER_PART_KNOB for copyhome_sliderbright
	static lv_style_t style_copyhome_sliderbright_knob;
	lv_style_init(&style_copyhome_sliderbright_knob);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_sliderbright_knob
	lv_style_set_radius(&style_copyhome_sliderbright_knob, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_copyhome_sliderbright_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_sliderbright_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_sliderbright_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_sliderbright_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_sliderbright, LV_SLIDER_PART_KNOB, &style_copyhome_sliderbright_knob);
	lv_obj_set_pos(ui->copyhome_sliderbright, 380, 115);
	lv_obj_set_size(ui->copyhome_sliderbright, 8, 80);
	lv_slider_set_range(ui->copyhome_sliderbright,0, 100);
	lv_slider_set_value(ui->copyhome_sliderbright,50,false);

	//Write codes copyhome_bright
	ui->copyhome_bright = lv_img_create(ui->copyhome, NULL);

	//Write style LV_IMG_PART_MAIN for copyhome_bright
	static lv_style_t style_copyhome_bright_main;
	lv_style_init(&style_copyhome_bright_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_bright_main
	lv_style_set_image_recolor(&style_copyhome_bright_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_copyhome_bright_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_copyhome_bright_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_bright, LV_IMG_PART_MAIN, &style_copyhome_bright_main);
	lv_obj_set_pos(ui->copyhome_bright, 372, 82);
	lv_obj_set_size(ui->copyhome_bright, 24, 24);
	lv_obj_set_click(ui->copyhome_bright, true);
	lv_img_set_src(ui->copyhome_bright,&_bright_alpha_24x24);
	lv_img_set_pivot(ui->copyhome_bright, 0,0);
	lv_img_set_angle(ui->copyhome_bright, 0);

	//Write codes copyhome_hue
	ui->copyhome_hue = lv_img_create(ui->copyhome, NULL);

	//Write style LV_IMG_PART_MAIN for copyhome_hue
	static lv_style_t style_copyhome_hue_main;
	lv_style_init(&style_copyhome_hue_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_hue_main
	lv_style_set_image_recolor(&style_copyhome_hue_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_copyhome_hue_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_copyhome_hue_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->copyhome_hue, LV_IMG_PART_MAIN, &style_copyhome_hue_main);
	lv_obj_set_pos(ui->copyhome_hue, 413, 83);
	lv_obj_set_size(ui->copyhome_hue, 21, 21);
	lv_obj_set_click(ui->copyhome_hue, true);
	lv_img_set_src(ui->copyhome_hue,&_hue_alpha_21x21);
	lv_img_set_pivot(ui->copyhome_hue, 0,0);
	lv_img_set_angle(ui->copyhome_hue, 0);

	//Write codes copyhome_btncopyback
	ui->copyhome_btncopyback = lv_btn_create(ui->copyhome, NULL);

	//Write style LV_BTN_PART_MAIN for copyhome_btncopyback
	static lv_style_t style_copyhome_btncopyback_main;
	lv_style_init(&style_copyhome_btncopyback_main);

	//Write style state: LV_STATE_DEFAULT for style_copyhome_btncopyback_main
	lv_style_set_radius(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopyback_main, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_copyhome_btncopyback_main
	lv_style_set_radius(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopyback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_copyhome_btncopyback_main
	lv_style_set_radius(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopyback_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_copyhome_btncopyback_main
	lv_style_set_radius(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_copyhome_btncopyback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->copyhome_btncopyback, LV_BTN_PART_MAIN, &style_copyhome_btncopyback_main);
	lv_obj_set_pos(ui->copyhome_btncopyback, 50, 25);
	lv_obj_set_size(ui->copyhome_btncopyback, 30, 30);
	ui->copyhome_btncopyback_label = lv_label_create(ui->copyhome_btncopyback, NULL);
	lv_label_set_text(ui->copyhome_btncopyback_label, "");
	lv_obj_set_style_local_text_color(ui->copyhome_btncopyback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
}