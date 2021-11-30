glorytoccp-y += glorytoccp_main.o
glorytoccp-y += glorytoccp_xjp.o
glorytoccp-$(CONFIG_SYSFS) += glorytoccp_sysfs.o

obj-$(CONFIG_GLORYTOCCP) += glorytoccp.o
