/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_prthome(lv_ui *ui){

	//Write codes prthome
	ui->prthome = lv_obj_create(NULL, NULL);

	//Write codes prthome_cont0
	ui->prthome_cont0 = lv_cont_create(ui->prthome, NULL);

	//Write style LV_CONT_PART_MAIN for prthome_cont0
	static lv_style_t style_prthome_cont0_main;
	lv_style_init(&style_prthome_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_cont0_main
	lv_style_set_radius(&style_prthome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prthome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prthome_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prthome_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prthome_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prthome_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prthome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_cont0, LV_CONT_PART_MAIN, &style_prthome_cont0_main);
	lv_obj_set_pos(ui->prthome_cont0, 0, 0);
	lv_obj_set_size(ui->prthome_cont0, 480, 100);
	lv_obj_set_click(ui->prthome_cont0, false);
	lv_cont_set_layout(ui->prthome_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prthome_cont0, LV_FIT_NONE);

	//Write codes prthome_cont3
	ui->prthome_cont3 = lv_cont_create(ui->prthome, NULL);

	//Write style LV_CONT_PART_MAIN for prthome_cont3
	static lv_style_t style_prthome_cont3_main;
	lv_style_init(&style_prthome_cont3_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_cont3_main
	lv_style_set_radius(&style_prthome_cont3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_cont3_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_cont3_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_cont3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_cont3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prthome_cont3_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prthome_cont3_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prthome_cont3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prthome_cont3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_cont3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_cont3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_cont3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_cont3, LV_CONT_PART_MAIN, &style_prthome_cont3_main);
	lv_obj_set_pos(ui->prthome_cont3, 0, 100);
	lv_obj_set_size(ui->prthome_cont3, 480, 172);
	lv_obj_set_click(ui->prthome_cont3, false);
	lv_cont_set_layout(ui->prthome_cont3, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prthome_cont3, LV_FIT_NONE);

	//Write codes prthome_cont1
	ui->prthome_cont1 = lv_cont_create(ui->prthome, NULL);

	//Write style LV_CONT_PART_MAIN for prthome_cont1
	static lv_style_t style_prthome_cont1_main;
	lv_style_init(&style_prthome_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_cont1_main
	lv_style_set_radius(&style_prthome_cont1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_prthome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prthome_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prthome_cont1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prthome_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prthome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_cont1, LV_CONT_PART_MAIN, &style_prthome_cont1_main);
	lv_obj_set_pos(ui->prthome_cont1, 40, 60);
	lv_obj_set_size(ui->prthome_cont1, 400, 140);
	lv_obj_set_click(ui->prthome_cont1, false);
	lv_cont_set_layout(ui->prthome_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prthome_cont1, LV_FIT_NONE);

	//Write codes prthome_label4
	ui->prthome_label4 = lv_label_create(ui->prthome, NULL);
	lv_label_set_text(ui->prthome_label4, "PRINT MENU");
	lv_label_set_long_mode(ui->prthome_label4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prthome_label4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prthome_label4
	static lv_style_t style_prthome_label4_main;
	lv_style_init(&style_prthome_label4_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_label4_main
	lv_style_set_radius(&style_prthome_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_label4_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prthome_label4_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prthome_label4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_label4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prthome_label4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prthome_label4_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_prthome_label4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prthome_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_label4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_label4, LV_LABEL_PART_MAIN, &style_prthome_label4_main);
	lv_obj_set_pos(ui->prthome_label4, 169, 16);
	lv_obj_set_size(ui->prthome_label4, 137, 0);

	//Write codes prthome_imgbtnit
	ui->prthome_imgbtnit = lv_imgbtn_create(ui->prthome, NULL);

	//Write style LV_IMGBTN_PART_MAIN for prthome_imgbtnit
	static lv_style_t style_prthome_imgbtnit_main;
	lv_style_init(&style_prthome_imgbtnit_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_imgbtnit_main
	lv_style_set_text_color(&style_prthome_imgbtnit_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_prthome_imgbtnit_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_imgbtnit_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_prthome_imgbtnit_main
	lv_style_set_text_color(&style_prthome_imgbtnit_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnit_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnit_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_prthome_imgbtnit_main
	lv_style_set_text_color(&style_prthome_imgbtnit_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnit_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnit_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->prthome_imgbtnit, LV_IMGBTN_PART_MAIN, &style_prthome_imgbtnit_main);
	lv_obj_set_pos(ui->prthome_imgbtnit, 325, 60);
	lv_obj_set_size(ui->prthome_imgbtnit, 115, 140);
	lv_imgbtn_set_src(ui->prthome_imgbtnit,LV_BTN_STATE_RELEASED,&_btn4_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnit,LV_BTN_STATE_PRESSED,&_btn4_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnit,LV_BTN_STATE_CHECKED_RELEASED,&_btn4_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnit,LV_BTN_STATE_CHECKED_PRESSED,&_btn4_alpha_115x140);

	//Write codes prthome_imgbtnusb
	ui->prthome_imgbtnusb = lv_imgbtn_create(ui->prthome, NULL);

	//Write style LV_IMGBTN_PART_MAIN for prthome_imgbtnusb
	static lv_style_t style_prthome_imgbtnusb_main;
	lv_style_init(&style_prthome_imgbtnusb_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_imgbtnusb_main
	lv_style_set_text_color(&style_prthome_imgbtnusb_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_prthome_imgbtnusb_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_imgbtnusb_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_prthome_imgbtnusb_main
	lv_style_set_text_color(&style_prthome_imgbtnusb_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnusb_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnusb_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_prthome_imgbtnusb_main
	lv_style_set_text_color(&style_prthome_imgbtnusb_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnusb_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnusb_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->prthome_imgbtnusb, LV_IMGBTN_PART_MAIN, &style_prthome_imgbtnusb_main);
	lv_obj_set_pos(ui->prthome_imgbtnusb, 40, 60);
	lv_obj_set_size(ui->prthome_imgbtnusb, 115, 140);
	lv_imgbtn_set_src(ui->prthome_imgbtnusb,LV_BTN_STATE_RELEASED,&_btn2_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnusb,LV_BTN_STATE_PRESSED,&_btn2_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnusb,LV_BTN_STATE_CHECKED_RELEASED,&_btn2_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnusb,LV_BTN_STATE_CHECKED_PRESSED,&_btn2_alpha_115x140);

	//Write codes prthome_imgbtnmobile
	ui->prthome_imgbtnmobile = lv_imgbtn_create(ui->prthome, NULL);

	//Write style LV_IMGBTN_PART_MAIN for prthome_imgbtnmobile
	static lv_style_t style_prthome_imgbtnmobile_main;
	lv_style_init(&style_prthome_imgbtnmobile_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_imgbtnmobile_main
	lv_style_set_text_color(&style_prthome_imgbtnmobile_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_prthome_imgbtnmobile_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_imgbtnmobile_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_PRESSED for style_prthome_imgbtnmobile_main
	lv_style_set_text_color(&style_prthome_imgbtnmobile_main, LV_STATE_PRESSED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnmobile_main, LV_STATE_PRESSED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnmobile_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_prthome_imgbtnmobile_main
	lv_style_set_text_color(&style_prthome_imgbtnmobile_main, LV_STATE_CHECKED, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_image_recolor(&style_prthome_imgbtnmobile_main, LV_STATE_CHECKED, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_prthome_imgbtnmobile_main, LV_STATE_CHECKED, 0);
	lv_obj_add_style(ui->prthome_imgbtnmobile, LV_IMGBTN_PART_MAIN, &style_prthome_imgbtnmobile_main);
	lv_obj_set_pos(ui->prthome_imgbtnmobile, 183, 60);
	lv_obj_set_size(ui->prthome_imgbtnmobile, 115, 140);
	lv_imgbtn_set_src(ui->prthome_imgbtnmobile,LV_BTN_STATE_RELEASED,&_btn3_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnmobile,LV_BTN_STATE_PRESSED,&_btn3_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnmobile,LV_BTN_STATE_CHECKED_RELEASED,&_btn3_alpha_115x140);
	lv_imgbtn_set_src(ui->prthome_imgbtnmobile,LV_BTN_STATE_CHECKED_PRESSED,&_btn3_alpha_115x140);

	//Write codes prthome_labelusb
	ui->prthome_labelusb = lv_label_create(ui->prthome, NULL);
	lv_label_set_text(ui->prthome_labelusb, "USB");
	lv_label_set_long_mode(ui->prthome_labelusb, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prthome_labelusb, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for prthome_labelusb
	static lv_style_t style_prthome_labelusb_main;
	lv_style_init(&style_prthome_labelusb_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_labelusb_main
	lv_style_set_radius(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_labelusb_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_labelusb_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_labelusb_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_prthome_labelusb_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prthome_labelusb_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_labelusb_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_labelusb, LV_LABEL_PART_MAIN, &style_prthome_labelusb_main);
	lv_obj_set_pos(ui->prthome_labelusb, 58, 160);
	lv_obj_set_size(ui->prthome_labelusb, 74, 0);

	//Write codes prthome_labelmobile
	ui->prthome_labelmobile = lv_label_create(ui->prthome, NULL);
	lv_label_set_text(ui->prthome_labelmobile, "MOBILE");
	lv_label_set_long_mode(ui->prthome_labelmobile, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prthome_labelmobile, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for prthome_labelmobile
	static lv_style_t style_prthome_labelmobile_main;
	lv_style_init(&style_prthome_labelmobile_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_labelmobile_main
	lv_style_set_radius(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_labelmobile_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_labelmobile, LV_LABEL_PART_MAIN, &style_prthome_labelmobile_main);
	lv_obj_set_pos(ui->prthome_labelmobile, 198, 160);
	lv_obj_set_size(ui->prthome_labelmobile, 74, 0);

	//Write codes prthome_labelit
	ui->prthome_labelit = lv_label_create(ui->prthome, NULL);
	lv_label_set_text(ui->prthome_labelit, "INTERNET");
	lv_label_set_long_mode(ui->prthome_labelit, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prthome_labelit, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for prthome_labelit
	static lv_style_t style_prthome_labelit_main;
	lv_style_init(&style_prthome_labelit_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_labelit_main
	lv_style_set_radius(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_labelit_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_labelit_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_labelit_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_prthome_labelit_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prthome_labelit_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prthome_labelit_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_labelit_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_labelit, LV_LABEL_PART_MAIN, &style_prthome_labelit_main);
	lv_obj_set_pos(ui->prthome_labelit, 340, 160);
	lv_obj_set_size(ui->prthome_labelit, 85, 0);

	//Write codes prthome_label2
	ui->prthome_label2 = lv_label_create(ui->prthome, NULL);
	lv_label_set_text(ui->prthome_label2, "From where do you want to print ?");
	lv_label_set_long_mode(ui->prthome_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prthome_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prthome_label2
	static lv_style_t style_prthome_label2_main;
	lv_style_init(&style_prthome_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_label2_main
	lv_style_set_radius(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_label2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_label2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_prthome_label2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_prthome_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_20);
	lv_style_set_text_letter_space(&style_prthome_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prthome_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prthome_label2, LV_LABEL_PART_MAIN, &style_prthome_label2_main);
	lv_obj_set_pos(ui->prthome_label2, 16, 218);
	lv_obj_set_size(ui->prthome_label2, 440, 0);

	//Write codes prthome_usb
	ui->prthome_usb = lv_img_create(ui->prthome, NULL);

	//Write style LV_IMG_PART_MAIN for prthome_usb
	static lv_style_t style_prthome_usb_main;
	lv_style_init(&style_prthome_usb_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_usb_main
	lv_style_set_image_recolor(&style_prthome_usb_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_usb_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_usb_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prthome_usb, LV_IMG_PART_MAIN, &style_prthome_usb_main);
	lv_obj_set_pos(ui->prthome_usb, 100, 85);
	lv_obj_set_size(ui->prthome_usb, 30, 30);
	lv_obj_set_click(ui->prthome_usb, true);
	lv_img_set_src(ui->prthome_usb,&_usb_alpha_30x30);
	lv_img_set_pivot(ui->prthome_usb, 0,0);
	lv_img_set_angle(ui->prthome_usb, 0);

	//Write codes prthome_mobile
	ui->prthome_mobile = lv_img_create(ui->prthome, NULL);

	//Write style LV_IMG_PART_MAIN for prthome_mobile
	static lv_style_t style_prthome_mobile_main;
	lv_style_init(&style_prthome_mobile_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_mobile_main
	lv_style_set_image_recolor(&style_prthome_mobile_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_mobile_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_mobile_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prthome_mobile, LV_IMG_PART_MAIN, &style_prthome_mobile_main);
	lv_obj_set_pos(ui->prthome_mobile, 242, 85);
	lv_obj_set_size(ui->prthome_mobile, 30, 30);
	lv_obj_set_click(ui->prthome_mobile, true);
	lv_img_set_src(ui->prthome_mobile,&_mobile_alpha_30x30);
	lv_img_set_pivot(ui->prthome_mobile, 0,0);
	lv_img_set_angle(ui->prthome_mobile, 0);

	//Write codes prthome_internet
	ui->prthome_internet = lv_img_create(ui->prthome, NULL);

	//Write style LV_IMG_PART_MAIN for prthome_internet
	static lv_style_t style_prthome_internet_main;
	lv_style_init(&style_prthome_internet_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_internet_main
	lv_style_set_image_recolor(&style_prthome_internet_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prthome_internet_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prthome_internet_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prthome_internet, LV_IMG_PART_MAIN, &style_prthome_internet_main);
	lv_obj_set_pos(ui->prthome_internet, 383, 85);
	lv_obj_set_size(ui->prthome_internet, 30, 30);
	lv_obj_set_click(ui->prthome_internet, true);
	lv_img_set_src(ui->prthome_internet,&_internet_alpha_30x30);
	lv_img_set_pivot(ui->prthome_internet, 0,0);
	lv_img_set_angle(ui->prthome_internet, 0);

	//Write codes prthome_btnprintback
	ui->prthome_btnprintback = lv_btn_create(ui->prthome, NULL);

	//Write style LV_BTN_PART_MAIN for prthome_btnprintback
	static lv_style_t style_prthome_btnprintback_main;
	lv_style_init(&style_prthome_btnprintback_main);

	//Write style state: LV_STATE_DEFAULT for style_prthome_btnprintback_main
	lv_style_set_radius(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_outline_opa(&style_prthome_btnprintback_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_prthome_btnprintback_main
	lv_style_set_radius(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prthome_btnprintback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prthome_btnprintback_main
	lv_style_set_radius(&style_prthome_btnprintback_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_prthome_btnprintback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prthome_btnprintback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prthome_btnprintback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_btnprintback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prthome_btnprintback_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prthome_btnprintback_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_prthome_btnprintback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prthome_btnprintback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_outline_opa(&style_prthome_btnprintback_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_prthome_btnprintback_main
	lv_style_set_radius(&style_prthome_btnprintback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prthome_btnprintback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prthome_btnprintback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prthome_btnprintback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prthome_btnprintback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prthome_btnprintback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prthome_btnprintback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prthome_btnprintback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prthome_btnprintback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prthome_btnprintback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prthome_btnprintback, LV_BTN_PART_MAIN, &style_prthome_btnprintback_main);
	lv_obj_set_pos(ui->prthome_btnprintback, 50, 13);
	lv_obj_set_size(ui->prthome_btnprintback, 30, 30);
	ui->prthome_btnprintback_label = lv_label_create(ui->prthome_btnprintback, NULL);
	lv_label_set_text(ui->prthome_btnprintback_label, "");
	lv_obj_set_style_local_text_color(ui->prthome_btnprintback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
}