#include<stdio.h>
#include<string.h>
// void main()
// {
// printf("%c",3["Bhoopendra"]);
// }

// void main ()
// {
// char *str1="United";
// char *str2="United";
// char *str3;
// str3=strcat(str1,str2);
// printf("\n%s",str3);
// }

void main()
{
int a[2][2][2] = { {10,2,3,4}, {5,6,7,8} };
int *p,*q;
p=&a[2][2][2];
*q=***a;
printf("%d----%d",*p,*q);
}