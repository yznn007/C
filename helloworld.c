#include <stdlib.h>  
#include <stdio.h>
 
int a = 1;

int function ()
{
    int a = 2;
    printf("%d",a);
    printf("\n");
    return a;
}

int main(void)
{
    
    function();
    printf("%d",a);
    return 0;
}