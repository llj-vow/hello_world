/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

#include <stdio.h>
#define uchar unsigned char 
#define uint unsigned int 

void main(void)
{
	uint i;
	uchar led;
	while(1)
	{led=0x01;
	for(i=0;i<3;i++)
	{p013=~led;
	delay(100);
	led<<=1;
	}
	}
}

void delay(uint t) 
{
register uint nt;
for(;t;t--)
for(nt=0;nt<255;nt++);
}
