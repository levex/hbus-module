#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

#include "context.h"

/* test data */

struct bus_context test_ctx = {
	.ctx_id = 1,
	.ctx_consumers = NULL,
	.ctx_messages = NULL,
	.ctx_consumers = NULL,
};

/* code */

static int __init bus_init(void)
{
	printk(KERN_INFO "Hello, world");
	return 0;
}


static void __exit bus_exit(void)
{
	return;
}

module_init(bus_init);
module_exit(bus_exit);

MODULE_AUTHOR("Levente Kurusa <levex@linux.com>");
MODULE_DESCRIPTION("Transactional kernel module communication");
MODULE_LICENSE("GPL");
