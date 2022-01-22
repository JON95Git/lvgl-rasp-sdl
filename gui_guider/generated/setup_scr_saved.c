/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_saved(lv_ui *ui){

	//Write codes saved
	ui->saved = lv_obj_create(NULL, NULL);

	//Write codes saved_cont0
	ui->saved_cont0 = lv_cont_create(ui->saved, NULL);

	//Write style LV_CONT_PART_MAIN for saved_cont0
	static lv_style_t style_saved_cont0_main;
	lv_style_init(&style_saved_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_saved_cont0_main
	lv_style_set_radius(&style_saved_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_saved_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_color(&style_saved_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_dir(&style_saved_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_saved_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_saved_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_saved_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_saved_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_saved_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_saved_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_saved_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->saved_cont0, LV_CONT_PART_MAIN, &style_saved_cont0_main);
	lv_obj_set_pos(ui->saved_cont0, 0, 0);
	lv_obj_set_size(ui->saved_cont0, 480, 272);
	lv_obj_set_click(ui->saved_cont0, false);
	lv_cont_set_layout(ui->saved_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->saved_cont0, LV_FIT_NONE);

	//Write codes saved_btnsavecontinue
	ui->saved_btnsavecontinue = lv_btn_create(ui->saved, NULL);

	//Write style LV_BTN_PART_MAIN for saved_btnsavecontinue
	static lv_style_t style_saved_btnsavecontinue_main;
	lv_style_init(&style_saved_btnsavecontinue_main);

	//Write style state: LV_STATE_DEFAULT for style_saved_btnsavecontinue_main
	lv_style_set_radius(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_color(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_dir(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_saved_btnsavecontinue_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_saved_btnsavecontinue_main
	lv_style_set_radius(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_saved_btnsavecontinue_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_saved_btnsavecontinue_main
	lv_style_set_radius(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_color(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_dir(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_saved_btnsavecontinue_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_saved_btnsavecontinue_main
	lv_style_set_radius(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_saved_btnsavecontinue_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->saved_btnsavecontinue, LV_BTN_PART_MAIN, &style_saved_btnsavecontinue_main);
	lv_obj_set_pos(ui->saved_btnsavecontinue, 168, 195);
	lv_obj_set_size(ui->saved_btnsavecontinue, 140, 40);
	ui->saved_btnsavecontinue_label = lv_label_create(ui->saved_btnsavecontinue, NULL);
	lv_label_set_text(ui->saved_btnsavecontinue_label, "CONTINUE");
	lv_obj_set_style_local_text_color(ui->saved_btnsavecontinue_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->saved_btnsavecontinue_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_18);

	//Write codes saved_label2
	ui->saved_label2 = lv_label_create(ui->saved, NULL);
	lv_label_set_text(ui->saved_label2, "File saved");
	lv_label_set_long_mode(ui->saved_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->saved_label2, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for saved_label2
	static lv_style_t style_saved_label2_main;
	lv_style_init(&style_saved_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_saved_label2_main
	lv_style_set_radius(&style_saved_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_saved_label2_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_color(&style_saved_label2_main, LV_STATE_DEFAULT, lv_color_make(0x4a, 0xb2, 0x41));
	lv_style_set_bg_grad_dir(&style_saved_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_saved_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_saved_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_saved_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_saved_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_saved_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_saved_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_saved_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_saved_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->saved_label2, LV_LABEL_PART_MAIN, &style_saved_label2_main);
	lv_obj_set_pos(ui->saved_label2, 187, 160);
	lv_obj_set_size(ui->saved_label2, 180, 0);

	//Write codes saved_img1
	ui->saved_img1 = lv_img_create(ui->saved, NULL);

	//Write style LV_IMG_PART_MAIN for saved_img1
	static lv_style_t style_saved_img1_main;
	lv_style_init(&style_saved_img1_main);

	//Write style state: LV_STATE_DEFAULT for style_saved_img1_main
	lv_style_set_image_recolor(&style_saved_img1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_saved_img1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_saved_img1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->saved_img1, LV_IMG_PART_MAIN, &style_saved_img1_main);
	lv_obj_set_pos(ui->saved_img1, 185, 40);
	lv_obj_set_size(ui->saved_img1, 100, 100);
	lv_obj_set_click(ui->saved_img1, true);
	lv_img_set_src(ui->saved_img1,&_ready_alpha_100x100);
	lv_img_set_pivot(ui->saved_img1, 0,0);
	lv_img_set_angle(ui->saved_img1, 0);
}