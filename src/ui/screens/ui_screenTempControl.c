// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: S320240

#include "../ui.h"

void ui_screenTempControl_screen_init(void)
{
ui_screenTempControl = lv_obj_create(NULL);
lv_obj_clear_flag( ui_screenTempControl, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
if(control_screen_background) lv_obj_set_style_bg_img_src( ui_screenTempControl,control_screen_background, LV_PART_MAIN | LV_STATE_DEFAULT );
else lv_obj_set_style_bg_img_src( ui_screenTempControl, &ui_img_control_320240_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_btnTempControlBack = lv_imgbtn_create(ui_screenTempControl);
lv_imgbtn_set_src(ui_btnTempControlBack, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_backbutton_png, NULL);
lv_obj_set_width( ui_btnTempControlBack, 20);
lv_obj_set_height( ui_btnTempControlBack, 36);

ui_sldMode = lv_slider_create(ui_screenTempControl);
lv_slider_set_range(ui_sldMode, 0,3);
lv_slider_set_value( ui_sldMode, 3, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_sldMode)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_sldMode, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_sldMode, 200);
lv_obj_set_height( ui_sldMode, 3);
lv_obj_set_x( ui_sldMode, 0 );
lv_obj_set_y( ui_sldMode, 64 );
lv_obj_set_align( ui_sldMode, LV_ALIGN_TOP_MID );

lv_obj_set_style_bg_color(ui_sldMode, lv_color_hex(0x909090), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sldMode, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_outline_color(ui_sldMode, lv_color_hex(0x33FF33), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_sldMode, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_sldMode, 4, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_sldMode, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_arcTemperatureSet = lv_arc_create(ui_screenTempControl);
lv_obj_set_width( ui_arcTemperatureSet, 150);
lv_obj_set_height( ui_arcTemperatureSet, 150);
lv_obj_set_align( ui_arcTemperatureSet, LV_ALIGN_BOTTOM_MID );


ui_lbMinTempSet = lv_label_create(ui_screenTempControl);
lv_obj_set_width( ui_lbMinTempSet, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lbMinTempSet, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_lbMinTempSet, -68 );
lv_obj_set_y( ui_lbMinTempSet, -8 );
lv_obj_set_align( ui_lbMinTempSet, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_lbMinTempSet,"0");

ui_lbMaxTempSet = lv_label_create(ui_screenTempControl);
lv_obj_set_width( ui_lbMaxTempSet, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lbMaxTempSet, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_lbMaxTempSet, 68 );
lv_obj_set_y( ui_lbMaxTempSet, -8 );
lv_obj_set_align( ui_lbMaxTempSet, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_lbMaxTempSet,"36");

ui_lbTemperatureSet = lv_label_create(ui_screenTempControl);
lv_obj_set_width( ui_lbTemperatureSet, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lbTemperatureSet, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_lbTemperatureSet, 0 );
lv_obj_set_y( ui_lbTemperatureSet, 32 );
lv_obj_set_align( ui_lbTemperatureSet, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbTemperatureSet,"20");
lv_obj_set_style_text_color(ui_lbTemperatureSet, lv_color_hex(0x33FF33), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lbTemperatureSet, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbTemperatureSet, &lv_font_montserrat_32, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbControlUnit = lv_label_create(ui_screenTempControl);
lv_obj_set_width( ui_lbControlUnit, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_lbControlUnit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_lbControlUnit, 0 );
lv_obj_set_y( ui_lbControlUnit, -8 );
lv_obj_set_align( ui_lbControlUnit, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_lbControlUnit,"C");

lv_obj_add_event_cb(ui_btnTempControlBack, ui_event_btnTempControlBack, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_sldMode, ui_event_sldMode, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_arcTemperatureSet, ui_event_arcTemperatureSet, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_screenTempControl, ui_event_screenTempControl, LV_EVENT_ALL, NULL);

}
