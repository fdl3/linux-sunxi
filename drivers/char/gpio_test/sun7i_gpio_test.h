/*
 * drivers/char/gpio_test/sun7i_gpio_test.h
 * (C) Copyright 2010-2015
 * Reuuimlla Technology Co., Ltd. <www.reuuimllatech.com>
 * liugang <liugang@reuuimllatech.com>
 *
 * sun7i gpio test head file
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */

#ifndef __SUN7I_GPIO_TEST_H
#define __SUN7I_GPIO_TEST_H

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/fcntl.h>
#include <linux/gfp.h>
#include <linux/interrupt.h>
#include <linux/init.h>
#include <linux/ioport.h>
#include <linux/in.h>
#include <linux/string.h>
#include <linux/delay.h>
#include <linux/errno.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/skbuff.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/gpio.h>
#include <asm-generic/gpio.h>

#include <asm/io.h>
#include <asm/pgtable.h>
#include <linux/kthread.h>
#include <linux/delay.h>

#include <mach/gpio.h> /* how to search arch/arm/mach-sun7i/include/mach/gpio.h? */

/*
 * gpio test case id
 */
enum gpio_test_case_e {
	GTC_API,		/* gpio test case api */
	GTC_MAX
};

#define PIO_TEST_DBG_FUN_LINE_TODO	printk("[GPIO_TEST]%s, line %d, todo############\n", __FUNCTION__, __LINE__)
#define PIO_TEST_DBG_FUN_LINE 		printk("[GPIO_TEST]%s, line %d\n", __FUNCTION__, __LINE__)
#define PIO_TEST_ERR_FUN_LINE 		printk("[GPIO_TEST]%s err, line %d\n", __FUNCTION__, __LINE__)
#define PIO_ASSERT_RET(x, ret, pos)	if(!(x)) {ret = __LINE__; goto pos;}

#endif /* __SUN7I_GPIO_TEST_H */

