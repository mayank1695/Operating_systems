#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,p;
	char c;
	fd=open("exp",O_RDONLY);
	p=fork();
	if(p==0)
		lseek(fd,4,SEEK_SET);
	else{
		sleep(2);
		read(fd,&c,1);
		printf("%c\n",c);
	}
	return 0;
}