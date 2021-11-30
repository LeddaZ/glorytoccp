/*
 * Glory to CCP Linux kernel module
 *
 * Author: Sebastiano Barezzi <barezzisebastiano@gmail.com>
 */

#include "glorytoccp.h"

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "glorytoccp_xjp.h"
#ifdef CONFIG_SYSFS
#include "glorytoccp_sysfs.h"
#endif

static int __init glorytoccp_init(void) {
#ifdef CONFIG_SYSFS
	glorytoccp_sysfs_init();
#endif

	LOGI("Module loaded, glory to CCP\n%s", oursupremeleader);
	return 0;
}

static void __exit glorytoccp_exit(void) {
	LOGI("Module is shutting down, -9000 social credit points! Your execution will be tomorrow at 9:00AM\n");

#ifdef CONFIG_SYSFS
	glorytoccp_sysfs_exit();
#endif
}

module_init(glorytoccp_init);
module_exit(glorytoccp_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sebastiano Barezzi <barezzisebastiano@gmail.com>");
MODULE_DESCRIPTION("Glory to CCP");
MODULE_VERSION("1.0");
