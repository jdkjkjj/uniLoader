// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2026 Ryo "evilMyQueen" Yamada <evilMyQueen@mainlining.org>
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info water_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 736,
	.height = 1600,
	.stride = 4,
	.scale = 2,
	.address = (void *)0x7ba50000
};

static const struct device water_devices[] = {
	{ "simplefb", &water_fb, "fb" },
};

struct board_data board_ops = {
	.name = "xiaomi-water",
	.ops = {
	},
	.devices = water_devices,
	.num_devices = ARRAY_SIZE(water_devices),
	.quirks = 0
};
