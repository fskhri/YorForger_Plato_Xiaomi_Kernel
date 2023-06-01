/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/*****************************************************************************
 *
 * Filename:
 * ---------
 *     PLATOIMX596mipi_Sensor.h
 *
 * Project:
 * --------
 *     ALPS
 *
 * Description:
 * ------------
 *     CMOS sensor header file
 *
 ****************************************************************************/
#ifndef _PLATOIMX596MIPI_SENSOR_H
#define _PLATOIMX596MIPI_SENSOR_H


static kal_uint16 platoimx596_init_setting[] = {
	0x0136, 0x18,
	0x0137, 0x00,
	0x321C, 0x00,
	0x33F0, 0x05,
	0x33F1, 0x03,
	0x32C8, 0x01,
	0x40A2, 0x01,
	0x441F, 0x01,
	0x4B20, 0x07,
	0x5ABE, 0x3A,
	0x5AC8, 0x3A,
	0x5AD0, 0x3A,
	0x5ADA, 0x3A,
	0x5C04, 0x00,
	0x5C05, 0x00,
	0x5C06, 0x00,
	0x5C0B, 0x00,
	0x5C0C, 0x00,
	0x5C0D, 0x00,
	0x5C0E, 0x00,
	0x5D55, 0x00,
	0x5D56, 0x00,
	0x6104, 0x0A,
	0x6105, 0x0A,
	0x6107, 0x0A,
	0x610E, 0x07,
	0x610F, 0x07,
	0x6110, 0x07,
	0x6111, 0x07,
	0x6112, 0x07,
	0x6113, 0x07,
	0x6114, 0x07,
	0x6115, 0x07,
	0x611C, 0x0B,
	0x611D, 0x07,
	0x611E, 0x09,
	0x611F, 0x07,
	0x6122, 0x09,
	0x612B, 0x07,
	0x612D, 0x07,
	0x612E, 0x07,
	0x612F, 0x07,
	0x6131, 0x07,
	0x6138, 0x0B,
	0x6139, 0x07,
	0x613A, 0x0B,
	0x613F, 0x07,
	0x6182, 0x01,
	0x6183, 0x01,
	0x6184, 0x01,
	0x6185, 0x01,
	0x6186, 0x01,
	0x6187, 0x01,
	0x6188, 0x01,
	0x6189, 0x01,
	0x618A, 0x01,
	0x618B, 0x01,
	0x618C, 0x01,
	0x618D, 0x01,
	0x618E, 0x01,
	0x618F, 0x01,
	0x6194, 0x01,
	0x6195, 0x01,
	0x6197, 0x01,
	0x6199, 0x01,
	0x619B, 0x01,
	0x619D, 0x01,
	0x61A2, 0x01,
	0x61A3, 0x01,
	0x61A5, 0x01,
	0x6205, 0x29,
	0x6207, 0x29,
	0x6209, 0x29,
	0x620B, 0x29,
	0x620D, 0x29,
	0x620F, 0x29,
	0x6211, 0x29,
	0x6213, 0x29,
	0x6215, 0x29,
	0x6217, 0x29,
	0x6219, 0x29,
	0x621B, 0x29,
	0x621D, 0x29,
	0x621F, 0x29,
	0x6221, 0x0A,
	0x622B, 0x29,
	0x622D, 0x29,
	0x6231, 0x29,
	0x6235, 0x29,
	0x6239, 0x29,
	0x623D, 0x29,
	0x6249, 0x29,
	0x624B, 0x29,
	0x624F, 0x29,
	0x628F, 0x90,
	0x6291, 0x90,
	0x6293, 0x90,
	0x6295, 0x90,
	0x6297, 0x90,
	0x6299, 0x90,
	0x629B, 0x90,
	0x629D, 0x90,
	0x629F, 0x90,
	0x62A1, 0x90,
	0x62A3, 0x90,
	0x62A5, 0x90,
	0x62A7, 0x90,
	0x62A9, 0x90,
	0x62AB, 0x24,
	0x62B5, 0x90,
	0x62B7, 0x90,
	0x62BB, 0x90,
	0x62BF, 0x90,
	0x62C3, 0x90,
	0x62C7, 0x90,
	0x62D3, 0x90,
	0x62D5, 0x90,
	0x62D9, 0x90,
	0x6319, 0x90,
	0x631B, 0x90,
	0x631F, 0x90,
	0x6323, 0x90,
	0x636D, 0x28,
	0x636E, 0x2A,
	0x636F, 0x29,
	0x6370, 0x29,
	0x6371, 0x0E,
	0x6372, 0x0E,
	0x6373, 0x28,
	0x6374, 0x0F,
	0x6375, 0x1E,
	0x6376, 0x0D,
	0x637D, 0x2A,
	0x637E, 0x2B,
	0x637F, 0x2A,
	0x6380, 0x2A,
	0x6381, 0x28,
	0x6382, 0x29,
	0x6383, 0x2A,
	0x6384, 0x27,
	0x6385, 0x1E,
	0x6386, 0x1E,
	0x638D, 0x28,
	0x638E, 0x32,
	0x638F, 0x28,
	0x6390, 0x32,
	0x6391, 0x29,
	0x6392, 0x2A,
	0x6393, 0x28,
	0x6394, 0x29,
	0x6395, 0x1D,
	0x6396, 0x1F,
	0x639D, 0x28,
	0x639E, 0x32,
	0x639F, 0x28,
	0x63A0, 0x32,
	0x63A1, 0x2A,
	0x63A2, 0x2B,
	0x63A3, 0x28,
	0x63A4, 0x2A,
	0x63A5, 0x1E,
	0x63A6, 0x20,
	0x63AD, 0x28,
	0x63AE, 0x32,
	0x63AF, 0x28,
	0x63B0, 0x1E,
	0x63B4, 0x28,
	0x63B5, 0x32,
	0x63B6, 0x28,
	0x63B7, 0x1E,
	0x63C9, 0x01,
	0x63DA, 0x03,
	0x63DE, 0x03,
	0x63EA, 0x05,
	0x63ED, 0x01,
	0x63EE, 0x04,
	0x63F8, 0x03,
	0x63FA, 0x03,
	0x63FF, 0x05,
	0x6401, 0x04,
	0x6403, 0x04,
	0x6404, 0x03,
	0x6405, 0x04,
	0x6406, 0x03,
	0x6407, 0x1F,
	0x6408, 0x0E,
	0x6409, 0x02,
	0x640A, 0x1F,
	0x640B, 0x0D,
	0x640C, 0x1F,
	0x6417, 0x04,
	0x6418, 0x03,
	0x641A, 0x02,
	0x641B, 0x07,
	0x641C, 0x0D,
	0x6427, 0x04,
	0x6428, 0x03,
	0x642A, 0x03,
	0x642B, 0x08,
	0x642C, 0x0C,
	0x6437, 0x01,
	0x643A, 0x02,
	0x643B, 0x05,
	0x643C, 0x07,
	0x6446, 0x04,
	0x644D, 0x01,
	0x6499, 0x01,
	0x649A, 0x01,
	0x649B, 0x01,
	0x649C, 0x01,
	0x649D, 0x01,
	0x649E, 0x01,
	0x649F, 0x01,
	0x64A0, 0x01,
	0x64A7, 0x01,
	0x64A8, 0x01,
	0x64A9, 0x01,
	0x64AA, 0x01,
	0x64AB, 0x01,
	0x64AC, 0x01,
	0x64AD, 0x01,
	0x64AE, 0x01,
	0x64B5, 0x01,
	0x64B6, 0x01,
	0x64B7, 0x01,
	0x64B8, 0x01,
	0x64B9, 0x01,
	0x64BA, 0x01,
	0x64BB, 0x01,
	0x64BC, 0x01,
	0x64C3, 0x01,
	0x64C4, 0x01,
	0x64C5, 0x01,
	0x64C6, 0x01,
	0x64C7, 0x01,
	0x64C8, 0x01,
	0x64C9, 0x01,
	0x64CA, 0x01,
	0x64D1, 0x01,
	0x64D2, 0x01,
	0x64D3, 0x01,
	0x64D4, 0x01,
	0x64D8, 0x01,
	0x64D9, 0x01,
	0x64DA, 0x01,
	0x64DB, 0x01,
	0x651F, 0x1E,
	0x6520, 0x1E,
	0x6523, 0x1E,
	0x6524, 0x1E,
	0x6526, 0x1E,
	0x6528, 0x1E,
	0x6533, 0x1E,
	0x6534, 0x1E,
	0x6536, 0x1E,
	0x6538, 0x1E,
	0x666F, 0x15,
	0x6670, 0x15,
	0x6671, 0x15,
	0x6672, 0x15,
	0x6673, 0x15,
	0x6674, 0x15,
	0x6675, 0x15,
	0x6676, 0x15,
	0x6677, 0x15,
	0x6678, 0x15,
	0x6679, 0x15,
	0x667A, 0x15,
	0x667B, 0x15,
	0x667C, 0x15,
	0x6681, 0x15,
	0x6682, 0x15,
	0x6684, 0x15,
	0x6686, 0x15,
	0x6688, 0x15,
	0x668A, 0x15,
	0x668F, 0x15,
	0x6690, 0x15,
	0x6692, 0x15,
	0x66BD, 0x0A,
	0x66BE, 0x0A,
	0x66CA, 0x0A,
	0x66CB, 0x0A,
	0x66D4, 0x0A,
	0x66D7, 0x0A,
	0x6A35, 0x36,
	0x6A36, 0x0E,
	0x6A37, 0x36,
	0x6A38, 0x36,
	0x6A39, 0x36,
	0x6A3A, 0x36,
	0x6A3B, 0x36,
	0x6A3C, 0x0E,
	0x6A3D, 0x36,
	0x6A3E, 0x36,
	0x6A3F, 0x36,
	0x6A40, 0x36,
	0x6A41, 0x36,
	0x7910, 0x00,
	0x8502, 0x01,
	0x8505, 0x00,
	0x8605, 0x01,
	0x9003, 0x02,
	0x9200, 0x86,
	0x9201, 0x08,
	0x9202, 0x86,
	0x9203, 0x09,
	0xBC77, 0x4C,
	0xBC79, 0x7C,
	0xBC7A, 0x06,
	0xBC7B, 0xE8,
	0xBC7C, 0x06,
	0xBC7D, 0x08,
	0xBC7E, 0x0F,
	0xBC7F, 0x20,
	0xBC80, 0x06,
	0xBC81, 0xE8,
	0xBC82, 0x06,
	0xBC83, 0xE8,
	0xBC84, 0x06,
	0xBC85, 0xE8,
	0xBC86, 0x06,
	0xBC87, 0xE8,
	0xA015, 0x90,
	0xA016, 0x90,
	0xA017, 0x34,
	0xA018, 0xE8,
	0xA019, 0x50,
	0xA01A, 0x06,
	0xA165, 0x10,
	0xA16B, 0x10,
	0xA171, 0x10,
	0xA189, 0xC4,
	0xA18F, 0xC4,
	0xA195, 0xC4,
	0xA19B, 0x0B,
	0xA1A1, 0x0B,
	0xA1A7, 0x0B,
	0xA337, 0x80,
	0xA339, 0x80,
	0xA33B, 0x80,
	0xA51D, 0x10,
	0xA520, 0x00,
	0xA905, 0x40,
	0xA90B, 0x00,
	0xAA08, 0xFF,
	0xAA0E, 0xFF,
	0xAB11, 0x40,
	0xAB1D, 0x40,
	0xAD01, 0x70,
	0xAD0D, 0x0B,
	0xAD0E, 0x00,
	0xAD0F, 0x59,
	0xAD10, 0x00,
	0xAD11, 0x76,
	0xAD13, 0x11,
	0xAD15, 0xAF,
	0xAD17, 0xE7,
	0xAD19, 0x0F,
	0xAD1A, 0x00,
	0xAD1B, 0x69,
	0xAD1C, 0x00,
	0xAD1D, 0x89,
	0x41D0, 0x00,
};


