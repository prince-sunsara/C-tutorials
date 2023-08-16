#include<stdio.h>

//No Argument and No Return Value 
    /* 
    
    void main()
    { 
    	int a; 
    	printf("Enter how many stars(*) you want : \n"); 
    	scanf("%d", &a ); 
    	for (int i = 0; i<a; i++) 
    	{
    		printf("*"); 
    	} 
    	
    	
    } 
    */



// Without arguments and with return value :
    /* int takenumber()

    {
    	int i;
    	printf("enter a number : \n");
    	scanf("%d",&i);
    	return i;
    }
    int main ()
    {
    	int a,b,c;
    	c=takenumber();
    	printf("the number enterd is %d \n",c);
    	return 0;
    }
	*/



// With argument and without return value

    /* void printstar(int n)
    {
    	for (int i = 0; i < n; i++)
    	{
    		printf("%c", '*');
    	}
    	
    	
    }
    int main ()
    {    
    	printstar(7);
    	
    }
    */



// with argument  and with return value

    /* int multiplication (int a, int b)
    
    {
    	int mul;
    	mul = a*b;
    	return mul;
    }
    int main ()
    {
    	int a,b,mul;
    	printf("enter number a : \n");
    	scanf("%d",&a);
    	printf("enter number b : \n");
    	scanf("%d",&b);
    
    	mul = multiplication(a,b);
    	printf("\n multiplication of %d and %d is = %d \n",a,b,mul);
    	return 0;
    }
    */
   