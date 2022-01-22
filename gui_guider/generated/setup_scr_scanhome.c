/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_scanhome(lv_ui *ui){

	//Write codes scanhome
	ui->scanhome = lv_obj_create(NULL, NULL);

	//Write codes scanhome_cont0
	ui->scanhome_cont0 = lv_cont_create(ui->scanhome, NULL);

	//Write style LV_CONT_PART_MAIN for scanhome_cont0
	static lv_style_t style_scanhome_cont0_main;
	lv_style_init(&style_scanhome_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_cont0_main
	lv_style_set_radius(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_scanhome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_scanhome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_scanhome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->scanhome_cont0, LV_CONT_PART_MAIN, &style_scanhome_cont0_main);
	lv_obj_set_pos(ui->scanhome_cont0, 0, 0);
	lv_obj_set_size(ui->scanhome_cont0, 480, 100);
	lv_obj_set_click(ui->scanhome_cont0, false);
	lv_cont_set_layout(ui->scanhome_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->scanhome_cont0, LV_FIT_NONE);

	//Write codes scanhome_label1
	ui->scanhome_label1 = lv_label_create(ui->scanhome, NULL);
	lv_label_set_text(ui->scanhome_label1, "ADJUST IMAGE");
	lv_label_set_long_mode(ui->scanhome_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->scanhome_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for scanhome_label1
	static lv_style_t style_scanhome_label1_main;
	lv_style_init(&style_scanhome_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_label1_main
	lv_style_set_radius(&style_scanhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_scanhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_scanhome_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_scanhome_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_scanhome_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_scanhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_scanhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_scanhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_scanhome_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->scanhome_label1, LV_LABEL_PART_MAIN, &style_scanhome_label1_main);
	lv_obj_set_pos(ui->scanhome_label1, 136, 30);
	lv_obj_set_size(ui->scanhome_label1, 225, 0);

	//Write codes scanhome_cont2
	ui->scanhome_cont2 = lv_cont_create(ui->scanhome, NULL);

	//Write style LV_CONT_PART_MAIN for scanhome_cont2
	static lv_style_t style_scanhome_cont2_main;
	lv_style_init(&style_scanhome_cont2_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_cont2_main
	lv_style_set_radius(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_scanhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_cont2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_scanhome_cont2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_scanhome_cont2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->scanhome_cont2, LV_CONT_PART_MAIN, &style_scanhome_cont2_main);
	lv_obj_set_pos(ui->scanhome_cont2, 0, 100);
	lv_obj_set_size(ui->scanhome_cont2, 480, 172);
	lv_obj_set_click(ui->scanhome_cont2, false);
	lv_cont_set_layout(ui->scanhome_cont2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->scanhome_cont2, LV_FIT_NONE);

	//Write codes scanhome_img3
	ui->scanhome_img3 = lv_img_create(ui->scanhome, NULL);

	//Write style LV_IMG_PART_MAIN for scanhome_img3
	static lv_style_t style_scanhome_img3_main;
	lv_style_init(&style_scanhome_img3_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_img3_main
	lv_style_set_image_recolor(&style_scanhome_img3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_scanhome_img3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_scanhome_img3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_img3, LV_IMG_PART_MAIN, &style_scanhome_img3_main);
	lv_obj_set_pos(ui->scanhome_img3, 27, 75);
	lv_obj_set_size(ui->scanhome_img3, 300, 172);
	lv_obj_set_click(ui->scanhome_img3, true);
	lv_img_set_src(ui->scanhome_img3,&_example_alpha_300x172);
	lv_img_set_pivot(ui->scanhome_img3, 0,0);
	lv_img_set_angle(ui->scanhome_img3, 0);

	//Write codes scanhome_cont4
	ui->scanhome_cont4 = lv_cont_create(ui->scanhome, NULL);

	//Write style LV_CONT_PART_MAIN for scanhome_cont4
	static lv_style_t style_scanhome_cont4_main;
	lv_style_init(&style_scanhome_cont4_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_cont4_main
	lv_style_set_radius(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_scanhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_cont4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_scanhome_cont4_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_scanhome_cont4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->scanhome_cont4, LV_CONT_PART_MAIN, &style_scanhome_cont4_main);
	lv_obj_set_pos(ui->scanhome_cont4, 368, 80);
	lv_obj_set_size(ui->scanhome_cont4, 80, 130);
	lv_obj_set_click(ui->scanhome_cont4, false);
	lv_cont_set_layout(ui->scanhome_cont4, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->scanhome_cont4, LV_FIT_NONE);

	//Write codes scanhome_btnscansave
	ui->scanhome_btnscansave = lv_btn_create(ui->scanhome, NULL);

	//Write style LV_BTN_PART_MAIN for scanhome_btnscansave
	static lv_style_t style_scanhome_btnscansave_main;
	lv_style_init(&style_scanhome_btnscansave_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_btnscansave_main
	lv_style_set_radius(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0xff, 0x00));
	lv_style_set_bg_grad_color(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, lv_color_make(0x80, 0xff, 0x00));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_outline_opa(&style_scanhome_btnscansave_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_scanhome_btnscansave_main
	lv_style_set_radius(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscansave_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_scanhome_btnscansave_main
	lv_style_set_radius(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, lv_color_make(0x00, 0xff, 0x40));
	lv_style_set_bg_grad_color(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, lv_color_make(0x00, 0xff, 0x40));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscansave_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_scanhome_btnscansave_main
	lv_style_set_radius(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscansave_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->scanhome_btnscansave, LV_BTN_PART_MAIN, &style_scanhome_btnscansave_main);
	lv_obj_set_pos(ui->scanhome_btnscansave, 368, 221);
	lv_obj_set_size(ui->scanhome_btnscansave, 80, 40);
	ui->scanhome_btnscansave_label = lv_label_create(ui->scanhome_btnscansave, NULL);
	lv_label_set_text(ui->scanhome_btnscansave_label, "SAVE");
	lv_obj_set_style_local_text_color(ui->scanhome_btnscansave_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->scanhome_btnscansave_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes scanhome_sliderhue
	ui->scanhome_sliderhue = lv_slider_create(ui->scanhome, NULL);

	//Write style LV_SLIDER_PART_INDIC for scanhome_sliderhue
	static lv_style_t style_scanhome_sliderhue_indic;
	lv_style_init(&style_scanhome_sliderhue_indic);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderhue_indic
	lv_style_set_radius(&style_scanhome_sliderhue_indic, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderhue_indic, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_scanhome_sliderhue_indic, LV_STATE_DEFAULT, lv_color_make(0xdd, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderhue_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderhue_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_sliderhue, LV_SLIDER_PART_INDIC, &style_scanhome_sliderhue_indic);

	//Write style LV_SLIDER_PART_BG for scanhome_sliderhue
	static lv_style_t style_scanhome_sliderhue_bg;
	lv_style_init(&style_scanhome_sliderhue_bg);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderhue_bg
	lv_style_set_radius(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_sliderhue_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_scanhome_sliderhue_bg
	lv_style_set_outline_color(&style_scanhome_sliderhue_bg, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_sliderhue_bg, LV_STATE_FOCUSED, 255);
	lv_obj_add_style(ui->scanhome_sliderhue, LV_SLIDER_PART_BG, &style_scanhome_sliderhue_bg);

	//Write style LV_SLIDER_PART_KNOB for scanhome_sliderhue
	static lv_style_t style_scanhome_sliderhue_knob;
	lv_style_init(&style_scanhome_sliderhue_knob);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderhue_knob
	lv_style_set_radius(&style_scanhome_sliderhue_knob, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderhue_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_sliderhue_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderhue_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderhue_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_sliderhue, LV_SLIDER_PART_KNOB, &style_scanhome_sliderhue_knob);
	lv_obj_set_pos(ui->scanhome_sliderhue, 420, 115);
	lv_obj_set_size(ui->scanhome_sliderhue, 8, 80);
	lv_slider_set_range(ui->scanhome_sliderhue,0, 100);
	lv_slider_set_value(ui->scanhome_sliderhue,50,false);

	//Write codes scanhome_sliderbright
	ui->scanhome_sliderbright = lv_slider_create(ui->scanhome, NULL);

	//Write style LV_SLIDER_PART_INDIC for scanhome_sliderbright
	static lv_style_t style_scanhome_sliderbright_indic;
	lv_style_init(&style_scanhome_sliderbright_indic);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderbright_indic
	lv_style_set_radius(&style_scanhome_sliderbright_indic, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderbright_indic, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_scanhome_sliderbright_indic, LV_STATE_DEFAULT, lv_color_make(0xdd, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderbright_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderbright_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_sliderbright, LV_SLIDER_PART_INDIC, &style_scanhome_sliderbright_indic);

	//Write style LV_SLIDER_PART_BG for scanhome_sliderbright
	static lv_style_t style_scanhome_sliderbright_bg;
	lv_style_init(&style_scanhome_sliderbright_bg);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderbright_bg
	lv_style_set_radius(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_sliderbright_bg, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_scanhome_sliderbright_bg
	lv_style_set_outline_color(&style_scanhome_sliderbright_bg, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_sliderbright_bg, LV_STATE_FOCUSED, 255);
	lv_obj_add_style(ui->scanhome_sliderbright, LV_SLIDER_PART_BG, &style_scanhome_sliderbright_bg);

	//Write style LV_SLIDER_PART_KNOB for scanhome_sliderbright
	static lv_style_t style_scanhome_sliderbright_knob;
	lv_style_init(&style_scanhome_sliderbright_knob);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_sliderbright_knob
	lv_style_set_radius(&style_scanhome_sliderbright_knob, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_scanhome_sliderbright_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_sliderbright_knob, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_sliderbright_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_sliderbright_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_sliderbright, LV_SLIDER_PART_KNOB, &style_scanhome_sliderbright_knob);
	lv_obj_set_pos(ui->scanhome_sliderbright, 380, 115);
	lv_obj_set_size(ui->scanhome_sliderbright, 8, 80);
	lv_slider_set_range(ui->scanhome_sliderbright,0, 100);
	lv_slider_set_value(ui->scanhome_sliderbright,50,false);

	//Write codes scanhome_bright
	ui->scanhome_bright = lv_img_create(ui->scanhome, NULL);

	//Write style LV_IMG_PART_MAIN for scanhome_bright
	static lv_style_t style_scanhome_bright_main;
	lv_style_init(&style_scanhome_bright_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_bright_main
	lv_style_set_image_recolor(&style_scanhome_bright_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_scanhome_bright_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_scanhome_bright_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_bright, LV_IMG_PART_MAIN, &style_scanhome_bright_main);
	lv_obj_set_pos(ui->scanhome_bright, 372, 82);
	lv_obj_set_size(ui->scanhome_bright, 24, 24);
	lv_obj_set_click(ui->scanhome_bright, true);
	lv_img_set_src(ui->scanhome_bright,&_bright_alpha_24x24);
	lv_img_set_pivot(ui->scanhome_bright, 0,0);
	lv_img_set_angle(ui->scanhome_bright, 0);

	//Write codes scanhome_hue
	ui->scanhome_hue = lv_img_create(ui->scanhome, NULL);

	//Write style LV_IMG_PART_MAIN for scanhome_hue
	static lv_style_t style_scanhome_hue_main;
	lv_style_init(&style_scanhome_hue_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_hue_main
	lv_style_set_image_recolor(&style_scanhome_hue_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_scanhome_hue_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_scanhome_hue_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->scanhome_hue, LV_IMG_PART_MAIN, &style_scanhome_hue_main);
	lv_obj_set_pos(ui->scanhome_hue, 413, 83);
	lv_obj_set_size(ui->scanhome_hue, 21, 21);
	lv_obj_set_click(ui->scanhome_hue, true);
	lv_img_set_src(ui->scanhome_hue,&_hue_alpha_21x21);
	lv_img_set_pivot(ui->scanhome_hue, 0,0);
	lv_img_set_angle(ui->scanhome_hue, 0);

	//Write codes scanhome_btnscanback
	ui->scanhome_btnscanback = lv_btn_create(ui->scanhome, NULL);

	//Write style LV_BTN_PART_MAIN for scanhome_btnscanback
	static lv_style_t style_scanhome_btnscanback_main;
	lv_style_init(&style_scanhome_btnscanback_main);

	//Write style state: LV_STATE_DEFAULT for style_scanhome_btnscanback_main
	lv_style_set_radius(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscanback_main, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_scanhome_btnscanback_main
	lv_style_set_radius(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscanback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_scanhome_btnscanback_main
	lv_style_set_radius(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscanback_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_scanhome_btnscanback_main
	lv_style_set_radius(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_scanhome_btnscanback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->scanhome_btnscanback, LV_BTN_PART_MAIN, &style_scanhome_btnscanback_main);
	lv_obj_set_pos(ui->scanhome_btnscanback, 50, 25);
	lv_obj_set_size(ui->scanhome_btnscanback, 30, 30);
	ui->scanhome_btnscanback_label = lv_label_create(ui->scanhome_btnscanback, NULL);
	lv_label_set_text(ui->scanhome_btnscanback_label, "");
	lv_obj_set_style_local_text_color(ui->scanhome_btnscanback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
}