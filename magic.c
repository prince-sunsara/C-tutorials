/*#include<stdio.h>
#include<conio.h>

int main()
{
    int size=3;
    int matrix [3][3];
    int row,column=0;
    int sum,sum1,sum2;
    int k=0;

    printf("\n enter matrix : \n");
    for ( row = 0; row < size; row++)
    {
        for ( column = 0; column < size; column++)
        {
            scanf("%d",&matrix[row][column]);
        }    
    }

    printf("\n enter matrix is : \n");
    for ( row = 0; row < size; row++)
    {
        printf("\n");
        for ( column = 0; column < size; column++)
        {
            printf("\t %d",matrix[row][column]);
        }
    }
    
    sum=0;
    for ( row = 0; row < size; row++)
    {
        for ( column = 0; column < size; column++)
        {
            if (row==column)
            {
                sum=sum+matrix[row][column];
            }
        }
    }

    for ( row = 0; row < size; row++)
    {
        sum1=0;
        for ( column = 0; column < size; column++)
        {
            sum1=sum1+matrix[row][column];
        }
        if (sum==sum1)
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }

    for ( row = 0; row < size; row++)
    {
        sum2=0;
        for ( column = 0; column < size; column++)
        {
            sum2=sum2+matrix[row][column];
        }
        if (sum==sum2)
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }

    if (k=1)
    {
        printf("\n magic matrix. \n");
    }
    else
    {
        printf("\n not magic matrix. \n");
    }
    
    return 0;
} 
*/

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int size=3;
//     int matrix [3][3];
//     int row,column=0;
//     int sum,sum1,sum2;
//     int k=0;

//     printf("\n enter matrix : \n");
//     for ( row = 0; row < size; row++)
//     {
//         for ( column = 0; column < size; column++)
//         {
//          scanf("%d",&matrix[row][column]);
//         }
//     }

//     printf("\n enter matrix is: \n");
//     for ( row = 0; row < size; row++)
//     {
//         printf("\n");
//         for ( column = 0; column < size; column++)
//         {
//             printf("\t %d",matrix[row][column]);
//         }
        
//     }

//     sum=0;
//     for ( row = 0; row < size; row++)
//     {
//         for ( column = 0; column < size; column++)
//         {
//             if(row==column)
//             sum=sum + matrix[row][column];
//         }
        
//     }

//     for ( row = 0; row < size; row++)
//     {
//         sum1;
//         for ( column = 0; column < size; column++)
//         {
//             sum1=sum1+matrix[row][column];
//         }
//         if (sum==sum1)
//         {
//             k=1;
//         }
//         else
//         {
//             k=0;
//             break;
//         }
//     }

//     for ( row = 0; row < size; row++)
//     {
//         sum2;
//         for ( column = 0; column < size; column++)
//         {
//             sum2=sum2+matrix[row][column];
//         }
//         if (sum==sum2)
//         {
//             k=1;
//         }
//         else
//         {
//             k=0;
//             break;
//         }
//     }

//     if (k=1)
//     {
//         printf("\n magic matrix. \n");
//     }
//     else
//     {
//         printf("\n not magic matrix. \n");
//     }
//     return 0;
// } 