static kal_uint16 platoimx596_preview_setting[] = {
//2592x1952@30fps,Mbps
	0x0114, 0x03,
	0x0342, 0x12,
	0x0343, 0x24,
	0x0340, 0x18,
	0x0341, 0x95,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x14,
	0x0349, 0x3F,
	0x034A, 0x0F,
	0x034B, 0x3F,
	0x0220, 0x62,
	0x0221, 0x11,
	0x0222, 0x01,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x09,
	0x30D8, 0x00,
	0x3200, 0x41,
	0x3201, 0x41,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0A,
	0x040D, 0x20,
	0x040E, 0x07,
	0x040F, 0xA0,
	0x034C, 0x0A,
	0x034D, 0x20,
	0x034E, 0x07,
	0x034F, 0xA0,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x03,
	0x0306, 0x01,
	0x0307, 0x12,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0xE2,
	0x32D3, 0x01,
	0x32D5, 0x00,
	0x32D6, 0x00,
	0x4000, 0x06,
	0x4001, 0x04,
	0x40A0, 0x04,
	0x40A1, 0x88,
	0x40A4, 0x04,
	0x40A5, 0x88,
	0x40B8, 0x01,
	0x40B9, 0x05,
	0x41A4, 0x00,
	0x0202, 0x18,
	0x0203, 0x7D,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3116, 0x01,
	0x3117, 0xF4,
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0216, 0x00,
	0x0217, 0x00,
	0x0218, 0x01,
	0x0219, 0x00,
	0x3118, 0x00,
	0x3119, 0x00,
	0x311A, 0x01,
	0x311B, 0x00,
	0x0808, 0x02,
	0x080B, 0x9F,
	0x080D, 0x57,
	0x080E, 0x00,
	0x080F, 0x9F,
	0x0810, 0x00,
	0x0811, 0x57,
	0x0813, 0x57,
	0x0815, 0x57,
	0x0816, 0x01,
	0x0817, 0x6F,
	0x0819, 0x47,
	0x0825, 0x8F,
	0x0827, 0x0F,
};

