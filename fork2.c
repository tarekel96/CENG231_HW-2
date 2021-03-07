#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	pid_t pid;
	char* message;
	int n;
	printf("fork program starting...\n");
  
	pid = fork();
  
	switch(pid){
		case -1:
			perror("fork failed");
			exit(1);
		case 0:
			message = "This is the child";
			puts(message);
			n = 5;
			exit(42);
			break;
		default:
			message = "This is the parent";
			puts(message);
			while(1)
				sleep(1000);
			break;
	}
	puts("Finished switch statement");
}
