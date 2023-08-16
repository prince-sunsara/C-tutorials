// #include<stdio.h>

// int main()
// {
//     int n,k=0;
//     printf("enter the number to check prime : \n");
//     scanf("%d",&n);
//     for (int i=2;i<n;i++)
//      {
//         if (n%i==0)
//             {
//                 printf("number is not prime.");
//                 k=1;
//                 break;
//             }
//    }
//    if (k==0)
//    printf("number is prime.");
//    return 0;
// }


    // #include<stdio.h>
    // int prime (int);
    // int main ()
    // {
    //     int a,b;
    //     printf("enter the number \n");
    //     scanf("%d",&a);
    //     b=prime(a);
    //     if( b==0)
    //     printf("prime");
    //     else
    //     printf("not prime");
    //     return 0;
    // }

    // int prime (int a)
    // {
    //     int f=0;
    //     for (int i=2;i<a;i++)
    //         {
    //             if (a%i==0)
    //                 {
    //                     f=1;
    //                     break;
    //                 }
    //             else
    //             continue;
    //         }
    //     if (f==1)
    //         {
    //         return 1;
    //         }
    //     else
    //     return 0;
    // }


// #include<stdio.h>
// void prime(int a,int b)
// {
//     int f;
//     for (int i = a+1; i < b; i++)
//     {
//         f=0;
//         for (int j =2; j < i; j++)
//         {
//             if (i%j==0)
//             {
//                 f=1;
//                 break;
//             }
//         }
//         if (f==0)
//         {
//             printf("answer is = %d\n",i);
//         }
//     }
// }
// int main()
// {
//     int a,b;
//     printf("Enter the value of a and b:\n");
//     scanf("%d\n%d",&a,&b);
//     prime(a,b);
//     return 0;
// }


    // #include<stdio.h>
    // void exchange(int [],int &);
    // int main()
    // {
    //     int n,a[50];
    //     printf("How many element in array:\n");
    //     scanf("%d",&n);
    //     printf("Enter array element:\n");
    //     for (int i=0;i<n;i++)
    //     {
    //         scanf("%d",&a[i]);
    //     }
    //     exchange(a,n);
    //     printf("Shorted array is as follow :\n");
    //     for(int i=0;i<n;i++)
    //     {
    //         printf("%d\n",a[i]);
    //     }
    //     return 0;
    // }
    // void exchange(int a[],int &n)
    // {
    //     int temp;
    //     for (int i=0;i<n;i++)
    //         {
    //             for (int j=i+1;j<n;j++)
    //                 {
    //                     if(a[i]>a[j])
    //                         {
    //                             temp=a[i];
    //                             a[i]=a[j];
    //                             a[j]=temp;
    //                         }
    //                 }
    //         }
    // }



// #include<stdio.h>
// int first(int a,int b)
// {
//     int ans=1;
//     for (int i = 1; i <=b; i++)
//     {
//         ans = ans*a;
//     }
//     return ans;
// }
// double second(double x,double y)
// {
//     double ans=1.0;
//     for (double i = 1; i <=y; i++)
//     {
//         ans = ans*x;
//     }
//     return ans;
// }
// int main()
// {
//     int a,b;
//     float x,y;
//     printf("Enter the value of a and b\n");
//     scanf("%d\n%d",&a,&b);
//     printf("the answer is=%d\n",first(a,b));

//     printf("Enter the value of x and b\n");
//     scanf("%f\n%f",&x,&y);
//     printf("the answer is=%.3f\n",second(x,y));

//     return 0;
// }


    // #include<stdio.h>
    // class fruit
    //     {
    //         int price;
    //         char s[20];
    //         char s1[20];
    //         public:
    //         void inputdata();
    //         void displaydata();
    //     }a;

    // void fruit::inputdata()
    //     {
    //         for (int i = 0; i < 5; i++)
    //             {
    //                 printf("Enter Name of Fruit %d:\n",i+1);
    //                 scanf("%s",s);
    //                 printf("Enter The Color of fruit %d:\n",i+1);
    //                 scanf("%s",s1);
    //                 printf("enter the Price of fruit %d per kg:\n",i+1);
    //                 scanf("%d",&price);
    //                 printf("\n");
    //             }
    //     }

    // void fruit::displaydata()
    //     {
    //         for(int i=0;i<5;i++)
    //         {
    //             printf("Name of Fruit %d :%s\n",i+1,s);
    //             printf("Color Of Fruit %d :%s\n",i+1,s1);
    //             printf("Price of fruit %d per kg :%d\n",i+1,price);
    //             printf("\n");
    //         }
    //     }

    // int main()
    //     {
    //         a.inputdata();
    //         a.displaydata();
    //         return 0;
    //     }