//same preview
static kal_uint16 platoimx596_capture_setting[] = {};


static kal_uint16 platoimx596_normal_video_setting[] = {
//2952x1464@30fps,Mbps
	0x0114, 0x03,
	0x0342, 0x12,
	0x0343, 0x24,
	0x0340, 0x18,
	0x0341, 0x95,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x01,
	0x0347, 0xE0,
	0x0348, 0x14,
	0x0349, 0x3F,
	0x034A, 0x0D,
	0x034B, 0x5F,
	0x0220, 0x62,
	0x0221, 0x11,
	0x0222, 0x01,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x09,
	0x30D8, 0x00,
	0x3200, 0x41,
	0x3201, 0x41,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x04,
	0x040C, 0x0A,
	0x040D, 0x20,
	0x040E, 0x05,
	0x040F, 0xB8,
	0x034C, 0x0A,
	0x034D, 0x20,
	0x034E, 0x05,
	0x034F, 0xB8,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x03,
	0x0306, 0x01,
	0x0307, 0x12,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0xE2,
	0x32D3, 0x01,
	0x32D5, 0x00,
	0x32D6, 0x00,
	0x4000, 0x06,
	0x4001, 0x04,
	0x40A0, 0x03,
	0x40A1, 0x70,
	0x40A4, 0x00,
	0x40A5, 0x14,
	0x40B8, 0x04,
	0x40B9, 0x7E,
	0x41A4, 0x00,
	0x0202, 0x18,
	0x0203, 0x7D,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3116, 0x01,
	0x3117, 0xF4,
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0216, 0x00,
	0x0217, 0x00,
	0x0218, 0x01,
	0x0219, 0x00,
	0x3118, 0x00,
	0x3119, 0x00,
	0x311A, 0x01,
	0x311B, 0x00,
	0x0808, 0x02,
	0x080B, 0x9F,
	0x080D, 0x57,
	0x080E, 0x00,
	0x080F, 0x9F,
	0x0810, 0x00,
	0x0811, 0x57,
	0x0813, 0x57,
	0x0815, 0x57,
	0x0816, 0x01,
	0x0817, 0x6F,
	0x0819, 0x47,
	0x0825, 0x8F,
	0x0827, 0x0F,
};

