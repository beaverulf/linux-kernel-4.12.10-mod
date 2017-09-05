#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched/user.h>

asmlinkage long sys_icarus(
		int *processes, 
		int *sigpending,
		long *epoll_watches){

	struct user_struct *user;
	user = get_current_user();
	
	*processes = user->processes.counter;	
	*sigpending = user->sigpending.counter;
	*epoll_watches = user->epoll_watches.counter;
	
	return 0;
}
