all:
	mkdir -p kernel/initramfs
	gcc -std=c17 impl/doom.c -o kernel/initramfs/init
	make -C kernel run
