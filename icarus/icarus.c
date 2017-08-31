#include <linux/kernel.h>

asmlinkage long sys_icarus(void){
	printk("Too close to the sun\n");
	return 0;
}
