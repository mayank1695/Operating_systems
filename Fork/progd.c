#include <stdio.h>
#include <unistd.h>
int main(){
	int i,p=getpid();
	fork();
	if(p==getpid())
		printf("X");
	if(p==getppid())
		printf("Y");
	//sleep(1);
	return 0;
}