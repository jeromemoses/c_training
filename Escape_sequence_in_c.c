#include<stdio.h>

char name_1[20];
char name_2[20];
char name_3[20];

int main()
{   
    // \f feed form
    printf("Enter the first string: ");
    scanf("%s",&name_1);
    printf("Enter the second name: ");
    scanf("%s",&name_2);
    printf("Enter the third name: ");
    scanf("%s",&name_3);
    printf("\n%s\f%s\f%s\r\n\nend of the code :) \n\n\n",name_1,name_2,name_3);

    // \v \t vertical and horizontal tab
}
