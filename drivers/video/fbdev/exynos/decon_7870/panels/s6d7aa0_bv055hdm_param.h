#ifndef __S6D7AA0_PARAM_H__
#define __S6D7AA0_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128
#define DEFAULT_CANDELA		92
#define DIM_BRIGHTNESS		15

static char UI_MDNIE_1[] = {
	//start
	0xE8,
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
};

static char UI_MDNIE_2[] = {
	0xE9,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
};

static char UI_MDNIE_3[] = {
	0xEA,
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
};

static char UI_MDNIE_4[] = {
	0xEB,
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
};

static char UI_MDNIE_5[] = {
	0xEC,
	0x04, //cc r1 0.15
	0x88,
	0x1f, //cc r2
	0xa6,
	0x1f, //cc r3
	0xd2,
	0x1f, //cc g1
	0xee,
	0x04, //cc g2
	0x3f,
	0x1f, //cc g3
	0xd2,
	0x1f, //cc b1
	0xee,
	0x1f, //cc b2
	0xa6,
	0x04, //cc b3
	0x6c,
};

static char UI_MDNIE_6[] = {
	0xE7,
	0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
	0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x02, //HSIZE
	0xD0,
	0x05, //VSIZE
	0x00,
	0x02, //sharpen cc gamma 00 0 0
	//end
};

static char OUTDOOR_MDNIE_1[] = {
	//start
	0xE8,
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
};

static char OUTDOOR_MDNIE_2[] = {
	0xE9,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
};

static char OUTDOOR_MDNIE_3[] = {
	0xEA,
	0x00, //curve 1 b
	0x7b, //curve 1 a
	0x03, //curve 2 b
	0x48, //curve 2 a
	0x08, //curve 3 b
	0x32, //curve 3 a
	0x08, //curve 4 b
	0x32, //curve 4 a
	0x08, //curve 5 b
	0x32, //curve 5 a
	0x08, //curve 6 b
	0x32, //curve 6 a
	0x08, //curve 7 b
	0x32, //curve 7 a
	0x10, //curve 8 b
	0x28, //curve 8 a
	0x10, //curve 9 b
	0x28, //curve 9 a
	0x10, //curve10 b
	0x28, //curve10 a
	0x10, //curve11 b
	0x28, //curve11 a
	0x10, //curve12 b
	0x28, //curve12 a
};

static char OUTDOOR_MDNIE_4[] = {
	0xEB,
	0x19, //curve13 b
	0x22, //curve13 a
	0x19, //curve14 b
	0x22, //curve14 a
	0x19, //curve15 b
	0x22, //curve15 a
	0x19, //curve16 b
	0x22, //curve16 a
	0x19, //curve17 b
	0x22, //curve17 a
	0x19, //curve18 b
	0x22, //curve18 a
	0x23, //curve19 b
	0x1e, //curve19 a
	0x2e, //curve20 b
	0x1b, //curve20 a
	0x33, //curve21 b
	0x1a, //curve21 a
	0x40, //curve22 b
	0x18, //curve22 a
	0x48, //curve23 b
	0x17, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
};

static char OUTDOOR_MDNIE_5[] = {
	0xEC,
	0x04, //cc r1 0.15
	0x88,
	0x1f, //cc r2
	0xa6,
	0x1f, //cc r3
	0xd2,
	0x1f, //cc g1
	0xee,
	0x04, //cc g2
	0x3f,
	0x1f, //cc g3
	0xd2,
	0x1f, //cc b1
	0xee,
	0x1f, //cc b2
	0xa6,
	0x04, //cc b3
	0x6c,
};

static char OUTDOOR_MDNIE_6[] = {
	0xE7,
	0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
	0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x02, //HSIZE
	0xD0,
	0x05, //VSIZE
	0x00,
	0x03, //sharpen cc gamma 00 0 0
	//end
};

static u8 backlight_ic_tuning[] = {//LM3632_eprom_drv_arr[] = {
	0x09, 0x41,
	0x02, 0x50,
	0x03, 0x0D,
	0x04, 0x05,
	0x0A, 0x19,
	0x05, 0xCC,
	0x0D, 0x1E,
	0x0E, 0x1E,
	0x0F, 0x1E,
	0x0C, 0x1F,
};

#if 0
static u8 backlight_i2c_bl_ctrl[] = {	//LM3632_eprom_drv_arr_off[] = {
	0x04, 0x00,
	0x05, 0x00,

};
#endif
static u8 backlight_ic_tuning_outdoor[] = {//LM3632_eprom_drv_arr_outdoor_on[] = {
	0x09, 0x01,
	0x04, 0x07,
	0x05, 0xCB,
};

