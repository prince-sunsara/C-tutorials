

/*
break statement
     &
continue statement
*/

#include<stdio.h>

int main()
{
    printf("hellow my world \n");

    int i,age;
    for ( i = 0; i < 10 ; i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d", &age);
        //if (age>10)
        //{
        //    break;  
        //}
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statement\n");
        printf("we have not come accross any continue statement\n");
        printf("we have not come accross any continue statement\n");
        printf("we have not come accross any continue statement\n");
        printf("harry is a good boy !\n");
        
        
    }
    
    return 0;
}
