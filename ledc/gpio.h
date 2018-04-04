#ifndef __GPIO_H_
#define __GPIO_H_

//GPIOB状态寄存器
#define GPIOBOUT		(*(volatile unsigned *)0xC001B000)
//GPIOB输出使能寄存器
#define GPIOBOUTENB		(*(volatile unsigned *)(0xC001B000 + 0x004))
//GPIOB备用功能寄存器
#define GPIOBALTFN0		(*(volatile unsigned *)(0xC001B000 + 0x020))

#endif