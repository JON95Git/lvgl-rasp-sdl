/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_prtmb(lv_ui *ui){

	//Write codes prtmb
	ui->prtmb = lv_obj_create(NULL, NULL);

	//Write codes prtmb_cont0
	ui->prtmb_cont0 = lv_cont_create(ui->prtmb, NULL);

	//Write style LV_CONT_PART_MAIN for prtmb_cont0
	static lv_style_t style_prtmb_cont0_main;
	lv_style_init(&style_prtmb_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_cont0_main
	lv_style_set_radius(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtmb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtmb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtmb_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtmb_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtmb_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtmb_cont0, LV_CONT_PART_MAIN, &style_prtmb_cont0_main);
	lv_obj_set_pos(ui->prtmb_cont0, 0, 0);
	lv_obj_set_size(ui->prtmb_cont0, 480, 272);
	lv_obj_set_click(ui->prtmb_cont0, false);
	lv_cont_set_layout(ui->prtmb_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->prtmb_cont0, LV_FIT_NONE);

	//Write codes prtmb_btnback
	ui->prtmb_btnback = lv_btn_create(ui->prtmb, NULL);

	//Write style LV_BTN_PART_MAIN for prtmb_btnback
	static lv_style_t style_prtmb_btnback_main;
	lv_style_init(&style_prtmb_btnback_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_btnback_main
	lv_style_set_radius(&style_prtmb_btnback_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_prtmb_btnback_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_color(&style_prtmb_btnback_main, LV_STATE_DEFAULT, lv_color_make(0x29, 0x30, 0x41));
	lv_style_set_bg_grad_dir(&style_prtmb_btnback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_btnback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_prtmb_btnback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_prtmb_btnback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_prtmb_btnback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_prtmb_btnback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtmb_btnback_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_prtmb_btnback_main
	lv_style_set_radius(&style_prtmb_btnback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_prtmb_btnback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtmb_btnback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtmb_btnback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_btnback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_prtmb_btnback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtmb_btnback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_prtmb_btnback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_prtmb_btnback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtmb_btnback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_prtmb_btnback_main
	lv_style_set_radius(&style_prtmb_btnback_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_prtmb_btnback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtmb_btnback_main, LV_STATE_PRESSED, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtmb_btnback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_btnback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_prtmb_btnback_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_prtmb_btnback_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_prtmb_btnback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_prtmb_btnback_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_prtmb_btnback_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_prtmb_btnback_main
	lv_style_set_radius(&style_prtmb_btnback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_prtmb_btnback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_prtmb_btnback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_prtmb_btnback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_btnback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_prtmb_btnback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_prtmb_btnback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_prtmb_btnback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_prtmb_btnback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_prtmb_btnback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->prtmb_btnback, LV_BTN_PART_MAIN, &style_prtmb_btnback_main);
	lv_obj_set_pos(ui->prtmb_btnback, 179, 205);
	lv_obj_set_size(ui->prtmb_btnback, 134, 39);
	ui->prtmb_btnback_label = lv_label_create(ui->prtmb_btnback, NULL);
	lv_label_set_text(ui->prtmb_btnback_label, "BACK");
	lv_obj_set_style_local_text_color(ui->prtmb_btnback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->prtmb_btnback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes prtmb_label2
	ui->prtmb_label2 = lv_label_create(ui->prtmb, NULL);
	lv_label_set_text(ui->prtmb_label2, "Put your phone near to the printer");
	lv_label_set_long_mode(ui->prtmb_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->prtmb_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for prtmb_label2
	static lv_style_t style_prtmb_label2_main;
	lv_style_init(&style_prtmb_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_label2_main
	lv_style_set_radius(&style_prtmb_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_prtmb_label2_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_color(&style_prtmb_label2_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x32, 0x43));
	lv_style_set_bg_grad_dir(&style_prtmb_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_prtmb_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_prtmb_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_prtmb_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_prtmb_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_prtmb_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_prtmb_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_prtmb_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_prtmb_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->prtmb_label2, LV_LABEL_PART_MAIN, &style_prtmb_label2_main);
	lv_obj_set_pos(ui->prtmb_label2, 10, 146);
	lv_obj_set_size(ui->prtmb_label2, 460, 0);

	//Write codes prtmb_printer
	ui->prtmb_printer = lv_img_create(ui->prtmb, NULL);

	//Write style LV_IMG_PART_MAIN for prtmb_printer
	static lv_style_t style_prtmb_printer_main;
	lv_style_init(&style_prtmb_printer_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_printer_main
	lv_style_set_image_recolor(&style_prtmb_printer_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prtmb_printer_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prtmb_printer_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtmb_printer, LV_IMG_PART_MAIN, &style_prtmb_printer_main);
	lv_obj_set_pos(ui->prtmb_printer, 154, 70);
	lv_obj_set_size(ui->prtmb_printer, 60, 55);
	lv_obj_set_click(ui->prtmb_printer, true);
	lv_img_set_src(ui->prtmb_printer,&_printer2_alpha_60x55);
	lv_img_set_pivot(ui->prtmb_printer, 0,0);
	lv_img_set_angle(ui->prtmb_printer, 0);

	//Write codes prtmb_img
	ui->prtmb_img = lv_img_create(ui->prtmb, NULL);

	//Write style LV_IMG_PART_MAIN for prtmb_img
	static lv_style_t style_prtmb_img_main;
	lv_style_init(&style_prtmb_img_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_img_main
	lv_style_set_image_recolor(&style_prtmb_img_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prtmb_img_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prtmb_img_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtmb_img, LV_IMG_PART_MAIN, &style_prtmb_img_main);
	lv_obj_set_pos(ui->prtmb_img, 235, 83);
	lv_obj_set_size(ui->prtmb_img, 25, 25);
	lv_obj_set_click(ui->prtmb_img, true);
	lv_img_set_src(ui->prtmb_img,&_wave_alpha_25x25);
	lv_img_set_pivot(ui->prtmb_img, 0,0);
	lv_img_set_angle(ui->prtmb_img, 0);

	//Write codes prtmb_cloud
	ui->prtmb_cloud = lv_img_create(ui->prtmb, NULL);

	//Write style LV_IMG_PART_MAIN for prtmb_cloud
	static lv_style_t style_prtmb_cloud_main;
	lv_style_init(&style_prtmb_cloud_main);

	//Write style state: LV_STATE_DEFAULT for style_prtmb_cloud_main
	lv_style_set_image_recolor(&style_prtmb_cloud_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_prtmb_cloud_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_prtmb_cloud_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->prtmb_cloud, LV_IMG_PART_MAIN, &style_prtmb_cloud_main);
	lv_obj_set_pos(ui->prtmb_cloud, 280, 72);
	lv_obj_set_size(ui->prtmb_cloud, 45, 55);
	lv_obj_set_click(ui->prtmb_cloud, true);
	lv_img_set_src(ui->prtmb_cloud,&_phone_alpha_45x55);
	lv_img_set_pivot(ui->prtmb_cloud, 0,0);
	lv_img_set_angle(ui->prtmb_cloud, 0);
}