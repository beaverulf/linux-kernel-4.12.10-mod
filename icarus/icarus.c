#include <linux/kernel.h>

asmlinkage long sys_icarus(void)
{
	printk(“Flying too close to the sun\n”);
	return 0;
}
