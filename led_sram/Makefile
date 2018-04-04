led.bin:led.S
	arm-linux-gcc -o led_s.o -c led.S
	arm-linux-ld -Ttext=0xffff0200 led_s.o -o led_s_elf
	arm-linux-objcopy -I elf32-littlearm -O binary led_s_elf led_s.bin
	./mk6818.exe led_s_pak.bin nsih.txt led_s.bin

clean:
	rm -f led_s_pak.bin led_s.bin led_s_elf *.o