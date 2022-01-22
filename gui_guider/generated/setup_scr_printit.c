/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_printit(lv_ui *ui){

	//Write codes printit
	ui->printit = lv_obj_create(NULL, NULL);

	//Write codes printit_cont0
	ui->printit_cont0 = lv_cont_create(ui->printit, NULL);

	//Write style LV_CONT_PART_MAIN for printit_cont0
	static lv_style_t style_printit_cont0_main;
	lv_style_init(&style_printit_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_cont0_main
	lv_style_set_radius(&style_printit_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_printit_cont0_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_printit_cont0_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_printit_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_printit_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_printit_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_printit_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_printit_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_printit_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_printit_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_printit_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->printit_cont0, LV_CONT_PART_MAIN, &style_printit_cont0_main);
	lv_obj_set_pos(ui->printit_cont0, 0, 0);
	lv_obj_set_size(ui->printit_cont0, 480, 272);
	lv_obj_set_click(ui->printit_cont0, false);
	lv_cont_set_layout(ui->printit_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->printit_cont0, LV_FIT_NONE);

	//Write codes printit_btnprtitback
	ui->printit_btnprtitback = lv_btn_create(ui->printit, NULL);

	//Write style LV_BTN_PART_MAIN for printit_btnprtitback
	static lv_style_t style_printit_btnprtitback_main;
	lv_style_init(&style_printit_btnprtitback_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_btnprtitback_main
	lv_style_set_radius(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_printit_btnprtitback_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_printit_btnprtitback_main
	lv_style_set_radius(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_printit_btnprtitback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_printit_btnprtitback_main
	lv_style_set_radius(&style_printit_btnprtitback_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_printit_btnprtitback_main, LV_STATE_PRESSED, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_printit_btnprtitback_main, LV_STATE_PRESSED, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_printit_btnprtitback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_btnprtitback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_printit_btnprtitback_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_printit_btnprtitback_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_printit_btnprtitback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_printit_btnprtitback_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_printit_btnprtitback_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_printit_btnprtitback_main
	lv_style_set_radius(&style_printit_btnprtitback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_printit_btnprtitback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_printit_btnprtitback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_printit_btnprtitback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_btnprtitback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_printit_btnprtitback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_printit_btnprtitback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_printit_btnprtitback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_printit_btnprtitback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_printit_btnprtitback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->printit_btnprtitback, LV_BTN_PART_MAIN, &style_printit_btnprtitback_main);
	lv_obj_set_pos(ui->printit_btnprtitback, 179, 205);
	lv_obj_set_size(ui->printit_btnprtitback, 134, 39);
	ui->printit_btnprtitback_label = lv_label_create(ui->printit_btnprtitback, NULL);
	lv_label_set_text(ui->printit_btnprtitback_label, "BACK");
	lv_obj_set_style_local_text_color(ui->printit_btnprtitback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->printit_btnprtitback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes printit_label2
	ui->printit_label2 = lv_label_create(ui->printit, NULL);
	lv_label_set_text(ui->printit_label2, "No internet connection");
	lv_label_set_long_mode(ui->printit_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->printit_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for printit_label2
	static lv_style_t style_printit_label2_main;
	lv_style_init(&style_printit_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_label2_main
	lv_style_set_radius(&style_printit_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_printit_label2_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_printit_label2_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_printit_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_printit_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_printit_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_printit_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_printit_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_printit_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_printit_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_printit_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_printit_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->printit_label2, LV_LABEL_PART_MAIN, &style_printit_label2_main);
	lv_obj_set_pos(ui->printit_label2, 10, 146);
	lv_obj_set_size(ui->printit_label2, 460, 0);

	//Write codes printit_printer
	ui->printit_printer = lv_img_create(ui->printit, NULL);

	//Write style LV_IMG_PART_MAIN for printit_printer
	static lv_style_t style_printit_printer_main;
	lv_style_init(&style_printit_printer_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_printer_main
	lv_style_set_image_recolor(&style_printit_printer_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_printit_printer_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_printit_printer_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->printit_printer, LV_IMG_PART_MAIN, &style_printit_printer_main);
	lv_obj_set_pos(ui->printit_printer, 154, 70);
	lv_obj_set_size(ui->printit_printer, 60, 55);
	lv_obj_set_click(ui->printit_printer, true);
	lv_img_set_src(ui->printit_printer,&_printer2_alpha_60x55);
	lv_img_set_pivot(ui->printit_printer, 0,0);
	lv_img_set_angle(ui->printit_printer, 0);

	//Write codes printit_imgnotit
	ui->printit_imgnotit = lv_img_create(ui->printit, NULL);

	//Write style LV_IMG_PART_MAIN for printit_imgnotit
	static lv_style_t style_printit_imgnotit_main;
	lv_style_init(&style_printit_imgnotit_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_imgnotit_main
	lv_style_set_image_recolor(&style_printit_imgnotit_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_printit_imgnotit_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_printit_imgnotit_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->printit_imgnotit, LV_IMG_PART_MAIN, &style_printit_imgnotit_main);
	lv_obj_set_pos(ui->printit_imgnotit, 217, 62);
	lv_obj_set_size(ui->printit_imgnotit, 25, 25);
	lv_obj_set_click(ui->printit_imgnotit, true);
	lv_img_set_src(ui->printit_imgnotit,&_no_internet_alpha_25x25);
	lv_img_set_pivot(ui->printit_imgnotit, 0,0);
	lv_img_set_angle(ui->printit_imgnotit, 0);

	//Write codes printit_cloud
	ui->printit_cloud = lv_img_create(ui->printit, NULL);

	//Write style LV_IMG_PART_MAIN for printit_cloud
	static lv_style_t style_printit_cloud_main;
	lv_style_init(&style_printit_cloud_main);

	//Write style state: LV_STATE_DEFAULT for style_printit_cloud_main
	lv_style_set_image_recolor(&style_printit_cloud_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_printit_cloud_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_printit_cloud_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->printit_cloud, LV_IMG_PART_MAIN, &style_printit_cloud_main);
	lv_obj_set_pos(ui->printit_cloud, 258, 30);
	lv_obj_set_size(ui->printit_cloud, 55, 40);
	lv_obj_set_click(ui->printit_cloud, true);
	lv_img_set_src(ui->printit_cloud,&_cloud_alpha_55x40);
	lv_img_set_pivot(ui->printit_cloud, 0,0);
	lv_img_set_angle(ui->printit_cloud, 0);
}