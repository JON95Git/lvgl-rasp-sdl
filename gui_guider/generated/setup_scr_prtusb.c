/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_prtusb(lv_ui *ui){

	//Write codes prtusb
	ui->prtusb = lv_obj_create(NULL, NULL);

	//Write codes prtusb_cont0
	ui->prtusb_cont0 = lv_cont_create(ui->prtusb, NULL);

	//Write style LV_CONT_PART_MAIN for prtusb_cont0
	static lv_style_t style_prtusb_cont0_main;
	lv_style_init(&style_prtusb_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_cont0_main
	lv_style_set_radius(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_cont0, LV_CONT_PART_MAIN, &style_prtusb_cont0_main);
	lv_obj_set_pos(ui->prtusb_cont0, 0, 0);
	lv_obj_set_size(ui->prtusb_cont0, 480, 100);
	lv_obj_set_click(ui->prtusb_cont0, false);
	lv_cont_set_layout(ui->prtusb_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prtusb_cont0, LV_FIT_NONE);

	//Write codes prtusb_cont2
	ui->prtusb_cont2 = lv_cont_create(ui->prtusb, NULL);

	//Write style LV_CONT_PART_MAIN for prtusb_cont2
	static lv_style_t style_prtusb_cont2_main;
	lv_style_init(&style_prtusb_cont2_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_cont2_main
	lv_style_set_radius(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_cont2_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_cont2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_cont2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_cont2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_cont2, LV_CONT_PART_MAIN, &style_prtusb_cont2_main);
	lv_obj_set_pos(ui->prtusb_cont2, 0, 100);
	lv_obj_set_size(ui->prtusb_cont2, 480, 172);
	lv_obj_set_click(ui->prtusb_cont2, false);
	lv_cont_set_layout(ui->prtusb_cont2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prtusb_cont2, LV_FIT_NONE);

	//Write codes prtusb_labeltitle
	ui->prtusb_labeltitle = lv_label_create(ui->prtusb, NULL);
	lv_label_set_text(ui->prtusb_labeltitle, "PRINTING FROM USB");
	lv_label_set_long_mode(ui->prtusb_labeltitle, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtusb_labeltitle, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtusb_labeltitle
	static lv_style_t style_prtusb_labeltitle_main;
	lv_style_init(&style_prtusb_labeltitle_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_labeltitle_main
	lv_style_set_radius(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_labeltitle_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_labeltitle, LV_LABEL_PART_MAIN, &style_prtusb_labeltitle_main);
	lv_obj_set_pos(ui->prtusb_labeltitle, 136, 30);
	lv_obj_set_size(ui->prtusb_labeltitle, 225, 0);

	//Write codes prtusb_cont4
	ui->prtusb_cont4 = lv_cont_create(ui->prtusb, NULL);

	//Write style LV_CONT_PART_MAIN for prtusb_cont4
	static lv_style_t style_prtusb_cont4_main;
	lv_style_init(&style_prtusb_cont4_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_cont4_main
	lv_style_set_radius(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_cont4_main, LV_STATE_DEFAULT, lv_color_make(0xf6, 0xfa, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_cont4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_cont4_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_cont4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_cont4, LV_CONT_PART_MAIN, &style_prtusb_cont4_main);
	lv_obj_set_pos(ui->prtusb_cont4, 305, 80);
	lv_obj_set_size(ui->prtusb_cont4, 150, 130);
	lv_obj_set_click(ui->prtusb_cont4, false);
	lv_cont_set_layout(ui->prtusb_cont4, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prtusb_cont4, LV_FIT_NONE);

	//Write codes prtusb_btnprint
	ui->prtusb_btnprint = lv_btn_create(ui->prtusb, NULL);

	//Write style LV_BTN_PART_MAIN for prtusb_btnprint
	static lv_style_t style_prtusb_btnprint_main;
	lv_style_init(&style_prtusb_btnprint_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_btnprint_main
	lv_style_set_radius(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_color(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_dir(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_outline_opa(&style_prtusb_btnprint_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_prtusb_btnprint_main
	lv_style_set_radius(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_btnprint_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prtusb_btnprint_main
	lv_style_set_radius(&style_prtusb_btnprint_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_prtusb_btnprint_main, LV_STATE_PRESSED, lv_color_make(0x00, 0xdd, 0x6f));
	lv_style_set_bg_grad_color(&style_prtusb_btnprint_main, LV_STATE_PRESSED, lv_color_make(0x00, 0xdd, 0x6f));
	lv_style_set_bg_grad_dir(&style_prtusb_btnprint_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_btnprint_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prtusb_btnprint_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_btnprint_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_prtusb_btnprint_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prtusb_btnprint_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_btnprint_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_prtusb_btnprint_main
	lv_style_set_radius(&style_prtusb_btnprint_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prtusb_btnprint_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_btnprint_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_btnprint_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_btnprint_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prtusb_btnprint_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_btnprint_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prtusb_btnprint_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prtusb_btnprint_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_btnprint_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prtusb_btnprint, LV_BTN_PART_MAIN, &style_prtusb_btnprint_main);
	lv_obj_set_pos(ui->prtusb_btnprint, 320, 223);
	lv_obj_set_size(ui->prtusb_btnprint, 118, 40);
	ui->prtusb_btnprint_label = lv_label_create(ui->prtusb_btnprint, NULL);
	lv_label_set_text(ui->prtusb_btnprint_label, "PRINT");
	lv_obj_set_style_local_text_color(ui->prtusb_btnprint_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->prtusb_btnprint_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes prtusb_back
	ui->prtusb_back = lv_btn_create(ui->prtusb, NULL);

	//Write style LV_BTN_PART_MAIN for prtusb_back
	static lv_style_t style_prtusb_back_main;
	lv_style_init(&style_prtusb_back_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_back_main
	lv_style_set_radius(&style_prtusb_back_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_back_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_back_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_back_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_back_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_back_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_back_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prtusb_back_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prtusb_back_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_back_main, LV_STATE_DEFAULT, 0);

	//Write style state: LV_STATE_FOCUSED for style_prtusb_back_main
	lv_style_set_radius(&style_prtusb_back_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_prtusb_back_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_back_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_back_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_back_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prtusb_back_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_back_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_prtusb_back_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prtusb_back_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_back_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prtusb_back_main
	lv_style_set_radius(&style_prtusb_back_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_prtusb_back_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_back_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_back_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_back_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prtusb_back_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_back_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_prtusb_back_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prtusb_back_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_back_main, LV_STATE_PRESSED, 0);

	//Write style state: LV_STATE_CHECKED for style_prtusb_back_main
	lv_style_set_radius(&style_prtusb_back_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prtusb_back_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_back_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_back_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_back_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prtusb_back_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_back_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prtusb_back_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prtusb_back_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_back_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prtusb_back, LV_BTN_PART_MAIN, &style_prtusb_back_main);
	lv_obj_set_pos(ui->prtusb_back, 50, 25);
	lv_obj_set_size(ui->prtusb_back, 30, 30);
	ui->prtusb_back_label = lv_label_create(ui->prtusb_back, NULL);
	lv_label_set_text(ui->prtusb_back_label, "");
	lv_obj_set_style_local_text_color(ui->prtusb_back_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));

	//Write codes prtusb_swcolor
	ui->prtusb_swcolor = lv_switch_create(ui->prtusb, NULL);

	//Write style LV_SWITCH_PART_BG for prtusb_swcolor
	static lv_style_t style_prtusb_swcolor_bg;
	lv_style_init(&style_prtusb_swcolor_bg);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swcolor_bg
	lv_style_set_radius(&style_prtusb_swcolor_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swcolor_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_prtusb_swcolor_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_prtusb_swcolor_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swcolor_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swcolor, LV_SWITCH_PART_BG, &style_prtusb_swcolor_bg);

	//Write style LV_SWITCH_PART_INDIC for prtusb_swcolor
	static lv_style_t style_prtusb_swcolor_indic;
	lv_style_init(&style_prtusb_swcolor_indic);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swcolor_indic
	lv_style_set_radius(&style_prtusb_swcolor_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swcolor_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_prtusb_swcolor_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_prtusb_swcolor_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swcolor_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swcolor, LV_SWITCH_PART_INDIC, &style_prtusb_swcolor_indic);

	//Write style LV_SWITCH_PART_KNOB for prtusb_swcolor
	static lv_style_t style_prtusb_swcolor_knob;
	lv_style_init(&style_prtusb_swcolor_knob);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swcolor_knob
	lv_style_set_radius(&style_prtusb_swcolor_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swcolor_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_swcolor_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_swcolor_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swcolor_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swcolor, LV_SWITCH_PART_KNOB, &style_prtusb_swcolor_knob);
	lv_obj_set_pos(ui->prtusb_swcolor, 323, 175);
	lv_obj_set_size(ui->prtusb_swcolor, 40, 20);
	lv_switch_set_anim_time(ui->prtusb_swcolor, 600);

	//Write codes prtusb_labelcopy
	ui->prtusb_labelcopy = lv_label_create(ui->prtusb, NULL);
	lv_label_set_text(ui->prtusb_labelcopy, "Copies");
	lv_label_set_long_mode(ui->prtusb_labelcopy, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtusb_labelcopy, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtusb_labelcopy
	static lv_style_t style_prtusb_labelcopy_main;
	lv_style_init(&style_prtusb_labelcopy_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_labelcopy_main
	lv_style_set_radius(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_labelcopy_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_labelcopy, LV_LABEL_PART_MAIN, &style_prtusb_labelcopy_main);
	lv_obj_set_pos(ui->prtusb_labelcopy, 348, 80);
	lv_obj_set_size(ui->prtusb_labelcopy, 64, 0);

	//Write codes prtusb_up
	ui->prtusb_up = lv_btn_create(ui->prtusb, NULL);

	//Write style LV_BTN_PART_MAIN for prtusb_up
	static lv_style_t style_prtusb_up_main;
	lv_style_init(&style_prtusb_up_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_up_main
	lv_style_set_radius(&style_prtusb_up_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_up_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_up_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_up_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_up_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_up_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_up_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prtusb_up_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prtusb_up_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_up_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_prtusb_up_main
	lv_style_set_radius(&style_prtusb_up_main, LV_STATE_FOCUSED, 0);
	lv_style_set_bg_color(&style_prtusb_up_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_up_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_up_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_up_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prtusb_up_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_up_main, LV_STATE_FOCUSED, 0);
	lv_style_set_border_opa(&style_prtusb_up_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prtusb_up_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_up_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prtusb_up_main
	lv_style_set_radius(&style_prtusb_up_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_prtusb_up_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_up_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_up_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_up_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prtusb_up_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_up_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_prtusb_up_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prtusb_up_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_up_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_prtusb_up_main
	lv_style_set_radius(&style_prtusb_up_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prtusb_up_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_up_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_up_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_up_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prtusb_up_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_up_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prtusb_up_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prtusb_up_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_up_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prtusb_up, LV_BTN_PART_MAIN, &style_prtusb_up_main);
	lv_obj_set_pos(ui->prtusb_up, 417, 110);
	lv_obj_set_size(ui->prtusb_up, 20, 20);
	ui->prtusb_up_label = lv_label_create(ui->prtusb_up, NULL);
	lv_label_set_text(ui->prtusb_up_label, "");
	lv_obj_set_style_local_text_color(ui->prtusb_up_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));

	//Write codes prtusb_down
	ui->prtusb_down = lv_btn_create(ui->prtusb, NULL);

	//Write style LV_BTN_PART_MAIN for prtusb_down
	static lv_style_t style_prtusb_down_main;
	lv_style_init(&style_prtusb_down_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_down_main
	lv_style_set_radius(&style_prtusb_down_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_down_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_down_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_down_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_down_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_down_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_prtusb_down_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prtusb_down_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prtusb_down_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_down_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_prtusb_down_main
	lv_style_set_radius(&style_prtusb_down_main, LV_STATE_FOCUSED, 0);
	lv_style_set_bg_color(&style_prtusb_down_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_down_main, LV_STATE_FOCUSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_down_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_down_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prtusb_down_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_down_main, LV_STATE_FOCUSED, 0);
	lv_style_set_border_opa(&style_prtusb_down_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prtusb_down_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_down_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prtusb_down_main
	lv_style_set_radius(&style_prtusb_down_main, LV_STATE_PRESSED, 0);
	lv_style_set_bg_color(&style_prtusb_down_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtusb_down_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtusb_down_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_down_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prtusb_down_main, LV_STATE_PRESSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_down_main, LV_STATE_PRESSED, 0);
	lv_style_set_border_opa(&style_prtusb_down_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prtusb_down_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtusb_down_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_prtusb_down_main
	lv_style_set_radius(&style_prtusb_down_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prtusb_down_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_down_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_down_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_down_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prtusb_down_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtusb_down_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prtusb_down_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prtusb_down_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtusb_down_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prtusb_down, LV_BTN_PART_MAIN, &style_prtusb_down_main);
	lv_obj_set_pos(ui->prtusb_down, 322, 110);
	lv_obj_set_size(ui->prtusb_down, 20, 20);
	ui->prtusb_down_label = lv_label_create(ui->prtusb_down, NULL);
	lv_label_set_text(ui->prtusb_down_label, "");
	lv_obj_set_style_local_text_color(ui->prtusb_down_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));

	//Write codes prtusb_labelcnt
	ui->prtusb_labelcnt = lv_label_create(ui->prtusb, NULL);
	lv_label_set_text(ui->prtusb_labelcnt, "1");
	lv_label_set_long_mode(ui->prtusb_labelcnt, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtusb_labelcnt, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtusb_labelcnt
	static lv_style_t style_prtusb_labelcnt_main;
	lv_style_init(&style_prtusb_labelcnt_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_labelcnt_main
	lv_style_set_radius(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_labelcnt_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_labelcnt, LV_LABEL_PART_MAIN, &style_prtusb_labelcnt_main);
	lv_obj_set_pos(ui->prtusb_labelcnt, 351, 108);
	lv_obj_set_size(ui->prtusb_labelcnt, 56, 0);

	//Write codes prtusb_labelcolor
	ui->prtusb_labelcolor = lv_label_create(ui->prtusb, NULL);
	lv_label_set_text(ui->prtusb_labelcolor, "Color");
	lv_label_set_long_mode(ui->prtusb_labelcolor, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtusb_labelcolor, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtusb_labelcolor
	static lv_style_t style_prtusb_labelcolor_main;
	lv_style_init(&style_prtusb_labelcolor_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_labelcolor_main
	lv_style_set_radius(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_labelcolor_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_labelcolor, LV_LABEL_PART_MAIN, &style_prtusb_labelcolor_main);
	lv_obj_set_pos(ui->prtusb_labelcolor, 314, 146);
	lv_obj_set_size(ui->prtusb_labelcolor, 50, 0);

	//Write codes prtusb_labelvert
	ui->prtusb_labelvert = lv_label_create(ui->prtusb, NULL);
	lv_label_set_text(ui->prtusb_labelvert, "Verical");
	lv_label_set_long_mode(ui->prtusb_labelvert, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtusb_labelvert, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtusb_labelvert
	static lv_style_t style_prtusb_labelvert_main;
	lv_style_init(&style_prtusb_labelvert_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_labelvert_main
	lv_style_set_radius(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtusb_labelvert_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtusb_labelvert, LV_LABEL_PART_MAIN, &style_prtusb_labelvert_main);
	lv_obj_set_pos(ui->prtusb_labelvert, 380, 146);
	lv_obj_set_size(ui->prtusb_labelvert, 70, 0);

	//Write codes prtusb_swvert
	ui->prtusb_swvert = lv_switch_create(ui->prtusb, NULL);

	//Write style LV_SWITCH_PART_BG for prtusb_swvert
	static lv_style_t style_prtusb_swvert_bg;
	lv_style_init(&style_prtusb_swvert_bg);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swvert_bg
	lv_style_set_radius(&style_prtusb_swvert_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swvert_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_prtusb_swvert_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_prtusb_swvert_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swvert_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swvert, LV_SWITCH_PART_BG, &style_prtusb_swvert_bg);

	//Write style LV_SWITCH_PART_INDIC for prtusb_swvert
	static lv_style_t style_prtusb_swvert_indic;
	lv_style_init(&style_prtusb_swvert_indic);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swvert_indic
	lv_style_set_radius(&style_prtusb_swvert_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swvert_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_prtusb_swvert_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_prtusb_swvert_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swvert_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swvert, LV_SWITCH_PART_INDIC, &style_prtusb_swvert_indic);

	//Write style LV_SWITCH_PART_KNOB for prtusb_swvert
	static lv_style_t style_prtusb_swvert_knob;
	lv_style_init(&style_prtusb_swvert_knob);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_swvert_knob
	lv_style_set_radius(&style_prtusb_swvert_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_prtusb_swvert_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_swvert_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_swvert_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_swvert_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_swvert, LV_SWITCH_PART_KNOB, &style_prtusb_swvert_knob);
	lv_obj_set_pos(ui->prtusb_swvert, 390, 175);
	lv_obj_set_size(ui->prtusb_swvert, 40, 20);
	lv_switch_set_anim_time(ui->prtusb_swvert, 100);

	//Write codes prtusb_list16
	ui->prtusb_list16 = lv_list_create(ui->prtusb, NULL);
	lv_list_set_edge_flash(ui->prtusb_list16, true);
	lv_list_set_anim_time(ui->prtusb_list16, 255);

	//Write style LV_LIST_PART_BG for prtusb_list16
	static lv_style_t style_prtusb_list16_bg;
	lv_style_init(&style_prtusb_list16_bg);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_list16_bg
	lv_style_set_radius(&style_prtusb_list16_bg, LV_STATE_DEFAULT, 3);
	lv_style_set_border_color(&style_prtusb_list16_bg, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_list16_bg, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->prtusb_list16, LV_LIST_PART_BG, &style_prtusb_list16_bg);

	//Write style LV_LIST_PART_SCROLLABLE for prtusb_list16
	static lv_style_t style_prtusb_list16_scrollable;
	lv_style_init(&style_prtusb_list16_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_list16_scrollable
	lv_style_set_radius(&style_prtusb_list16_scrollable, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_list16_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_list16_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_list16_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_list16_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtusb_list16, LV_LIST_PART_SCROLLABLE, &style_prtusb_list16_scrollable);

	//Write style LV_BTN_PART_MAIN for prtusb_list16
	static lv_style_t style_prtusb_list16_main_child;
	lv_style_init(&style_prtusb_list16_main_child);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_list16_main_child
	lv_style_set_radius(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtusb_list16_main_child, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));

	//Write style state: LV_STATE_PRESSED for style_prtusb_list16_main_child
	lv_style_set_radius(&style_prtusb_list16_main_child, LV_STATE_PRESSED, 3);
	lv_style_set_bg_color(&style_prtusb_list16_main_child, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_list16_main_child, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_list16_main_child, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_list16_main_child, LV_STATE_PRESSED, 255);
	lv_style_set_text_color(&style_prtusb_list16_main_child, LV_STATE_PRESSED, lv_color_make(0x0D, 0x30, 0x55));
	lv_obj_set_pos(ui->prtusb_list16, 31, 83);
	lv_obj_set_size(ui->prtusb_list16, 240, 100);
	lv_obj_t *prtusb_list16_btn;
	prtusb_list16_btn = lv_list_add_btn(ui->prtusb_list16, LV_SYMBOL_FILE, "Contract 12.pdf");
	lv_obj_add_style(prtusb_list16_btn, LV_BTN_PART_MAIN, &style_prtusb_list16_main_child);
	prtusb_list16_btn = lv_list_add_btn(ui->prtusb_list16, LV_SYMBOL_FILE, "Scanned_05_21.pdf");
	lv_obj_add_style(prtusb_list16_btn, LV_BTN_PART_MAIN, &style_prtusb_list16_main_child);
	prtusb_list16_btn = lv_list_add_btn(ui->prtusb_list16, LV_SYMBOL_FILE, "Photo_2.jpg");
	lv_obj_add_style(prtusb_list16_btn, LV_BTN_PART_MAIN, &style_prtusb_list16_main_child);
	prtusb_list16_btn = lv_list_add_btn(ui->prtusb_list16, LV_SYMBOL_FILE, "Photo_3.jpg");
	lv_obj_add_style(prtusb_list16_btn, LV_BTN_PART_MAIN, &style_prtusb_list16_main_child);

	//Write codes prtusb_ddlist1
	ui->prtusb_ddlist1 = lv_dropdown_create(ui->prtusb, NULL);
	lv_dropdown_set_options(ui->prtusb_ddlist1, "Best\nNormal\nDraft");
	lv_dropdown_set_max_height(ui->prtusb_ddlist1, 90);

	//Write style LV_DROPDOWN_PART_MAIN for prtusb_ddlist1
	static lv_style_t style_prtusb_ddlist1_main;
	lv_style_init(&style_prtusb_ddlist1_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist1_main
	lv_style_set_radius(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_line_space(&style_prtusb_ddlist1_main, LV_STATE_DEFAULT, 20);
	lv_obj_add_style(ui->prtusb_ddlist1, LV_DROPDOWN_PART_MAIN, &style_prtusb_ddlist1_main);

	//Write style LV_DROPDOWN_PART_SELECTED for prtusb_ddlist1
	static lv_style_t style_prtusb_ddlist1_selected;
	lv_style_init(&style_prtusb_ddlist1_selected);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist1_selected
	lv_style_set_radius(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prtusb_ddlist1_selected, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->prtusb_ddlist1, LV_DROPDOWN_PART_SELECTED, &style_prtusb_ddlist1_selected);

	//Write style LV_DROPDOWN_PART_LIST for prtusb_ddlist1
	static lv_style_t style_prtusb_ddlist1_list;
	lv_style_init(&style_prtusb_ddlist1_list);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist1_list
	lv_style_set_radius(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_prtusb_ddlist1_list, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->prtusb_ddlist1, LV_DROPDOWN_PART_LIST, &style_prtusb_ddlist1_list);
	lv_obj_set_pos(ui->prtusb_ddlist1, 28, 220);
	lv_obj_set_width(ui->prtusb_ddlist1, 100);

	//Write codes prtusb_ddlist2
	ui->prtusb_ddlist2 = lv_dropdown_create(ui->prtusb, NULL);
	lv_dropdown_set_options(ui->prtusb_ddlist2, "72 DPI\n96 DPI\n150 DPI\n300 DPI\n600 DPI\n900 DPI\n1200 DPI");
	lv_dropdown_set_max_height(ui->prtusb_ddlist2, 90);

	//Write style LV_DROPDOWN_PART_MAIN for prtusb_ddlist2
	static lv_style_t style_prtusb_ddlist2_main;
	lv_style_init(&style_prtusb_ddlist2_main);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist2_main
	lv_style_set_radius(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_line_space(&style_prtusb_ddlist2_main, LV_STATE_DEFAULT, 20);
	lv_obj_add_style(ui->prtusb_ddlist2, LV_DROPDOWN_PART_MAIN, &style_prtusb_ddlist2_main);

	//Write style LV_DROPDOWN_PART_SELECTED for prtusb_ddlist2
	static lv_style_t style_prtusb_ddlist2_selected;
	lv_style_init(&style_prtusb_ddlist2_selected);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist2_selected
	lv_style_set_radius(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prtusb_ddlist2_selected, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->prtusb_ddlist2, LV_DROPDOWN_PART_SELECTED, &style_prtusb_ddlist2_selected);

	//Write style LV_DROPDOWN_PART_LIST for prtusb_ddlist2
	static lv_style_t style_prtusb_ddlist2_list;
	lv_style_init(&style_prtusb_ddlist2_list);

	//Write style state: LV_STATE_DEFAULT for style_prtusb_ddlist2_list
	lv_style_set_radius(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, 3);
	lv_style_set_bg_color(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0xe1, 0xe6, 0xee));
	lv_style_set_border_width(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_prtusb_ddlist2_list, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->prtusb_ddlist2, LV_DROPDOWN_PART_LIST, &style_prtusb_ddlist2_list);
	lv_obj_set_pos(ui->prtusb_ddlist2, 166, 220);
	lv_obj_set_width(ui->prtusb_ddlist2, 100);
}