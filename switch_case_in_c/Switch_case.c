#include<stdio.h>
int stage;

int main()
{
    switch_function:
    printf("Enter the stage of your airquality: \nstage-1\tstage-2\tstage-3\tstage-4\tstage-5\n#Your stage--->");
    scanf("%d",&stage);
    switch(stage)
    {
        case 1:
        printf("\ngood\n\n\n");
        break;

        case 2:
        printf("\nsatisfactory\n\n\n");
        break;

        case 3:
        printf("\npoor\n\n\n");
        break;

        case 4:
        printf("\nVery poor\n\n\n");
        break;

        case 5:
        printf("\nextremely bad\n\n\n");
        break;

        default:
        goto switch_function;
    }        
    
}