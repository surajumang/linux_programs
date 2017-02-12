#include<stdio.h>
#include<unistd.h>
/* It will demonstrate the fork() system call

*/

int main()
{

int val=10;
pid_t pid=fork();

if(pid<0){
  fprintf(stderr,"fork failed\n");
  return -1;
}
else if(pid==0){//child process
  val+=5;
  return 0;
}
else{ //the parent process
  printf("val here is : %d",val);
  printf("child pid is : %d \n",pid);
  printf("parent pid is : %d\n ",getpid());
  wait(NULL); //wait for child to complete
  return 0;
}



}
