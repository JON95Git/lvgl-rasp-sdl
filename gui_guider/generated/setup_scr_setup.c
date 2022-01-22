/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_setup(lv_ui *ui){

	//Write codes setup
	ui->setup = lv_obj_create(NULL, NULL);

	//Write codes setup_cont0
	ui->setup_cont0 = lv_cont_create(ui->setup, NULL);

	//Write style LV_CONT_PART_MAIN for setup_cont0
	static lv_style_t style_setup_cont0_main;
	lv_style_init(&style_setup_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_cont0_main
	lv_style_set_radius(&style_setup_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setup_cont0_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setup_cont0_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setup_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_setup_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_setup_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_setup_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_setup_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setup_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setup_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setup_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setup_cont0, LV_CONT_PART_MAIN, &style_setup_cont0_main);
	lv_obj_set_pos(ui->setup_cont0, 0, 0);
	lv_obj_set_size(ui->setup_cont0, 480, 272);
	lv_obj_set_click(ui->setup_cont0, false);
	lv_cont_set_layout(ui->setup_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->setup_cont0, LV_FIT_NONE);

	//Write codes setup_btnsetback
	ui->setup_btnsetback = lv_btn_create(ui->setup, NULL);

	//Write style LV_BTN_PART_MAIN for setup_btnsetback
	static lv_style_t style_setup_btnsetback_main;
	lv_style_init(&style_setup_btnsetback_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_btnsetback_main
	lv_style_set_radius(&style_setup_btnsetback_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_setup_btnsetback_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setup_btnsetback_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setup_btnsetback_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_btnsetback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_setup_btnsetback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_setup_btnsetback_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_setup_btnsetback_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_setup_btnsetback_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_outline_opa(&style_setup_btnsetback_main, LV_STATE_DEFAULT, 255);

	//Write style state: LV_STATE_FOCUSED for style_setup_btnsetback_main
	lv_style_set_radius(&style_setup_btnsetback_main, LV_STATE_FOCUSED, 50);
	lv_style_set_bg_color(&style_setup_btnsetback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setup_btnsetback_main, LV_STATE_FOCUSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setup_btnsetback_main, LV_STATE_FOCUSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_btnsetback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_border_color(&style_setup_btnsetback_main, LV_STATE_FOCUSED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_setup_btnsetback_main, LV_STATE_FOCUSED, 2);
	lv_style_set_border_opa(&style_setup_btnsetback_main, LV_STATE_FOCUSED, 255);
	lv_style_set_outline_color(&style_setup_btnsetback_main, LV_STATE_FOCUSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_setup_btnsetback_main, LV_STATE_FOCUSED, 255);

	//Write style state: LV_STATE_PRESSED for style_setup_btnsetback_main
	lv_style_set_radius(&style_setup_btnsetback_main, LV_STATE_PRESSED, 50);
	lv_style_set_bg_color(&style_setup_btnsetback_main, LV_STATE_PRESSED, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setup_btnsetback_main, LV_STATE_PRESSED, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setup_btnsetback_main, LV_STATE_PRESSED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_btnsetback_main, LV_STATE_PRESSED, 255);
	lv_style_set_border_color(&style_setup_btnsetback_main, LV_STATE_PRESSED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_setup_btnsetback_main, LV_STATE_PRESSED, 2);
	lv_style_set_border_opa(&style_setup_btnsetback_main, LV_STATE_PRESSED, 255);
	lv_style_set_outline_color(&style_setup_btnsetback_main, LV_STATE_PRESSED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_setup_btnsetback_main, LV_STATE_PRESSED, 100);

	//Write style state: LV_STATE_CHECKED for style_setup_btnsetback_main
	lv_style_set_radius(&style_setup_btnsetback_main, LV_STATE_CHECKED, 50);
	lv_style_set_bg_color(&style_setup_btnsetback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_setup_btnsetback_main, LV_STATE_CHECKED, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_setup_btnsetback_main, LV_STATE_CHECKED, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_btnsetback_main, LV_STATE_CHECKED, 255);
	lv_style_set_border_color(&style_setup_btnsetback_main, LV_STATE_CHECKED, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_setup_btnsetback_main, LV_STATE_CHECKED, 2);
	lv_style_set_border_opa(&style_setup_btnsetback_main, LV_STATE_CHECKED, 255);
	lv_style_set_outline_color(&style_setup_btnsetback_main, LV_STATE_CHECKED, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_setup_btnsetback_main, LV_STATE_CHECKED, 255);
	lv_obj_add_style(ui->setup_btnsetback, LV_BTN_PART_MAIN, &style_setup_btnsetback_main);
	lv_obj_set_pos(ui->setup_btnsetback, 179, 205);
	lv_obj_set_size(ui->setup_btnsetback, 134, 39);
	ui->setup_btnsetback_label = lv_label_create(ui->setup_btnsetback, NULL);
	lv_label_set_text(ui->setup_btnsetback_label, "BACK");
	lv_obj_set_style_local_text_color(ui->setup_btnsetback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->setup_btnsetback_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes setup_label2
	ui->setup_label2 = lv_label_create(ui->setup, NULL);
	lv_label_set_text(ui->setup_label2, "You have no permission to change the settings");
	lv_label_set_long_mode(ui->setup_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->setup_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for setup_label2
	static lv_style_t style_setup_label2_main;
	lv_style_init(&style_setup_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_label2_main
	lv_style_set_radius(&style_setup_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_setup_label2_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_setup_label2_main, LV_STATE_DEFAULT, lv_color_make(0xd2, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_setup_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_setup_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_setup_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_setup_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_setup_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_setup_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_setup_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_setup_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_setup_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->setup_label2, LV_LABEL_PART_MAIN, &style_setup_label2_main);
	lv_obj_set_pos(ui->setup_label2, 10, 146);
	lv_obj_set_size(ui->setup_label2, 460, 0);

	//Write codes setup_printer
	ui->setup_printer = lv_img_create(ui->setup, NULL);

	//Write style LV_IMG_PART_MAIN for setup_printer
	static lv_style_t style_setup_printer_main;
	lv_style_init(&style_setup_printer_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_printer_main
	lv_style_set_image_recolor(&style_setup_printer_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setup_printer_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setup_printer_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setup_printer, LV_IMG_PART_MAIN, &style_setup_printer_main);
	lv_obj_set_pos(ui->setup_printer, 154, 70);
	lv_obj_set_size(ui->setup_printer, 60, 55);
	lv_obj_set_click(ui->setup_printer, true);
	lv_img_set_src(ui->setup_printer,&_printer2_alpha_60x55);
	lv_img_set_pivot(ui->setup_printer, 0,0);
	lv_img_set_angle(ui->setup_printer, 0);

	//Write codes setup_img
	ui->setup_img = lv_img_create(ui->setup, NULL);

	//Write style LV_IMG_PART_MAIN for setup_img
	static lv_style_t style_setup_img_main;
	lv_style_init(&style_setup_img_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_img_main
	lv_style_set_image_recolor(&style_setup_img_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setup_img_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setup_img_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setup_img, LV_IMG_PART_MAIN, &style_setup_img_main);
	lv_obj_set_pos(ui->setup_img, 217, 62);
	lv_obj_set_size(ui->setup_img, 25, 25);
	lv_obj_set_click(ui->setup_img, true);
	lv_img_set_src(ui->setup_img,&_no_internet_alpha_25x25);
	lv_img_set_pivot(ui->setup_img, 0,0);
	lv_img_set_angle(ui->setup_img, 0);

	//Write codes setup_cloud
	ui->setup_cloud = lv_img_create(ui->setup, NULL);

	//Write style LV_IMG_PART_MAIN for setup_cloud
	static lv_style_t style_setup_cloud_main;
	lv_style_init(&style_setup_cloud_main);

	//Write style state: LV_STATE_DEFAULT for style_setup_cloud_main
	lv_style_set_image_recolor(&style_setup_cloud_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_setup_cloud_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_setup_cloud_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->setup_cloud, LV_IMG_PART_MAIN, &style_setup_cloud_main);
	lv_obj_set_pos(ui->setup_cloud, 258, 30);
	lv_obj_set_size(ui->setup_cloud, 55, 40);
	lv_obj_set_click(ui->setup_cloud, true);
	lv_img_set_src(ui->setup_cloud,&_cloud_alpha_55x40);
	lv_img_set_pivot(ui->setup_cloud, 0,0);
	lv_img_set_angle(ui->setup_cloud, 0);
}