//1080P@240fps
static kal_uint16 platoimx596_hs_video_setting[] = {
////1920x1080@120fps,Mbps
	0x0114, 0x03,
	0x0342, 0x12,
	0x0343, 0x24,
	0x0340, 0x06,
	0x0341, 0x25,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x03,
	0x0347, 0x60,
	0x0348, 0x14,
	0x0349, 0x3F,
	0x034A, 0x0B,
	0x034B, 0xDF,
	0x0220, 0x62,
	0x0221, 0x11,
	0x0222, 0x01,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x09,
	0x30D8, 0x00,
	0x3200, 0x41,
	0x3201, 0x41,
	0x0408, 0x01,
	0x0409, 0x50,
	0x040A, 0x00,
	0x040B, 0x04,
	0x040C, 0x07,
	0x040D, 0x80,
	0x040E, 0x04,
	0x040F, 0x38,
	0x034C, 0x07,
	0x034D, 0x80,
	0x034E, 0x04,
	0x034F, 0x38,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x03,
	0x0306, 0x01,
	0x0307, 0x12,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0xE2,
	0x32D3, 0x01,
	0x32D5, 0x00,
	0x32D6, 0x00,
	0x4000, 0x06,
	0x4001, 0x04,
	0x40A0, 0x03,
	0x40A1, 0x70,
	0x40A4, 0x00,
	0x40A5, 0x14,
	0x40B8, 0x04,
	0x40B9, 0x7E,
	0x41A4, 0x00,
	0x0202, 0x06,
	0x0203, 0x0D,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3116, 0x01,
	0x3117, 0xF4,
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0216, 0x00,
	0x0217, 0x00,
	0x0218, 0x01,
	0x0219, 0x00,
	0x3118, 0x00,
	0x3119, 0x00,
	0x311A, 0x01,
	0x311B, 0x00,
	0x0808, 0x02,
	0x080B, 0x9F,
	0x080D, 0x57,
	0x080E, 0x00,
	0x080F, 0x9F,
	0x0810, 0x00,
	0x0811, 0x57,
	0x0813, 0x57,
	0x0815, 0x57,
	0x0816, 0x01,
	0x0817, 0x6F,
	0x0819, 0x47,
	0x0825, 0x8F,
	0x0827, 0x0F,
};

