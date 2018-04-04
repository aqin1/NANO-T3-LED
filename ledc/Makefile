led_c.bin:led.S main.c
	arm-linux-gcc -o led_c.o -c led.S
	arm-linux-gcc -o main.o -c main.c
	arm-linux-ld -Ttext=0x43c00000 led_c.o main.o -o led_c_elf
	arm-linux-objcopy -I elf32-littlearm -O binary led_c_elf led_c.bin
	./mk6818.exe led_c_pak.bin nsih.txt 2ndboot led_c.bin

clean:
	rm -f led_c_pak.bin led_c.bin led_c_elf *.o