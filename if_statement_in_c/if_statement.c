#include<stdio.h>
int age = 0;
int main()
{
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age <= 17)
    {
        printf("Sorry your not a major :(");
    }
    else{
        printf("hey you are a major :)\n\n\n");
    }
}