#include <stdio.h>
#include <signal.h>
int c=0;
void k(){
	c++;
	int i;
	for(i=0;i<c;i++){
		printf("X");
	}
	printf("\n");
}
int main(){
	signal(SIGINT,k);
	for(;;);
	return 0;
}