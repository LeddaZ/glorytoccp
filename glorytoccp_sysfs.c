/*
 * Glory to CCP Linux kernel module sysfs extension
 *
 * Author: Sebastiano Barezzi <barezzisebastiano@gmail.com>
 */

#include "glorytoccp_sysfs.h"

#include <linux/kobject.h>
#include <linux/sysfs.h>
#include "glorytoccp.h"
#include "glorytoccp_xjp.h"

static ssize_t oursupremeleader_show(struct kobject *kobj, 
		struct kobj_attribute *attr, char *buf) {
	return sprintf(buf, "%s", oursupremeleader);
}

static struct kobj_attribute glorytoccp_attr = __ATTR(oursupremeleader, 0444,
		oursupremeleader_show, NULL);

static struct kobject *kobj;

void glorytoccp_sysfs_init(void) {
	kobj = kobject_create_and_add(KBUILD_MODNAME, NULL);

	if (sysfs_create_file(kobj, &glorytoccp_attr.attr))
		LOGE("Cannot create sysfs file, our Supreme Leader won't be happy!\n");
	
	return;
}

void glorytoccp_sysfs_exit(void) {
	sysfs_remove_file(kobj, &glorytoccp_attr.attr);

	kobject_put(kobj);

	return;
}
