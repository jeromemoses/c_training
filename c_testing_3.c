#include<stdio.h>
int loop_threashold = 0;

int main()
{
    printf("starting loops\n");
    while(loop_threashold <= 100)
    {
        printf("hello jerome this is loop no: %d\n",loop_threashold);
        loop_threashold++;
    }
    
}