static u8 backlight_ic_tuning_normal[] = {//LM3632_eprom_drv_arr_outdoor_off[] = {
	0x04, 0x05,
	0x05, 0xCC,
	0x09, 0x41,
};
/* init seq 1 */
static const unsigned char SEQ_PASSWD1[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_PASSWD2[] = {
	0xF1,
	0x5A, 0x5A
};

static const unsigned char SEQ_PASSWD3[] = {
	0xFC,
	0xA5, 0xA5
};

static const unsigned char SEQ_OTP_CTRL[] = {
	0xD0,
	0x00, 0x10
};
/* init seq 1-1 */
static const unsigned char SEQ_PASSWD1_LOCK[] = {
	0xF0,
	0xA5, 0xA5
};

static const unsigned char SEQ_PASSWD2_LOCK[] = {
	0xF1,
	0xA5, 0xA5
};

static const unsigned char SEQ_PASSWD3_LOCK[] = {
	0xFC,
	0x5A, 0x5A
};

/* init seq 2 */
static const unsigned char SEQ_PENEL_CONTROL[] = {
	0xB1,
	0x12
};

static const unsigned char SEQ_INTERFACE_CONTROL[] = {
	0xB2,
	0x14, 0x22, 0x2F, 0x18
};

static const unsigned char SEQ_CLK_CONTROL[] = {
	0xB3,
	0x11
};

static const unsigned char SEQ_SMPSCTL[] = {
	0xBA,
	0x03, 0x19, 0x19, 0x11,
	0x03, 0x05, 0x18, 0x18,
	0x77
};

static const unsigned char SEQ_BAT_CONTROL[] = {
	0xBC,
	0x00, 0x4E, 0x0B
};

static const unsigned char SEQ_MIE_CONTROL1[] = {
	0xC0,
	0x80, 0x80, 0x30
};

static const unsigned char SEQ_BACKLIGHT_CONTROL[] = {
	0xC1,
	0x03
};

static const unsigned char SEQ_MIE_CONTROL2[] = {
	0xC2,
	0x00
};

static const unsigned char SEQ_BL_CONTROL[] = {
	0xC3,
	0x40, 0x00, 0x28
};

static const unsigned char SEQ_ASG_EQ[] = {
	0xEE,
	0xA8, 0x00, 0x95, 0x00,
	0xA8, 0x00, 0x95, 0x00,
};

static const unsigned char SEQ_DISPLAY_CONTROL[] = {
	0xF2,
	0x02, 0x10, 0x10, 0xC4, 0x64
};

static const unsigned char SEQ_MANPWR_SETTING[] = {
	0xF3,
	0x01, 0x93, 0x20, 0x22,
	0x80, 0x05, 0x25, 0x3C,
	0x26, 0x00
};

static const unsigned char SEQ_PANEL_GATE_CONTROL[] = {
	0xF7,
	0x01, 0x1B, 0x08, 0x0C,
	0x09, 0x0D, 0x01, 0x01,
	0x01, 0x04, 0x06, 0x01,
	0x01, 0x00, 0x00, 0x1A,
	0x01, 0x1B, 0x0A, 0x0E,
	0x0B, 0x0F, 0x01, 0x01,
	0x01, 0x05, 0x07, 0x01,
	0x01, 0x00, 0x00, 0x1A
};

static const unsigned char SEQ_ASG_CTL[] = {
	0xEF,
	0x34, 0x12, 0x98, 0xBA,
	0x10, 0x80, 0x24, 0x80,
	0x80, 0x80, 0x00, 0x00,
	0x00, 0x44, 0xA0, 0x82,
	0x00
};

static const unsigned char SEQ_SOURCE_CONTROL[] = {
	0xF6,
	0x60, 0x25, 0x05, 0x00,
	0x00, 0x03
};

static const unsigned char SEQ_MIE_CTRL1[] = {
	0xCD,
	0x2E, 0x2E, 0x2E, 0x2E,
	0x2E, 0x2E, 0x2E, 0x2E,
	0x2E, 0x2E, 0x2E, 0x2E,
	0x2E
};

static const unsigned char SEQ_MIE_CTRL2[] = {
	0xCE,
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x00
};

static const unsigned char SEQ_WRITE_DISPLAY_BRIGHTNESS[] = {
	0x51,
	0xFF
};

static const unsigned char SEQ_WRITE_CONTROL_DISPLAY[] = {
	0x53,
	0x2C
};

static const unsigned char SEQ_WRCABC[] = {
	0x55,
	0x00
};

/* init seq 3 */
static const unsigned char SEQ_POSITIVE_GAMMA_CONTROL[] = {
	0xFA,
	0x01, 0x3F, 0x09, 0x0C,
	0x00, 0x01, 0x06, 0x04,
	0x04, 0x0C, 0x10, 0x15,
	0x16, 0x18, 0x1C, 0x20,
	0x2A
};

static const unsigned char SEQ_NEGATIVE_GAMMA_CONTROL[] = {
	0xFB,
	0x01, 0x3F, 0x09, 0x0C,
	0x00, 0x01, 0x06, 0x04,
	0x04, 0x0C, 0x10, 0x15,
	0x16, 0x18, 0x1C, 0x20,
	0x2A
};

/* Display on */
static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

const const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

const const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

#endif /* __S6D7AA0_PARAM_H__ */
