#include<stdio.h>
#include "Extern_variable.h"
int main()
{
    printf("%d\n",ext_var);
    printf("%f\n",ext_float);
    printf("%s\n\n\n",ext_user_name);

    ext_var = 100;
    
    printf("After altering EXTERN VARIABLES...\n\n");
    
    printf("%d\n",ext_var);
    printf("%f\n",ext_float);
    printf("%s\n\n\njesus\fjerome\fmoses \n\n  ",ext_user_name);
}
