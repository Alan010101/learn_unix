#include "apue.h"

int main(void){
	printf("hello world from process id %ld, ppid is %ld\n",(long)getpid(),(long)getppid());
	exit(0);

}

