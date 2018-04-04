
.text
	.arm

	.global	_start
_start:
	/*LED操作*/
	
	ldr r0, =0xc001b020
	ldr r1, =0x02800000
	str r1, [r0]
	
	ldr r0, =0xc001b004
	ldr r1, =0x00001800
	str r1, [r0]
	
	ldr r0, =0xc001b000
	ldr r1, =0x00001800
	str r1, [r0]
	


myledblink:
	
	ldr r5, =0x1896402
	mov r2, #0x00000000
myloop1:
	add r2, r2,#1
	cmp r5, r2
	BNE myloop1
	
	//LED1亮
	ldr r0, =0xc001b000
	ldr r1, =0x00000800
	str r1, [r0]
	
	ldr r5, =0x1896402
	mov r2, #0x00000000
myloop2:
	add r2, r2,#1
	cmp r5, r2
	BNE myloop2
	
	//LED1灭
	ldr r0, =0xc001b000
	ldr r1, =0x00001000
	str r1, [r0]
	b myledblink