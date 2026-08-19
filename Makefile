all:
	mkdir -p kernel/initramfs/lib64 kernel/initramfs/usr/lib
	gcc -std=c17 impl/doom.c -o kernel/initramfs/init
	cp /lib64/ld-linux-x86-64.so.2 kernel/initramfs/lib64
	cp /usr/lib/libc.so.6 kernel/initramfs/usr/lib
	make -C kernel run
