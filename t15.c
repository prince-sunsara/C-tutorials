#include<stdio.h>

int main()
{
    int i=0 , j=0 ;
    for ( ; j<5,i<5 ; i++,j++)
    {
        printf("%d %d\n",i,j);

    }
    return 0;
}

/* NOT:

   i=0, j=0; hai udhr i,j; likh kr expression 1 me i=0,j=0 likh skte he 
   for example :
             int i, j ;
             for(i=0,j=0 ;  i<5,j<10; i++,j++)

   expression 2 me jo last vaali condition hogee use hi check krne me aayega 
   baakiyo ko as a statement lene me aayega.

*/
