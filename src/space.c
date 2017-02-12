#include<stdio.h>
#include<unistd.h>
/* this file demonstrate the available space for parent
and child is different
*/
int value=100;

int main()
{
  pid_t pid=fork();
  if(pid<0){
    fprintf(stderr, "fork failed\n" );
  }
  else if(pid==0){
    value=120;
    printf("child value is : %d",value);
    return 0;
  }
  else{
    printf("parent value is : %d",value);
    wait(NULL);

  }


}
