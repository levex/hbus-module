obj-m += bus.o

KERNEL="/lib/modules/$(shell uname -r)/build"

all:
	make -C ${KERNEL} M=$(PWD) modules

clean:
	make -C ${KERNEL} M=$(PWD) clean