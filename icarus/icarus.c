#include <linux/kernel.h>

asmlinkage long sys_icarus(void)
{
	printk(“Flying to close to the sun\n”);
	return 0;
}
