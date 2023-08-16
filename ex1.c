#include<stdio.h>

int main()
{
    int a;
    /*
    a = number of passing subject
    2 = science and maths
    1 = science/maths
    */

    printf ("enter a number: ");
    scanf ("%d", &a );
    printf("you have enterd %d as a passing subject\n",a);
    if (a>1)
    {
        printf ("you won 45 as a gift");
    }
    else
    {
        printf("you won 15 as a gift");
    }
    
    
    return 0;
}