//same preview
static kal_uint16 platoimx596_slim_video_setting[] = {};


static kal_uint16 platoimx596_custom1_setting[] = {
//2952x1464@60fps,Mbps
	0x0114, 0x03,
	0x0342, 0x12,
	0x0343, 0x24,
	0x0340, 0x0C,
	0x0341, 0x4A,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x01,
	0x0347, 0xE0,
	0x0348, 0x14,
	0x0349, 0x3F,
	0x034A, 0x0D,
	0x034B, 0x5F,
	0x0220, 0x62,
	0x0221, 0x11,
	0x0222, 0x01,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x09,
	0x30D8, 0x00,
	0x3200, 0x41,
	0x3201, 0x41,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x04,
	0x040C, 0x0A,
	0x040D, 0x20,
	0x040E, 0x05,
	0x040F, 0xB8,
	0x034C, 0x0A,
	0x034D, 0x20,
	0x034E, 0x05,
	0x034F, 0xB8,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x03,
	0x0306, 0x01,
	0x0307, 0x12,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0xE2,
	0x32D3, 0x01,
	0x32D5, 0x00,
	0x32D6, 0x00,
	0x4000, 0x06,
	0x4001, 0x04,
	0x40A0, 0x03,
	0x40A1, 0x70,
	0x40A4, 0x00,
	0x40A5, 0x14,
	0x40B8, 0x04,
	0x40B9, 0x7E,
	0x41A4, 0x00,
	0x0202, 0x0C,
	0x0203, 0x32,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3116, 0x01,
	0x3117, 0xF4,
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0216, 0x00,
	0x0217, 0x00,
	0x0218, 0x01,
	0x0219, 0x00,
	0x3118, 0x00,
	0x3119, 0x00,
	0x311A, 0x01,
	0x311B, 0x00,
	0x0808, 0x02,
	0x080B, 0x9F,
	0x080D, 0x57,
	0x080E, 0x00,
	0x080F, 0x9F,
	0x0810, 0x00,
	0x0811, 0x57,
	0x0813, 0x57,
	0x0815, 0x57,
	0x0816, 0x01,
	0x0817, 0x6F,
	0x0819, 0x47,
	0x0825, 0x8F,
	0x0827, 0x0F,
};



