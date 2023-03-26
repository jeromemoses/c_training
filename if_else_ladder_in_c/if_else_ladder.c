#include<stdio.h>

int choice = 0;
int loop = 1;

int main()
{
    while(loop == 1)
    {   
        printf("\n\nEnter the one of the following values \n1\n2\n3\n4\n5 \nchoice: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("\n--->we are in the section 1 :) ");
        }
        else if(choice == 2)
        {
            printf("\n--->we are in the section 2 :) ");
        }
        else if(choice == 3)
        {
            printf("\n--->we are in the section 3 :) ");
        }
        else if(choice == 4)
        {  
            printf("\n--->we are in the section 4 :)");
        }
        else if(choice == 5)
        {
            printf("\n--->we are in the section 5 :)");
        }
        printf("\ndo you want to enter again: 1=Yes , 0=No--->");
        scanf("%d",&loop);
    }
    
}