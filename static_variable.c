#include<stdio.h>
int fun()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    for(int i = 0;i<=17;i++)
        {
            printf("%d \n", fun());
        }

}