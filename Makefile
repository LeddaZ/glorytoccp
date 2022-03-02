glorytoccp-y += glorytoccp_main.o
glorytoccp-y += glorytoccp_data.o
glorytoccp-$(CONFIG_SYSFS) += glorytoccp_sysfs.o

obj-$(CONFIG_GLORYTOCCP) += glorytoccp.o

ifeq ($(KERNEL_BUILD),)
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
endif
