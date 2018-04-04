.text
.global	_start
_start:
	b st
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000

st:
	ldr pc, =on_sram

on_sram:
	ldr sp, =0x43c01000
	bl main
halt_loop:
	b halt_loop
