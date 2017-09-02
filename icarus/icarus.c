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
	
//	memcpy(processes,user->processes.counter,sizeof(int));
//	memcpy(sigpending,user->sigpending.counter,sizeof(int));
//	memcpy(epoll_watches,user->epoll_watches.counter,sizeof(long));
	printk("# Processes: %d\n# Pending Signales %d\nEpoll watches: %ld\n",user->processes.counter,user->sigpending.counter,user->epoll_watches.counter);
	return 0;
}
