#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched/user.h>

asmlinkage long sys_icarus(void){

	struct user_struct *user;
	user = get_current_user();

	printk("Number of processes: %d",user->__count);
	return 0;
}
