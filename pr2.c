#include<stdio.h>
#include<string.h>
#include<ctype.h>

void copy(char *, char *);
void con(char *, char *, char *);
int len(char *);
void rev(char *);
int comp(char *, char *);

void main()
{
    char a[20],b[30],c[50],choice;
    int d;

    printf("\n copy=a \nconnect=b \nlenth=c \nrev=d \ncompare=e");
    printf("\n enter your choice :- \n");
    choice = getchar();

    switch (choice)
    {
    case 'a':
        printf("\n enter your string : \n");
        scanf("\n %s",a);
        copy(a,b);
        printf("\n copied string is : \n");
        puts(b);
        break;
    case 'b':
        printf("\n enter your first string: \n");
        scanf("\n %s",a);
        printf("\n enter your second string: \n");
        scanf("\n %s",b);
        con(a,b,c);
        printf ("\n connected string is: \n");
        puts(c);
        break;    
    case 'c':
        printf("\n enter your strting: \n");
        scanf("\n %s",a);
        printf("\n len is = %d",len(a));
        break;
    case 'd':
        printf("\n enter your string: \n");
        scanf("\n %s",a);
        rev(a);
        break;
    case 'e':
        char *s1,*s2;
        printf("\n enter s1 \n");
        scanf("\n %s",s1);
        printf("\n enter s2 \n");
        scanf("\n %s",s2);
        int d=comp(s1,s2);
        if (d==0)
        {
            printf("\n\n string are same. ");   
        }
        else
        {
            printf("\n\n string are not same. ");
        }
        break;
               
    default:
    printf("\n invalide choice. ");
        break;
    }
getchar;
}
void copy (char *s1, char *s2)
  {
      while (*s1)
      {
          *s2++=*s1++;
      }
      *s2='\0';
  }
void con (char *s1,char *s2, char *rs)
  {
      while (*s1)
      {
          *rs=*s1++;
      }
      while (*s2)
      {
          *rs=*s2++;
      }
      *rs='\0';
  }  
int len (char *s1)
  {
      int lenth=0;
        while (*s1++)
        {
            lenth++;
        }
        return(lenth);
  }  
void rev (char *s1)
  {
      int i,j,cnt;
       for ( i = 0; s1[i]='\0'; i++)
       {
           cnt=strlen(s1);      
       }
       for ( j = 0; j >=0; j--)
       {
           putchar (s1[j]);
       }
      return ; 
  }
int comp (char *s1, char *s2)
  {
      while (*s1==*s2)
      {
          if(*s1=='\0'&& *s2=='\0')
          return (0);
          s1++;
          s2++;
      }
      return (*s1-*s2);
}