enum IMGSENSOR_MODE {
	IMGSENSOR_MODE_PREVIEW,
	IMGSENSOR_MODE_CAPTURE,
	IMGSENSOR_MODE_VIDEO,
	IMGSENSOR_MODE_HIGH_SPEED_VIDEO,
	IMGSENSOR_MODE_SLIM_VIDEO,
	IMGSENSOR_MODE_CUSTOM1,
	IMGSENSOR_MODE_CUSTOM2,
	IMGSENSOR_MODE_CUSTOM3,
	IMGSENSOR_MODE_CUSTOM4,
	IMGSENSOR_MODE_CUSTOM5,
	IMGSENSOR_MODE_CUSTOM6,
	IMGSENSOR_MODE_CUSTOM7,
	IMGSENSOR_MODE_CUSTOM8,
	IMGSENSOR_MODE_CUSTOM9,
	IMGSENSOR_MODE_CUSTOM10,
	IMGSENSOR_MODE_CUSTOM11,
	IMGSENSOR_MODE_CUSTOM12,
	IMGSENSOR_MODE_CUSTOM13,
	IMGSENSOR_MODE_CUSTOM14,
	IMGSENSOR_MODE_CUSTOM15,
	IMGSENSOR_MODE_INIT = 0xff,
};

enum {
	OTP_QSC_NONE = 0x0,
	OTP_QSC_INTERNAL,
	OTP_QSC_CUSTOM,
};

struct imgsensor_mode_struct {
	kal_uint32 pclk; /* record different mode's pclk */
	kal_uint32 linelength; /* record different mode's linelength */
	kal_uint32 framelength; /* record different mode's framelength */

	kal_uint8 startx; /* record different mode's startx of grabwindow */
	kal_uint8 starty; /* record different mode's startx of grabwindow */

	kal_uint16 grabwindow_width;
	kal_uint16 grabwindow_height;

/* for MIPIDataLowPwr2HighSpeedSettleDelayCount by different scenario*/
	kal_uint8 mipi_data_lp2hs_settle_dc;

 /*     following for GetDefaultFramerateByScenario()    */
	kal_uint16 max_framerate;
	kal_uint32 mipi_pixel_rate;
};

/* SENSOR PRIVATE STRUCT FOR VARIABLES*/
struct imgsensor_struct {
	kal_uint8 mirror; /* mirrorflip information */

	kal_uint8 sensor_mode; /* record IMGSENSOR_MODE enum value */

	kal_uint32 shutter; /* current shutter */
	kal_uint16 gain; /* current gain */

	kal_uint32 pclk; /* current pclk */

	kal_uint32 frame_length; /* current framelength */
	kal_uint32 line_length; /* current linelength */

	kal_uint32 min_frame_length;
	kal_uint16 dummy_pixel; /* current dummypixel */
	kal_uint16 dummy_line; /* current dummline */

	kal_uint16 current_fps; /* current max fps */
	kal_bool autoflicker_en; /* record autoflicker enable or disable */
	kal_uint32 test_pattern; /* record test pattern mode or not */
	enum MSDK_SCENARIO_ID_ENUM current_scenario_id;
	kal_bool ihdr_en; /* ihdr enable or disable */
	kal_uint8 ihdr_mode; /* ihdr enable or disable */
	kal_uint8 pdaf_mode; /* ihdr enable or disable */
	kal_uint8 i2c_write_id; /* record current sensor's i2c write id */
};

/* SENSOR PRIVATE STRUCT FOR CONSTANT*/
struct imgsensor_info_struct {
	kal_uint32 sensor_id; /* record sensor id defined in Kd_imgsensor.h */
	kal_uint32 checksum_value; /* checksum value for Camera Auto Test */
	struct imgsensor_mode_struct pre;
	struct imgsensor_mode_struct cap;
	struct imgsensor_mode_struct normal_video;
	struct imgsensor_mode_struct hs_video;
	struct imgsensor_mode_struct slim_video;
	struct imgsensor_mode_struct custom1;
	struct imgsensor_mode_struct custom2;
	struct imgsensor_mode_struct custom3;
	struct imgsensor_mode_struct custom4;
	struct imgsensor_mode_struct custom5;
	struct imgsensor_mode_struct custom6;
	struct imgsensor_mode_struct custom7;
	struct imgsensor_mode_struct custom8;
	struct imgsensor_mode_struct custom9;
	struct imgsensor_mode_struct custom10;
	struct imgsensor_mode_struct custom11;
	struct imgsensor_mode_struct custom12;
	struct imgsensor_mode_struct custom13;
	struct imgsensor_mode_struct custom14;
	struct imgsensor_mode_struct custom15;

