#include <stdio.h>
int main(){
	printf("%d %d\n",getpid(),getppid());
	int p=getpid();
	fork();
	if(p==getppid()){
		sleep(1);
	}
	printf("%d %d\n",getpid(),getppid());
	sleep(2);
	return 0;
}