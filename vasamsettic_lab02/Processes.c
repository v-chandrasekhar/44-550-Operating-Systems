#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int x = 10; /* x is a global variable*/
void add();
int main()
{

   int parent_pid = 0, child_pid = 0;
   // current PID using the getpid function
   printf("the current pid is %d\n", getpid());
   // storing parent pid
   parent_pid = getpid();
   // creating child process
    pid_t pid = fork();

   if(pid == 0) {
    // Fork, storing the child's PID
    child_pid = getpid();
    x += rand()%100;

    // printing parent pid and it's child's PID
    printf("this is the child: my pid is %d and My parent pid is %d\nThe global variable value is %d \n", getpid(), parent_pid, x);
    return 0;
   }
   else
   {
    x += rand()%100;
    // printing parent pid and it's child's PID
    printf("this is the parent: my pid is %d and I have a child with pid %d\nThe global variable value is %d \n", getpid(), pid, x);
    return 0;
   }

}