	kal_uint8 ae_shut_delay_frame; /* shutter delay frame for AE cycle */
	kal_uint8 ae_sensor_gain_delay_frame;
	kal_uint8 ae_ispGain_delay_frame;
	kal_uint8 ihdr_support; /* 1, support; 0,not support */
	kal_uint8 ihdr_le_firstline; /* 1,le first ; 0, se first */
	kal_uint8 temperature_support;	/* 1, support; 0,not support */
	kal_uint8 sensor_mode_num; /* support sensor mode num */

	kal_uint8 cap_delay_frame; /* enter capture delay frame num */
	kal_uint8 pre_delay_frame; /* enter preview delay frame num */
	kal_uint8 video_delay_frame; /* enter video delay frame num */
	kal_uint8 hs_video_delay_frame;
	kal_uint8 slim_video_delay_frame; /* enter slim video delay frame num */
	kal_uint8 custom1_delay_frame; /* enter custom1 delay frame num */
	kal_uint8 custom2_delay_frame; /* enter custom2 delay frame num */
	kal_uint8 custom3_delay_frame; /* enter custom3 delay frame num */
	kal_uint8 custom4_delay_frame; /* enter custom4 delay frame num */
	kal_uint8 custom5_delay_frame; /* enter custom5 delay frame num */
	kal_uint8 custom6_delay_frame; /* enter custom6 delay frame num */
	kal_uint8 custom7_delay_frame; /* enter custom7 delay frame num */
	kal_uint8 custom8_delay_frame; /* enter custom8 delay frame num */
	kal_uint8 custom9_delay_frame; /* enter custom9 delay frame num */
	kal_uint8 custom10_delay_frame; /* enter custom10 delay frame num */
	kal_uint8 custom11_delay_frame; /* enter custom11 delay frame num */
	kal_uint8 custom12_delay_frame; /* enter custom12 delay frame num */
	kal_uint8 custom13_delay_frame; /* enter custom13 delay frame num */
	kal_uint8 custom14_delay_frame; /* enter custom14 delay frame num */
	kal_uint8 custom15_delay_frame; /* enter custom15 delay frame num */

	kal_uint8  frame_time_delay_frame;
	kal_uint8 margin; /* sensor framelength & shutter margin */
	kal_uint32 min_shutter; /* min shutter */
	kal_uint32 max_frame_length;
	kal_uint32 min_gain;
	kal_uint32 max_gain;
	kal_uint32 min_gain_iso;
	kal_uint32 gain_step;
	kal_uint32 exp_step;
	kal_uint32 gain_type;
	kal_uint8 isp_driving_current; /* mclk driving current */
	kal_uint8 sensor_interface_type; /* sensor_interface_type */
	kal_uint8 mipi_sensor_type;
	/* 0,MIPI_OPHY_NCSI2; 1,MIPI_OPHY_CSI2, default is NCSI2,
	 * don't modify this para
	 */
	kal_uint8 mipi_settle_delay_mode;
	/* 0, high speed signal auto detect;
	 * 1, use settle delay,unit is ns,
	 * default is auto detect, don't modify this para
	 */
	kal_uint8 sensor_output_dataformat;
	kal_uint8 mclk;	 /* mclk value, suggest 24 or 26 for 24Mhz or 26Mhz */
	kal_uint32 i2c_speed; /* i2c speed */
	kal_uint8 mipi_lane_num; /* mipi lane num */
	kal_uint8 i2c_addr_table[5];
};

/* SENSOR READ/WRITE ID */
/* #define IMGSENSOR_WRITE_ID_1 (0x6c) */
/* #define IMGSENSOR_READ_ID_1  (0x6d) */
/* #define IMGSENSOR_WRITE_ID_2 (0x20) */
/* #define IMGSENSOR_READ_ID_2  (0x21) */

extern int iReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData,
	u8 *a_pRecvData, u16 a_sizeRecvData,
		       u16 i2cId);
extern int iWriteRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u16 i2cId);

extern void read_imx230_eeprom(void);
int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
	u16 transfer_length, u16 timing);

extern int iReadReg(u16 a_u2Addr, u8 *a_puBuff, u16 i2cId);
extern int iWriteReg(u16 a_u2Addr, u32 a_u4Data, u32 a_u4Bytes, u16 i2cId);
extern void kdSetI2CSpeed(u16 i2cSpeed);
extern int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
				u16 transfer_length, u16 timing);
#endif
