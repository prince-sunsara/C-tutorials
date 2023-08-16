//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<math.h>

//int main()
//{
//Q1: sum of two number
// int a,b,c;
// printf("enter the first value of a and b:\n");
// scanf("%d%d",&a,&b);
// c=a+b;
// printf("sum is =%d",c);
// return 0;
//Q2: the area of ractangle
// int lenth=3,breadth=4;
// int area=lenth*breadth;
// printf("the area of ractangle is %d",area);
// return 0;
//Q3: area of ractangle by client
// int lenth,breadth;
// printf("enter the lenth of ractangle \n");
// scanf("%d",&lenth);
// printf("enter the breadth of ractangle \n");
// scanf("%d",&breadth);
// printf("the area of ractangle is %d",lenth*breadth);
// return 0;
//Q4: area of circle and vollume of gas cylinder
// int radius =3;
// float pi =3.14;
// printf("the area of circle is %f", pi*radius*radius);
// int height=3;
// printf("\nvolume of cylinder is %f",pi*radius*radius*height);
// return 0;
//Q5: temperature convertion
// float celsius =37,far;
// far=(celsius*9/5)+32;
// printf("the value of this celsius temperature in fahrenheit is %f",far);
// return 0;
//Q6: find simpelinterest
// int principal=200,rate=4,years=1;
// int simpleinterest=(principal * rate * years)/100;
// printf("the value of simple interest is %d",simpleinterest);
// return 0;

/* 
type of declaration
*/

// int a = 4; // Type declaration instruction
// int a = 4, b, c; // Type declaration instruction
// b = c = a;

// printf("The value of a is %d\n", a);
// printf("The value of b is %d\n", b);
// printf("The value of c is %d\n", c);

// float a = 1.1;
// float b = a + 8.9;
// printf("The value of b is %f\n", b);
// return 0;

// int a = 4;
// int b = 8;
// printf("The value of a + b is: %d\n", a + b);
// printf("The value of a - b is: %d\n", a - b);
// printf("The value of a * b is: %d\n", a * b);
// printf("The value of a / b is: %d\n", a / b);

// int z;
// z = b * a; // legal
// //b * a = z; // Illegal
// printf("The value of z is: %d\n", z);

// printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
// printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
// printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

/*
No operator is assumed to be present
*/
//printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will not return 20/ Wrong!!
//printf("The value of 4 * 5 is %d\n", (4)*(5));

/*
There is no operator to perform exponentiation in C
*/
//printf("The value of 4 ^ 5 is %d\n", 4^5); // -> Will not produce 4 to the power 5
//printf("The value of 2 to the power 5 is %f\n", pow(2, 5));

// printf("The value of 6 + 5 is %d\n", 6 + 5);
// printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
// printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
// printf("The value of 5/2 is %d\n", 5/2);
// printf("The value of 3.0/9 is %f\n", 3.0 / 9);
// return 0;

/*
operator precidence
*/
// int x = 2;
// int y = 3;
// printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y);
// printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x);
// // solution given by computer-->
// // 8*3 /3*x = 24/6 will give wrong answer
// // 24/3*2
// // 8*2
// // 16
// return 0;

/*
practice set
*/

//Q1:-
// int a;
// b=a;
// printf("the value of a=%d",a);
// return 0;

// int v=3^3;
// printf("%d",v);
// return 0;

// char dt='21 dec 2020';
// printf("%s",dt);
// return 0;
//Q3. Write a program to determine whether a number is divisible by 97 or not
// int num;
// printf("Enter the number\n");
// scanf("%d", &num);
// printf("Divisibility test returns: %d\n", num%97);
// return 0;
//Q4. Step by step evaluation of 3*x/y-z+k
// int x = 2, y=3, z=3, k=1;
// int result = 3 * x / y - z + k;
// // 6/3 - 3 + 1
// // 2 - 3 + 1
// // 2 - 3 + 1
// // 0
// printf("The value of result is %d", result);
// return 0;

/*
conditional instructiom
*/

// checl the number is even or odd?
// int a,b;
// printf("enter the number :\n");
// scanf("%d",&a);
// if (a%2==0)
// {
//     printf("the function is even.");
// }
// else
// {
//     printf("the function is odd.");
// }
// return 0;
/* 
if else
*/
// int age;
// printf("Enter your age\n");
// scanf("%d", &age);
// // if(age!=90){
// if(age>=90){
//     printf("You are above 90, you cannot drive\n");
// }
// else{
//     printf("You can drive\n");
// }
// if(age==50){
//     printf("Half Century\n");
// }
// return 0;
/*
else if ledder
*/
// int num;
// printf("Enter your number\n");
// scanf("%d", &num);
// if(num==1)
// {
//     printf("Your number is 1\n");
// }
// else if (num == 2)
// {
//     printf("Your number is 2\n");
// }
// else if (num == 3)
// {
//     printf("Your number is 3\n");
// }
// else
// {
//     printf("Its not 1, 2 or 3!\n");
// }
// return 0;
/*
one liner
*/
// int a;
// printf("Enter a\n");
// scanf("%d", &a);
// (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
//  return 0;

/*
switch case
*/
// int rating;
// printf("Enter your rating (1-5)\n");
// scanf("%d", &rating);
// switch(rating)
// {
//     case 1:
//         printf("Your rating is 1\n");
//         break;
//     case 2:
//         printf("Your rating is 2\n");
//         break;
//     case 3:
//         printf("Your rating is 3\n");
//         break;
//     case 4:
//         printf("Your rating is 4\n");
//         break;
//     case 5:
//         printf("Your rating is 5\n");
//         break;
//     default :
//         printf("Invalid rating!\n");
//         break;
// }
// return 0;

// writea program to find a grade of student given his marks based on bellow:
// 90-100-->A , 80-90-->B , 70-80-->C , 60-70-->D , marks<60-->E.
// int marks;
// printf("enter the marks you get:\n");
// scanf("%d",&marks);
// if (marks>90 && marks<=100)
// {
//     printf("your grade is= A\n");
// }
// else if (marks>80 && marks<=90)
// {
//     printf("your grade is= B\n");
// }
// else if (marks>70 && marks<=80)
// {
//     printf("your grade is= C\n");
// }
// else if (marks>60 && marks <=70)
// {
//     printf("your grade is= D\n");
// }
// else
// {
//     printf("your grade is= E\n");
// }
// return 0;

//Q:2

// int physics, chemistry, maths;
// float total;
// printf("Enter Physics Marks\n");
// scanf("%d", &physics);

// printf("Enter Chemistry Marks\n");
// scanf("%d", &chemistry);

// printf("Enter Maths Marks\n");
// scanf("%d", &maths);
// total = (physics + maths + chemistry)/3;
// if((total<40) || physics<33 || maths<33 || chemistry<33){
//     printf("Your total percentage is %f and you are fail\n", total);
// }
// else{
//     printf("Your total percentage is %f and you are pass\n", total);
// }
// return 0;

//Q:3

// float tax=0,income;
// printf("enter your income:\n");
// scanf("%f",&income);
// if (income>=250000 && income<=500000)
// {
//     tax=tax + 0.05 * (income-250000);
// }
// if(income>500000 && income<=1000000)
// {
//     tax=tax + 0.2 * (income-500000);
// }
// if (income>1000000)
// {
//     tax=tax + 0.3 *(income-1000000);
// }
// printf("your net income tax paid by 26th of this month is %f\n",tax);
// return 0;

//Q:6

// int a,b,c,d;
// printf("enter the value of a and b and c and d:\n");
// scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
// if (a>b&&a>c&&a>d)
// {
//     printf("the gatest number is %d",a);
// }
// else if (b>a&&b>c&&b>d)
// {
//     printf("the gratest number is %d",b);
// }
// else if (c>a&&c>b&&c>d)
// {
//     printf("the gratest number is %d",c);
// }
// else
// {
//     printf("the gratest number is %d",d);
// }
// return 0;

//Q:4 leap year or not.

// int year;
// printf("enter the year :\n");
// scanf("%d",&year);
// if ((year%4==0) && (year%400==0) || (year%100!=0))
// {
//     printf("the year is leap year.");
// }
// else
// {
//     printf("the year is not leap year.");
// }
// return 0;

//Q:5 lowercse or not.

// // 97-122 = a-z ASCII Values
// char ch;
// printf("Enter the character\n");
// scanf("%c", &ch);
// if(ch<=122 && ch>=97){
//     printf("It is lowercase");
// }
// else{
//     printf("It is not lowercase");
// }
// return 0;

/*
loop control instruction
*/

// printf("Hello ");
// printf("world\n");
// int a = 1;
// // Loops are used to repeat similar part of a code snippet efficiently
// // (
// // printf("%d\n", a);
// // a++;) =---> 100 times
// return 0;

// while loop:
// int a;
// scanf("%d", &a);
// while(a<=10){
// //     a = 11;
// // while(a>10){ ---> These two lines will lead to an infinite loop
//     printf("%d\n", a);
//     a++;
// }
// return 0;

// quiz: write a program to display value of 10 to 20 by using while loop.

// int i;
// i=10;
// while (i<=20)
// {
//     printf("%d\n",i);
//     i++; //--> i++ = i + 1;
// }
// return 0;

// int i = 5;
// printf("The value after i++ is %d\n", ++i);
// i++; // ---> Pehle print fir increment
// ++i; // ---> Pehle increment fir print kare
// printf("The value of i is %d\n", i);

// i+=10; //--> Increments i by 10
// printf("The value of i is %d\n", i);
// return 0;

// do-while loop:
// int i = 5;
// do{
//     printf("The value of i is %d\n", i);
//     i++;
// }while(i <10);
// return 0;

// quiz: write a program to display natural number using do-while loop.

// int i,n;
// i=1;
// printf("enter the last number:\n");
// scanf("%d",&n);
// do
// {
//     printf("the number is %d\n",i);
//     i++;
// }while(i<=n);
// return 0;

//for loop:
// for (int a = 0; a < 10; a++)
// {
//     printf("the value  of a is %d\n",a+1);
// }
// return 0;

//quiz: write a program to display natural number using for loop.
// int n;
// printf("enter the last number :\n");
// scanf("%d",&n);
// for (int i = 0; i < n; i++)
// {
//     printf("n=%d\n",i+1);
// }
// return 0;

//quiz:write a program to print n natural number in reverse order.
// int n;
// printf("Enter the value of n \n");
// scanf("%d", &n);

// for(int i=n; i ; i--){
//     printf("The value of i is %d\n", i);
// }
// return 0;

//break:
// int i = 0;
// do{
//     printf("The value of i is %d\n", i);
//     if(i==4){
//         break;
//     }
//     i++;
// }while(i<10);
// return 0;

//continue:
// int skip=5, i=0;
// while(i<10)
// {
//     i++;
//     if(i!=skip)
//     {
//         continue;
//     }
//     else
//     {
//         printf("%d\n", i);
//     }
// }
// return 0;

// practice set:
//Q:1 multiplicatin table.
// int i,n,range;
// printf("Enter an integer:\n");
// scanf("%d",&n);
// printf("enter the range:\n");
// scanf("%d",&range);
// for ( i ; i <= range; i++)
// {
//     printf("%d x %d = %d\n",n,i,n*i);
// }
// return 0;

// reverse multiplicatin table.
// printf("****Multiplication table of 10****\n\n");
// for(int i=10;i;i--){
//     printf("10 X %d = %d\n", i, 10*i);
// }
// return 0;

//Q:6 sum of natural number.
// int i,sum=0,n;// -->for loop.
// printf("enter the integer:\n");
// scanf("%d",&n);
// for ( i = 0; i <= n; i++){
//     sum = sum + i;
//     //sum+=i;
// }
// printf("the sum of 1 to n is %d",sum);
// return 0;

// int i=1, sum=0, n; //--> while loop.
// printf("enter the integer:\n");
// scanf("%d",&n);
// while( i<=n){
//     sum +=i;
//     i++;
// }
// printf("The value of sum(1 to n) is %d", sum);
// return 0;

// int i=1, sum=0, n; //--> while loop.
// printf("enter the integer:\n");
// scanf("%d",&n);
// do
// {
//     sum+=i;
//     i++;
// } while (i<=n);

// printf("The value of sum(1 to n) is %d", sum);
// return 0;

//Q8: find a factorial.
// int i=0,n,factorial=1;
// printf("enter the value of n:\n");
// scanf("%d",&n);
// for ( i = 1; i <= n; i++)
// {
//     factorial*=i;
// }
// printf("the factorial of the number you choose is %d",factorial);
// return 0;

//Q9: repiet 8.
//    int i=1,n;
//    printf("how many time you want to repiet :\n");
//    scanf("%d",&n);
//    while (i<=n)
//    {
//        printf("this is 8\n");
//        i++;
//    }
//    return 0;

//Q10: check the given number is prime or not.
//Q11: apply all loop in q10.
//  // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
// // Disclaimer: This is not the best method to solve this problem

// int i=2,n,prime=1;
// printf("enter the number you want to check:\n");
// scanf("%d",&n);

// for ( i = 2; i < n; i++) // --> for loop.
//     if (n%i==0)
//     {
//         prime=0;
//         break;
//     }

// while (i<n) // --> while loop.
// {
//     if (n%i==0)
//     {
//         prime=0;
//         break;
//     }
// }

// do // --> do-while loop.
// {
//     if (n%i==0)
//     {
//         prime=0;
//         break;
//
// } while (i<n);

// if (prime==0)
// {
//     printf("this is not a prime number.");
// }
// else
// {
//     printf("this is prime number.");
// }
// return 0;

/*
game : 1
project 1:
*/

//find random number.
// int number;
// srand(time(0));
// number= rand()%100 + 1;
// printf("the number is %d",number);
// return 0;

// guess the number game.
// int number,guass, nguasses=1;
// srand(time(0));
// number = rand()%100 + 1;

// do
// {
//     printf("guass the number between 1 to 100\n");
//     scanf("%d",&guass);
//     if (guass>number)
//     {
//         printf("lower number please!!\n");
//     }
//     else if (guass<number)
//     {
//         printf("higher number please!!\n");
//     }
//     else
//     {
//         printf("the number you guassed in %d attempts\n",nguasses);
//     }
//     nguasses++;
// } while (guass!=number);
// return 0;
//}

/*
function :
*/

// #include<stdio.h>
// void display(); // Function prototype

// int main(){
//     int a;
//     printf("Initializing display function\n");
//     display(); // Function Call
//     printf("Display function finished its work\n");
//     return 0;
// }

// // Function definition
// void display(){
//     printf("This is display\n");
// }

//quick quiz:
// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodnight();
// int main (){
//     printf("the function is working:\n");
//     goodmorning();
//     goodafternoon();
//     goodnight();
//     printf("it's over.");
//     return 0;
// }
// void goodmorning()
// {
//     printf("good morning!!\n");
// }
// void goodafternoon()
// {
//     printf("good afternoon.!!\n");
// }
// void goodnight()
// {
//     printf("good night.!!\n");
// }

//function inside function.
// #include<stdio.h>
// void goodMorning();
// void goodAfternoon();
// void goodNight();
// int main(){
//     goodMorning();
//     return 0;
// }
// void goodMorning(){
//     printf("Good Morning Harry\n");
//     goodAfternoon();
// }
// void goodAfternoon(){
//     printf("Good Afternoon Harry\n");
//     goodNight();
// }
// void goodNight(){
//     printf("Good Night Harry\n");
// }

// sum,sum,div,mul of two value:
// #include<stdio.h>

// int sum(int a, int b); //--> function prototype declaration
// int sub(int a, int b); //--> function prototype declaration
// int mul(int a, int b); //--> function prototype declaration
// int div(int a, int b); //--> function prototype declaration

// int main ()
// {
//     int a,b,answer;
//     printf("Enter the value of a and b:\n");
//     scanf("%d\n%d",&a,&b);

//     answer=sum(a,b);  //--> function call
//     printf("the answer of sum= %d\n",answer);

//     answer=sub(a,b);  //--> function call
//     printf("the answer of sub= %d\n",answer);

//     answer=mul(a,b);  //--> function call
//     printf("the answer of mul= %d\n",answer);

//     answer=div(a,b);  //--> function call
//     printf("the answer of div= %d\n",answer);

//     return 0;
// }

// int sum(int a, int b)
// {
//     int answer;
//     answer=a+b;
//     return answer;
// }

// int sub(int a,int b)
// {
//     int answer;
//     answer=a-b;
//     return answer;
// }

// int mul(int a, int b)
// {
//     int answer;
//     answer=a*b;
//     return answer;
// }

// int div(int a, int b)
// {
//     int answer;
//     answer=a/b;
//     return answer;
// }

// just for knowladge
// #include<stdio.h>
// void change(int a);

// int main()
// {
//     int b = 344;
//     printf("The value of b before change is %d\n", b);
//     change(b);
//     printf("The value of b after change is %d\n", b);
//     return 0;
// }

// void change(int b){
//     b = 77;
// }

// power of any integer:
// #include<stdio.h>
// #include<math.h>

// int main(){
//     int side;
//     printf("Enter the value of side\n");
//     scanf("%d", &side);
//     printf("The value of area is %f", pow(side,2));

//     return 0;
// }

/*
recursion
*/

//factorial:
// #include<stdio.h>
// int factorial(int x);

// int main(){
//     int a = 5;
//     printf("The value of factorial %d is %d", a, factorial(a));
//     return 0;
// }

// int factorial(int x){
//     printf("Calling factorial(%d)\n", x);
//     if (x==1 || x==0){
//         return 1;
//     }
//     else{
//         return x * factorial(x-1);
//     }
// }

//Q1: sum of three num.
// #include<stdio.h>
// float average(int a,  int b, int c);
// int main()
// {
//     int a,b,c;
//     float answer;

//     printf("enter the number of a:\n");
//     scanf("%d",&a);

//     printf("enter the number of b:\n");
//     scanf("%d",&b);

//     printf("enter the number of c:\n");
//     scanf("%d",&c);

//     answer = average(a,b,c);
//     printf("the value of average is %f\n",answer);

//     return 0;
// }
// float average(int a,  int b, int c)
// {
//     float d;
//     d = (float)(a+b+c)/3;
//     return d;
// }

//Q2: celsius to fahrenheit:
// #include<stdio.h>

// float con(float a);
// int main()
// {
//     float a;
//     printf("enter the value of a:\n");
//     scanf("%f",&a);
//     printf("the answer is %f\n",con(a));
//     return 0;
// }
// float con(float a)
// {
//     float f;
//     f = a * 9/5 + 32 ;
//     return f;
// }

//Q3: calculate a force:
// #include<stdio.h>

// float force(float mass);
// int main ()
// {
//     float mass;
//     printf("Enter the value of mass in kgs:\n");
//     scanf("%f",&mass);
//     printf("The value of force in Newton is=%.2f",force(mass));//--> %.2f emo .2 e answer pa6l ketla 0 lagava e batave 6e.
//     return 0;
// }
// float force(float mass)
// {
//     float result;
//     result = mass * 9.8;
//     return result;
// }

//Q4: calculate nth element of fibonacci series by recursion.
// #include<stdio.h>
// int siri(int n);
// int main ()
// {
//     int n;
//     printf("enter the element :\n");
//     scanf("%d",&n);
//     printf("The fibonacci series is:\n");
//     printf("%d %d ",0,1);
//     siri(n-2);//n-2 because 2 numbers are already printed
//     return 0;
// }
// int siri(int n)
// {
//     static int n1=0,n2=1,n3;
//     if (n>0)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         printf("%d ",n3);
//         siri(n-1);
//     }
// }

//Q5: what will the following line print : "%d %d %d", a, ++a, a++
// #include<stdio.h>

// int main(){
//     int a =3;
//     printf("%d %d %d", a, ++a, a++);//--> compiler na behave pr depend kre left to right argument pass krvi
// //                                          ya right to left. here compiler pass argument <-- this way.
//     return 0;
// }

//Q6: calculate the sum of n number by recursion.
// #include<stdio.h>
// int sum(int n);
// int main ()
// {
//     int n,answer;
//     printf("enter the number:\n");
//     scanf("%d",&n);
//     printf("the sum of %d number is = %d\n",n,sum(n));
//     return 0;
// }
// int sum(int n)
// {
//     if (n==0)
//     {
//         return n;
//     }
//     else
//     {
//         return (n + sum(n-1));
//     }
// }

//Q7: star pattern
// #include<stdio.h>
// void printPattern(int n);
// int main()
// {
//     int n ;
//     printf("how much line you draw:\n");
//     scanf("%d",&n);
//     printPattern(n);
//     return 0;
// }
// void printPattern(int n)
// {
//     if (n==1)
//     {
//         printf("*\n");
//         return;
//     }
//     printPattern(n-1);
//     for(int i=0;i<(2*n-1);i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }

/*
pointer
*/

// a program to demonstrat pointer.

// #include<stdio.h>
// int main()
// {
//     int i = 34;
//     int *j = &i; // j will now store the address of i
//     printf("The value of i is %d\n", i);
//     printf("The value of i is %d\n", *j);
//     printf("The address of i is %u\n", &i);
//     printf("The address of i is %u\n", j);
//     printf("The address of j is %u\n", &j);
//     printf("The value of j is %u\n", *(&j));
//     return 0;
// }

// call bye value

    // #include<stdio.h>
    // int sum (int a, int b);
    // int main()
    // {
    //     int x=4, y=7;
    //     printf("The value of x and y is %d and %d\n", x, y);
    //     printf("The value of 4+7 is %d\n", sum(x, y));
    //     printf("The value of x and y after function call is %d and %d\n", x, y);
    //     return 0;
    // }
    // int sum (int a, int b)
    // {
    //     int c;
    //     c = a + b;
    //     return c;
    // }

//call bye reference

    // #include<stdio.h>
    // void wrong_swap(int a, int b);
    // void swap(int *a,int *b);
    // int main ()
    // {
    //     int x=3,y=5;
    //     printf("the value of x and y before swap is %d and %d\n",x,y);
    //     wrong_swap(x,y);// --> will not work due to call by value
    //     swap(&x,&y);// --> will work due to call by reference
    //     printf("the value of x and y after swap is %d and %d\n",x,y);
    //     return 0;
    // }
    // void wrong_swap(int a, int b)
    // {
    //     int temp;
    //     temp=a;
    //     a=b;
    //     b=temp;
    // }
    // void swap(int *a,int *b)
    // {
    //     int temp;
    //     temp = *a;
    //     *a=*b;
    //     *b=temp;
    // }

//Q1:write a programm to print address of any variable use the address to get the value of this variable.
// #include<stdio.h>
// int main ()
// {
//     int a=4;
//     int *ptr;
//     ptr = &a;
//     printf("the value of the variable is %d\n",a);
//     printf("the address of the variable is %u\n",&a);
//     printf("the value of the variable is %d\n",*ptr);
//     return 0;
// }

//Q2: write a programm to having a variable i. print the addresh of i. pass this variable to a function and print it's
//    address.are these address same ? why?

// #include<stdio.h>
// void printAdd(int a)
// {
//     printf("the address of i is %u\n",&a);
// }
// int main ()
// {
//     int i=4;
//     printf("the value of i is %d\n",i);
//     printAdd(i);
//     printf("the address of i is %u\n",&i);
//     return 0;
// }

/*
Q3 no answer nathi mlyo 
*/
//Q3: write a program to change the value of a variable to ten time of it's current value.write a function and pass the
//    value by reference.

// #include<stdio.h>
// void swap(int *a);
// int main ()
// {
//     int i=2;
//     printf("the value of i before swap is %d \n",i);
//     swap(&i);
//     printf("the value of i after swap is %d \n",i*10);
//     return 0;
// }
// void swap(int *a)
// {
//     int temp;
//     temp=*a;
//     *a=temp;
// }
//-->just for fun:
// #include<stdio.h>
// void swap(int *a,int *b);
// int main ()
// {
//     int i=2,j=20;
//     printf("the value of i and j before swap is %d and %d\n",i,j);
//     swap(&i,&j);
//     printf("the value of i and j after swap is %d and %d\n",i,j);
//     return 0;
// }
// void swap(int *a, int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

//Q4: write a program using  a function which calculate the sum and average of two number.
//    use pointer and print the value of sum and average in main().

// --> answer type 1.
// #include<stdio.h>
// int sum(int *a,int *b)
// {
//     int c;
//     c=*a+*b;
//     return c;
// }
// float av(int *a,int *b)
// {
//     float c;
//     c=(float)(*a+*b)/2;
//     return c;
// }
// int main ()
// {
//     int a=2,b=4;
//     int *p1,*p2;
//     p1=&a;
//     p2=&b;
//     printf("the value of a and b is %d and %d\n",a,b);
//     printf("the sum of 2 and 4 is %d\n",sum(&a,&b));
//     printf("the avareg of 2 and 4 is %f\n",av(&a,&b));
//     return 0;
// }

// -->answer type 2.
// #include<stdio.h>

// void sumAndAvg(int a, int b, int *sum, float *avg){
//     *sum = a +b;
//     *avg = (float)(*sum)/2;
// }

// int main(){
//     int i, j, sum;
//     float avg;
//     i = 3;
//     j = 6;
//     sumAndAvg(i, j, &sum, &avg);
//     printf("The value of sum is %d \n", sum);
//     printf("The value of avg is %f \n", avg);

//     return 0;
// }

//Q5: Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.
// #include<stdio.h>
// int main ()
// {
//     int i=7;
//     int *ptr,**ptr_ptr;
//     ptr =&i;
//     ptr_ptr =&ptr;
//     printf("the value of i is %d",**ptr_ptr);
//     return 0;
// }

/*
arrays
*/

    // #include<stdio.h>
    // int main(){
    //     // Naive way to create 4 ints
    //     // int marks1, marks2, marks3, marks4;
    //     // marks1 = 34;
    //     // marks2 = 45;
    //     // marks3 = 67;
    //     // marks4 = 87;
    //     int marks[4];
    //     marks[0] = 34;
    //     marks[1] = 45;
    //     marks[2] = 34;
    //     marks[3] = 67;
    //     return 0;
    // }

    // #include<stdio.h>
    // int main()
    // {
    //     int marks[4];
    //     printf("enter the value of marks for student 1:");
    //     scanf("%d",&marks[0]);
    //     printf("enter the value of marks for student 2:");
    //     scanf("%d",&marks[1]);
    //     printf("enter the value of marks for student 3:");
    //     scanf("%d",&marks[2]);
    //     printf("enter the value of marks for student 4:");
    //     scanf("%d",&marks[3]);
    //     printf("you have enterd %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
    //     return 0;
    // }

// best thing.....using by loop.
//Quick Quiz: Write a program to accept marks of five students in an array and print them to the screen.
    // #include<stdio.h>
    // int main ()
    // {
    //     int marks[5];
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("enter the value of marks for student %d:",i+1);
    //         scanf("%d",&marks[i]);
    //     }
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("the value of marks for student %d is %d: \n",i+1,marks[i]);
    //     }
    //     return 0;
    // }

// #include<stdio.h>
    // int main ()
    // {
    //     // int a[]={34,54,45};
    //     // printf("the value of a[0] is %d\n",a[0]);
    //     // printf("the value of a[1] is %d\n",a[1]);
    //     // printf("the value of a[2] is %d\n",a[2]);
    //     float a[]={3.4,4.5,5.6,6.7};
    //     printf("the value of a[0] is %.2f\n",a[0]);
    //     printf("the value of a[1] is %.2f\n",a[1]);
    //     printf("the value of a[2] is %.2f\n",a[2]);
    //     printf("the value of a[3] is %.2f\n",a[3]);
    //     return 0;
    // }

    // pointer arithmetic:
    // #include<stdio.h>
    // int main ()
    // {
    //     // int i=34;
    //     // int *ptr=&i;
    //     // printf("the value of ptr is %u\n",ptr);
    //     // //ptr++;  //--> 4 byte memory + thay.
    //     // //ptr--;  //--> 4 byte memory - thay.
    //     // printf("the value of ptr is %u\n",ptr);
    //     // return 0;

    //     // char c=34;
    //     // char *ptr=&c;
    //     // printf("the value of ptr is %u\n",ptr);
    //     // //ptr++;  //--> 1 byte memory + thay.
    //     // //ptr--;  //--> 1 byte memory - thay.
    //     // printf("the value of ptr is %u\n",ptr);
    //     // return 0;

    //     float f=34;
    //     float *ptr=&f;
    //     printf("the value of ptr is %u\n",ptr);
    //     //ptr++;  //--> 4 byte memory + thay.
    //     //ptr--;  //--> 4 byte memory - thay.
    //     printf("the value of ptr is %u\n",ptr);
    //     return 0;
    // }

//Quick Quiz: Try these operations on another variable by creating pointers in a separate program. Demonstrate all four operations.
//            1.Addition of a number to a pointer.
//            2.Subtraction of a number from a pointer.
//            3.Subtraction of one pointer from another.
//            4.Comparison of two pointer variables.
//-->1 & 2.
    // #include<stdio.h>
    // void sumAndsub(int a, int b,int *sum,int *sub)
    // {
    //     int c;
    //     *sum= a+b;
    //     *sub= a-b;
    // }
    // int main ()
    // {
    //     int a=5,b=4,sum,sub;
    //     sumAndsub(a,b,&sum,&sub);
    //     printf("the sum of a and b is %d\n",sum);
    //     printf("the sub of a and b is %d\n",sub);
    //     return 0;
    // }
//-->3.pointer from another pointer.
    // #include<stdio.h>
    // int sub(int *a, int *b)
    // {
    //     int c;
    //     c = *a - *b;
    //     return c;
    // }
    // int main ()
    // {
    //     int a=5,b=4;
    //     int *p1,*p2;
    //     p1=&a;
    //     p2=&b;
    //     sub(&a,&b);
    //     printf("the sub of a and b is %d\n",sub(&a,&b));
    //     return 0;
    // }

// arrays with pointer....

    // #include<stdio.h>
    // int main()
    // {
    //     int marks[4];
    //     int *ptr;
    //     // ptr = &marks[0];
    //     ptr = marks;
    //     for(int i =0; i<4; i++)
    //     {
    //         printf("Enter the value of marks for student %d: \n", i+1);
    //         scanf("%d", ptr);
    //         ptr ++;
    //     }
    //     for(int i =0; i<4; i++){
    //         printf("The value of marks for student %d is %d \n",i+1, marks[i]);
    //     }
    //     return 0;
    // }

// arrays to function....

    // #include<stdio.h>
    // // void printArray(int *ptr, int n) //-->aam bi thaay
    // // {
    // //     for(int i=0; i<n; i++)
    // //     {
    // //         printf("The value of element %d is %d\n", i+1, *(ptr+i));
    // //     }
    // // }
    // void printArray(int ptr[], int n) //--> aam bi thaay
    // {
    //     for(int i=0; i<n; i++)
    //     {
    //         printf("The value of element %d is %d\n", i+1, ptr[i]);
    //     }
    // }
    // int main()
    // {
    //     int arr[] = {1,2,3543,34,3,645,23};
    //     printArray(arr, 7);
    //     return 0;
    // }

// multidimentsional arrays....

    // #include<stdio.h>
    // int main ()
    // {
    //     int student=3;
    //     int subject=4;
    //     int marks[3][4];
    //     for (int i = 0; i < student; i++)
    //     {
    //         for (int j = 0; j < subject; j++)
    //         {
    //             printf("Enter the marks of student %d in subject %d is: \n",i+1,j+1);
    //             scanf("%d",&marks[i][j]);
    //         }
    //     }
    //     for (int i = 0; i < student; i++)
    //     {
    //         for (int j = 0; j < subject; j++)
    //         {
    //             printf("The marks of student %d in subject %d is: %d\n",i+1,j+1,marks[i][j]);
    //         }
    //     }
    //     return 0;
    // }

//Q1: creat an array of 10 numbers. verify using pointer arithmetich that (ptr+2) point to the third element
//    where ptr is a pointer pointig to the first 1st elementof the array.
    // #include<stdio.h>
    // int main ()
    // {
    //     int arr[10];
    //     int *ptr=&arr[0]; // int *ptr=arr;
    //     ptr=ptr+2;
    //     if(ptr==&arr[2])
    //     {
    //         printf("these point to the same location to the memory.");
    //     }
    //     else
    //         printf("these point do not to the same location to the memory.");
    //     return 0;
    // }

//Q3: write a program to create an arrayof 10 integer and store multipkication table on 5 in it.
    // #include<stdio.h>
    // int main ()
    // {
    //     int mul[10];
    //     for(int i=0;i<10;i++)
    //     {
    //         mul[i]=5*(i+1);
    //     }
    //     for(int i=0;i<10;i++)
    //     {
    //         printf("5 x %d = %d\n",i+1,mul[i]);
    //     }
    //     return 0;
    // }

//Q4: repeat problem 3for a general input provided by the user using scanf.
    // #include<stdio.h>
    // int main ()
    // {
    //     int mul[10];
    //     int n;
    //     printf("enter the number for multiplication table.\n");
    //     scanf("%d",&n);
    //     printf("the multiplication table of %d is bellow:\n",n);
    //     for(int i=0;i<10;i++)
    //     {
    //         mul[i]=n*(i+1);
    //     }
    //     for(int i=0;i<10;i++)
    //     {
    //         printf("%d x %d = %d\n",n,i+1,mul[i]);
    //     }
    //     return 0;
    // }

//Q5: write a program contaning a function which reversed the array passed to it.
    // #include<stdio.h>
    // void reverse(int *arr,int n)
    // {
    //     int temp;
    //     for (int i = 0; i < (n/2); i++)
    //     {
    //         temp=arr[i];
    //         arr[i]=arr[n-i-1];
    //         arr[n-i-1]=temp;
    //     }
    // }
    // int main ()
    // {
    //     int arr[]={1,2,3,4,5,6,7};
    //     reverse(arr,7);
    //     for (int i = 0; i < 7; i++)
    //     {
    //         printf("the value of %d element is : %d\n",i+1,arr[i]);
    //     }
    //     return 0;
    // }

//Q6:write a program contaning function which count the number of possitive integer in an arrays.
    // #include <stdio.h>
    // int Positive(int* arr, int n)
    // {
    //     int k=0;
    //     int i;
    //     for (i = 0; i < n; i++)
    //     {
    //         if (arr[i] > 0)
    //             k++;
    //     }
    //     return k;
    // }
    // int Negative(int* arr, int n)
    // {
    //     int k=0;
    //     int i;
    //     for (i = 0; i < n; i++)
    //     {
    //         if (arr[i] < 0)
    //             k++;
    //     }
    //     return k;
    // }
    // // void printArray(int* arr, int n) //-->for sow arrays element
    // // {
    // //     printf("Array: ");
    // //     for (int i = 0; i < n; i++)
    // //     {
    // //         printf("%d ", arr[i]);
    // //     }
    // //     printf("\n");
    // // }
    // int main()
    // {
    //     int arr[] = { 2, -32, -44, -55, 12, 33, -54 };
    //     int n;
    //     n = sizeof(arr) / sizeof(arr[0]); // 0 is not positive or not negative.so we must be ignore it.
    //     // printArray(arr, n);
    //     printf("Count of Positive elements = %d\n",Positive(arr, n));
    //     printf("Count of Negative elements = %d\n",Negative(arr, n));
    //     return 0;
    // }

//Q7: create an array of size 3x10 containing multiplication table of the numbers 2,7 and 9 respectively.
    // #include <stdio.h>
    // void printtable(int *multable, int num, int n)
    // {
    //     printf("The multiplication table of %d is:\n\n", num);
    //     for (int i = 0; i < n; i++)
    //         {
    //             multable[i] = num * (i + 1);
    //         }
    //     for (int i = 0; i < n; i++)
    //         {
    //             printf("%d X %d = %d\n", num, n, multable[i]);
    //         }
    //     printf("\n\n\n");
    // }
    // int main()
    // {
    //     int multable[3][10];
    //     printtable(multable[0], 2, 10);
    //     printtable(multable[1], 7, 10);
    //     printtable(multable[2], 9, 10);
    //     return 0;
    // }

// Q8: repeat program 7 for a custom input given by the user.
    // #include <stdio.h>
    // void printtable(int *multable, int num, int n)
    // {
    //     printf("The multiplication table of %d is :\n\n", num);
    //     for (int i = 0; i < n; i++)
    //         {
    //             multable[i]=num*(i+1);
    //         }
    //     for (int i = 0; i < n; i++)
    //         {
    //             printf("%d x %d = %d\n",num,i+1,multable[i]);
    //         }
    // }
    // int main()
    // {
    //     int multable[0][10];
    //     int num;
    //     printf("Enter the value of costum number: ");
    //     scanf("%d",&num);
    //     printtable(multable[0],num,10); 
    //     return 0;
    // }

// Q9:create a three dimensional arrayand print the address of it's elements in increasing order.
    // #include<stdio.h>
    // int main ()
    // {
    //     int arr[2][3][4];
    //     for (int i = 0; i < 2; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             for (int k = 0; k < 4; k++)
    //             {
    //                 printf("tne address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
    //             }
    //         }
    //     }
    //     return 0;
    // }


/*
strings
*/

    // #include<stdio.h>
    // int main ()
    // {
    //     char str[]={'P','r','i','n','c','e','\0'};
    //     //char str[]="Prince"; //--> aa rit bi use thay or upr ni bi chale.
    //     printf("string is : %s", str );
    //     return 0;
    // }
//----------
    // #include<stdio.h>
    // int main ()
    // {
    //     //char str[]="Prince";
    //     char str[]={'P','r','i','n','c','e','\0'};
    //     char *ptr=str;
    //     while(*ptr!='\0')
    //     {
    //         printf("%c",*ptr);
    //         ptr++;
    //     }
    //     return 0;
    // }

//-----------
    // #include<stdio.h>
    // int main()
    // {
    //     char *ptr="Prince Sunasara";
    //     char ptr[]="Prince Sunasara";
    //     printf("%s",ptr);
    //     return 0;
    // }

//-----------
    // #include<stdio.h>
    // int main ()
    // {
    //     char s[30];
    //     printf("Enter your string: \n");
    //     scanf("%s",s);
    //     printf("Your name is %s.",s);
    //     return 0;
    // }

//-----------
    // #include<stdio.h>
    // int main ()
    // {
    //     char s[30];
    //     printf("Enter your string : ");
    //     gets(s); //--> space between two words.
    //     puts(s); //-->printed sentence show in next line.
    //     //printf("your name is %s",s);
    //     return 0;
    // }

//difference between two init method.
    // #include<stdio.h>
    // int main()
    // { 
    //     char *ptr = "Harry Bhai";//--> name change thai jaay.
    //     // char ptr[] = "Harry Bhai";//-->naam change na thay.
    //     ptr = "Shubham bhai";
    //     printf("%s", ptr);
    //     return 0;
    // }

// length of string.
    // #include<stdio.h>
    // #include<string.h>
    // int main ()
    // {
    //     char *s = "Prince sunasara";
    //     int a= strlen(s);
    //     printf("The length of string is %d",a);
    //     return 0;
    // }

// copy of string.
    // #include<stdio.h>
    // #include<string.h>
    // int main ()
    // {
    //     char *s1 = "Prince Sunasara";
    //     char s2[45];
    //     strcpy(s2,s1); //--> strcpy(target,source);
    //     printf("now the s2 is %s",s2);
    //     return 0;
    // }

// concatenate two string.
    // #include<stdio.h>
    // #include<string.h>
    // int main ()
    // {
    //     char s1[11] = "Prince";
    //     char *s2 = "sunasara";
    //     strcat(s1,s2);
    //     printf("Now the s1 is %s",s1);
    //     return 0;
    // }

// comparison two string.
    // #include<stdio.h>
    // #include<string.h>
    // int main ()
    // {
    //     char s1[11] = "Prince"; //--> depended upon ASCII value. 
    //     char *s2 = "Prince"; //--> both same answer is 0.
    //     // char *s2 = "Prihce"; //--> n>h so answer is +1.
    //     // char *s2 = "Prizce"; //--> n<z so answer is -1.
    //     int val=strcmp(s1,s2);
    //     printf("Now the s1 is %d",val);
    //     return 0;
    // }

// Q1: which of the following is used to appropriately read a multi-word string.
//     a. gets()   b. puts()   c. printf()   d. scanf()
//     Answer => a.  

// Q2: write a program to take string as an input from the user using %c and %s.
//     confirm that the string are equal.

    // #include<stdio.h>
    // #include<string.h>
    // int main ()
    // {
    //     char s1[32];
    //     char s2[32];
    //     char c;
    //     int i=0;
    //     printf("Enter the value of first string \n");
    //     scanf("%s",s1);
    //     printf("Enter the value of second string character by character\n");
    //     while (c!='\n')
    //     {
    //         fflush(stdin);//-->aagl je nakhyu hoy e avgni new element add krva.//used to flush the output buffer of the stream.
    //         scanf("%c",&c);
    //         s2[i]=c;
    //         i++;
    //     }
    //     s2[i-1]='\0';
    //     printf("The value of s1 is %s\n",s1);
    //     printf("The value of s2 is %s\n",s2);
    //     printf("strcmp for this string result %d",strcmp(s1,s2));
    //     return 0;
    // }

// Q3: write your own version of strlen function from <string.h> .
    // #include<stdio.h>
    // int strlen(char * s)
    // {
    //     char *ptr =s;
    //     int len=0;
    //     while (*ptr!='\0')
    //     {
    //         len++;
    //         ptr++;
    //     }
    //     return len;
    // }
    // int main ()
    // {
    //     char *s = "Jay Ravan";
    //     int l = strlen(s);
    //     printf("The length of this string is %d",l);
    //     return 0;
    // }

// Q4: write a function slice() to slice a string. it should change the origenal string such that
//     it is now a sliced string. take m and n as the start and ending position for slice.
    // #include<stdio.h>
    // void slice( char *s,int m,int n);
    // int main ()
    // {
    //     char s[]="princesunasara";
    //     slice(s,0,10);
    //     printf("%s",s);
    //     return 0;
    // }
    // void slice( char *s,int m,int n)
    // {
    //     int i=0;
    //     while ((m+i)<n)
    //     {
    //         s[i]=s[i+m];
    //         i++;
    //     }
    //     s[i]='\0';
    // }

// Q5: write your own version of strcpy function from <string.h>

// Q6: write a program to encrypt a string by adding a to the ascii value of it's characters.//return mo leter p6ino later mle.
    // #include<stdio.h>
    // void encrypt(char *c)
    // {
    //     char *ptr=c;
    //     while (*ptr!='\0')
    //     {
    //         *ptr=*ptr+1;
    //         ptr++;
    //     }
        
    // }
    // int main ()
    // {
    //     char c[]="hello prince";
    //     encrypt(c);
    //     printf("Encrypted string is : %s",c);
    //     return 0;
    // }

// Q7: write a progra to descrypt a string encrypted using encrypt function in problem 6.//return mo leter pela later mle.
    // #include<stdio.h>
    // void decrypt(char *s)
    // {
    //     char *ptr=s;
    //     while (*ptr!='\0')
    //     {
    //         *ptr=*ptr-1;
    //          ptr++;
    //     }
    // }
    // int main ()
    // {
    //     char s[]="ifmmp!qsjodf";
    //     decrypt(s);
    //     printf("%s",s);
    //     return 0;
    // }

// Q8: write a program to count the occurence of a given charectarin a string.//line mo ekjeva ketla latter 6 em.
    // #include<stdio.h>
    // int occurence(char s[],char c)
    // {
    //     char *ptr=s;
    //     int count =0;
    //     while (*ptr!='\0')
    //     {
    //         if(*ptr==c)
    //         {
    //             count++;
    //         }
    //         ptr++;
    //     }
    //     return count;
    // }
    // int main ()
    // {
    //     char s[]="prince nareshbhai sunasara";
    //     int count= occurence(s,'a');
    //     printf("occurence = %d",count);
    //     return 0;
    // }

// Q9: write a program to check weither a given charectar is present in string or not.
    // #include<stdio.h>
    // void available(char s[],char c)
    // {
    //     char *ptr=s;
    //     while (*ptr!='\0')
    //     {
    //         if(*ptr==c)
    //         {
    //             printf("character available.");
    //         }
    //         else 
    //         {
    //             printf("character not available.");
    //         }
    //         break;
    //     }
    // }
    // int main ()
    // {
    //     char s[]="abcdefghijk";
    //     available(s,'z');
    //     return 0;
    // }


/*
structure
*/

    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     float salary;
    //     char name[10];
    // };
    // int main()
    // {
    //     int a =34;
    //     char b = 'g';
    //     float d = 234.3543;
    //     // employee e1;
    //     // e1.salary = 34.454;// --->wont work without employee structure

    //     struct employee e1;
    //     e1.code = 100;
    //     e1.salary = 34.454;
    //     // e1.name = "Prince";// --> wont work
    //     strcpy(e1.name, "Prince");

    //     printf("%d\n", e1.code);
    //     printf("%.3f\n", e1.salary);
    //     printf("%s\n", e1.name);
    //     return 0;
    // }

//quick quize: write a program to store the details of 3 employees from user define data.
//             use the structure declare above.
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     char name[15];
    //     float salary;
    // };
    // int main ()
    // {
    //     // struct employee e1,e2,e3;

    //     // printf("Enter code of employee e1: ");
    //     // scanf("%d",&e1.code);
    //     // printf("Enter salary of employee e1: ");
    //     // scanf("%f",&e1.salary);
    //     // printf("Enter name of employee e1: ");
    //     // scanf("%s",e1.name);

    //     // printf("Enter code of employee e2: ");
    //     // scanf("%d",&e2.code);
    //     // printf("Enter salary of employee e2: ");
    //     // scanf("%f",&e2.salary);
    //     // printf("Enter saname of employee e2: ");
    //     // scanf("%s",e2.name);

    //     // printf("Enter code of employee e3: ");
    //     // scanf("%d",&e3.code);
    //     // printf("Enter salary of employee e3: ");
    //     // scanf("%f",&e3.salary);
    //     // printf("Enter name of employee e3: ");
    //     // scanf("%s",e3.name);

    //     for (int i = 0; i < 3; i++)
    //     {
    //     struct employee e1,e2,e3;

    //     printf("Enter code of employee %d: ",i+1);
    //     scanf("%d",&e1.code);
    //     printf("Enter salary of employee %d: ",i+1);
    //     scanf("%f",&e1.salary);
    //     printf("Enter name of employee %d: ",i+1);
    //     scanf("%s",e1.name);
    //     printf("\n");
    //     }
    //     return 0;
    // }

//---------------
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     float salary;
    //     char name[20];
    // };
    // int main()
    // {
    //     struct employee facebook[100];

    //     facebook[0].code = 100;
    //     facebook[0].salary = 100.45;
    //     strcpy(facebook[0].name, "Harry");

    //     facebook[1].code = 101;
    //     facebook[1].salary = 90.45;
    //     strcpy(facebook[1].name, "Rohan");

    //     facebook[2].code = 102;
    //     facebook[2].salary = 110.45;
    //     strcpy(facebook[2].name, "SkillKhiladi");
    //     printf("Done");
    //     return 0;
    // }

//-----------------struncture arrays
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     float salary;
    //     char name[20];
    // };
    // int main(){
    //     struct employee Prince = {100, 34.23, "Prince"};
    //     printf("Code is: %d \n", Prince.code);
    //     printf("Salary is: %f \n", Prince.salary);
    //     printf("Name is: %s \n", Prince.name);
    //     return 0;
    // }

//-----------------structure pointer
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     float salary;
    //     char name[20];
    // };
    // int main(){
    //     struct employee e1;
    //     struct employee *ptr;
    //     ptr = &e1;
    //     ptr->code = 101;
    //     // (*ptr).code = 101; //--> you can also write like this.
    //     printf("%d", e1.code); 
    //     return 0;
    // }

//----------------------structure function
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    //     float salary;
    //     char name[20];
    // };
    // void show(struct employee emp){
    //     printf("The Code of employee is: %d\n", emp.code);
    //     printf("The Salary of employee is: %f\n", emp.salary);
    //     printf("The Name of employee is: %s\n", emp.name);
    //     // emp.code = 34;//-->dont work
    // }
    // int main()
    // {
    //     struct employee e1;
    //     struct employee *ptr;
    //     ptr = &e1;
    //     //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    //     ptr->code = 101;
    //     ptr->salary = 11.01;
    //     strcpy(ptr->name, "Prince");
    //     show(e1); //--> dont work.
    //     // printf("The Code of employee is: %d\n", e1.code); //-->dont work.
    //     return 0;
    // }

//------------------structure typedef. //--> "struct employee" aatlu long na lkhine khali short "emp" mo ptava.
    // #include<stdio.h>
    // #include<string.h>
    // typedef struct employee{
    //     int code;
    //     float salary;
    //     char name[20];
    // } emp;
    // void show(emp emp1)
    // {
    //     printf("The Code of employee is: %d\n", emp1.code);
    //     printf("The Salary of employee is: %f\n", emp1.salary);
    //     printf("The Name of employee is: %s\n", emp1.name);       
    // }
    // int main(){
    //     emp e1; //-->  Declaring e1 
    //     emp *ptr;//--> Declaring ptr
    //     ptr = &e1; //--> pointing ptr to e1

    //     // Set the member values for e1
    //     ptr->code = 101;
    //     ptr->salary = 11.01;
    //     strcpy(ptr->name, "Harry"); 
    //     show(e1);
    //     return 0;
    // }

// Q1: create a two dimensional vector using structure in c.
    // #include<stdio.h>
    // struct vector{
    //     int x;
    //     int y;
    // };
    // int main ()
    // {
    //     struct vector v1,v2;
    //     v1.x=5;
    //     v1.y=8;
    //     printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);

    //     v2.x=50;
    //     v2.y=80;
    //     printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
    //     return 0;
    // }

//Q2: write a function sumvector which return the sum of two vector passed to it.
//    the vector must be two dimensional.
    // #include<stdio.h>
    // typedef struct vector{
    //     int x;
    //     int y;
    // }p;
    // p sumvector(p v1,p v2)
    // {
    //     p answer;
    //     answer.x = v1.x + v2.x;
    //     answer.y = v1.y + v2.y;
    //     return answer;
    // };
    // int main ()
    // {
    //     p v1,v2,sum;
    //     v1.x=5;
    //     v1.y=8;
    //     printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);

    //     v2.x=50;
    //     v2.y=80;
    //     printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);

    //     sum=sumvector(v1,v2);
    //     printf("X dim result is %d and Y dime result is %d\n",sum.x,sum.y);
    //     return 0;
    // }

//Q3: twenty integer are to be stored in memory.what will you prefer-array or structure ?
    // answer arrays//-->simillar data type

//Q4: write a program to illustrate the use of a arrow operator -> in C.
    // #include<stdio.h>
    // #include<string.h>
    // struct employee{
    //     int code;
    // };
    // int main(){
    //     struct employee e1;
    //     struct employee *ptr;
    //     ptr = &e1;
    //     ptr->code = 101; //--> you can also write like this:- (*ptr).code = 101
    //     printf("%d", e1.code); 
    //     return 0;
    // }

//Q5: write a program with structure representing a complex(imaginary) number.
    // #include<stdio.h>
    // struct complex{
    //     float complex;
    // };
    // int main ()
    // {
    //     struct complex cnum[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         printf("Enter the complex value for %d num\n",i+1);
    //         scanf("%f",&cnum[i].complex);
    //     }
    //     for (int i = 0; i < 3; i++)
    //     {
    //         printf("The value of complex part is %.2f\n",cnum[i].complex);
    //     }
    //     return 0;
    // }

//Q6: create an arrays of 5 complex numbers created in problem 5 and display then with
//   the help of a display function. the values must be taken as an input from the user.
    // #include<stdio.h>
    // typedef struct complex{
    //     int real;
    //     int complex;
    // }comp;
    // void display(comp c)
    // {
    //     printf("The value of real part is %d\n", c.real);
    //     printf("The value of Imaginary part is %d\n", c.complex);
    // }
    // int main()
    // {
    //     comp cnums[5];
    //     for(int i=0; i<5; i++){
    //         printf("Enter the real value for %d num\n", i+1);
    //         scanf("%d", &cnums[i].real);

    //         printf("Enter the complex value for %d num\n", i+1);
    //         scanf("%d", &cnums[i].complex);
    //     }
    //     for(int i=0; i<5; i++)
    //     {
    //         display(cnums[i]);
    //     }
    //     return 0;
    // }

//Q7: write problem 5 structure using typedef keyword.
    // #include<stdio.h>
    // typedef struct complex{
    //     float complex;
    // }comp;
    // int main ()
    // {
    //     comp cnum[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         printf("Enter the complex value for %d num\n",i+1);
    //         scanf("%f",&cnum[i].complex);
    //     }
    //     for (int i = 0; i < 3; i++)
    //     {
    //         printf("The value of complex part is %.2f\n",cnum[i].complex);
    //     }
    //     return 0;
    // }

//Q8: create a structure representing a bank account of costumer. what fields did you 
//    use and why ?
    // #include<stdio.h>
    // typedef struct bank{
    //     char name[20];
    //     int account_number;
    //     float balance;
    //     int year;
    // }detail;
    // int main ()
    // {
    //     detail c[2];
    //     for (int i = 0; i < 2; i++)
    //     {
    //         printf("Enter the name for costumer %d : \n",i+1);
    //         scanf("%s",&c[i].name);

    //         printf("Enter the account number for costumer %d : \n",i+1);
    //         scanf("%d",&c[i].account_number);

    //         printf("Enter the amount of balance for costumer %d : \n",i+1);
    //         scanf("%f",&c[i].balance);

    //         printf("Enter the starting year for costumer %d : \n",i+1);
    //         scanf("%d",&c[i].year);

    //         printf("\n");
    //     }
    //     for (int i = 0; i < 2; i++)
    //     {
    //         printf("The name for costumer %d : %s\n",i+1,c[i].name);
    //         printf("The account number for costumer %d : %d\n",i+1,c[i].account_number);
    //         printf("The amount of balance for costumer %d : %.2f\n",i+1,c[i].balance);
    //         printf("The starting year for costumer %d : %d\n\n",i+1,c[i].year);
    //     }
    //     return 0;
    // }

//Q9: write a structure capable of storing date .write a function to
//    compare those date.
    // #include<stdio.h>
    // struct date{
    //     int date;
    //     int month;
    //     int year;
    // };
    // void display(struct date d)
    // {
    //     printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
    // }
    // int datecmp(struct date d1,struct date d2)
    // {
    //     if (d1.year>d2.year)
    //     {
    //         return 1;
    //     }
    //     if (d1.year<d2.year)
    //     {
    //         return -1;
    //     }

    //     if (d1.month>d2.month)
    //     {
    //         return 1;
    //     }
    //     if (d1.month<d2.month)
    //     {
    //         return -1;
    //     }

    //     if (d1.date>d2.date)
    //     {
    //         return 1;
    //     }
    //     if (d1.date<d2.date)
    //     {
    //         return -1;
    //     }
    //     return 0;
    // }
    // int main ()
    // {
    //     struct date d1={5,11,20};
    //     struct date d2={5,11,20};
    //     display(d1);
    //     display(d2);
    //     int a=datecmp(d1,d2);
    //     printf("date comparison function returns: %d",a);
    //     return 0;
    // }

//Q10: solve problem 9 for time using typedef keyword. 
    // #include<stdio.h>
    // typedef struct date{
    //     int date;
    //     int month;
    //     int year;
    //     int hour;
    //     int minutes;
    //     int second;
    // }time;
    // void display(time d)
    // {
    //     printf("The date and time is: %d/%d/%d %d:%d:%d\n",d.date,d.month,d.year,d.hour,d.minutes,d.second);
    // }
    // int datecmp(time d1,time d2)
    // {
    //     if (d1.year>d2.year)
    //     {
    //         return 1;
    //     }
    //     if (d1.year<d2.year)
    //     {
    //         return -1;
    //     }

    //     if (d1.month>d2.month)
    //     {
    //         return 1;
    //     }
    //     if (d1.month<d2.month)
    //     {
    //         return -1;
    //     }

    //     if (d1.date>d2.date)
    //     {
    //         return 1;
    //     }
    //     if (d1.date<d2.date)
    //     {
    //         return -1;
    //     }

    //     if (d1.hour>d2.hour)
    //     {
    //         return 1;
    //     }
    //     if (d1.hour<d2.hour)
    //     {
    //         return -1;
    //     }

    //     if (d1.minutes>d2.minutes)
    //     {
    //         return 1;
    //     }
    //     if (d1.minutes<d2.minutes)
    //     {
    //         return -1;
    //     }

    //     if (d1.second>d2.second)
    //     {
    //         return 1;
    //     }
    //     if (d1.second<d2.second)
    //     {
    //         return -1;
    //     }
    //     return 0;
    // }
    // int main ()
    // {
    //     time d1={5,9,2021,10,40,59};
    //     time d2={5,9,2021,10,40,50};
    //     display(d1);
    //     display(d2);
    //     int a=datecmp(d1,d2);
    //     printf("date comparison function returns: %d",a);
    //     return 0;
    // }


/*
File I/O
*/

    // #include<stdio.h>
    // int main(){
    //     FILE *ptr;
    //     ptr = fopen("sample2.txt", "r"); //--> for reading the file
    //     //ptr = fopen("sample2.txt", "w"); //--> for writing to a file
    //     return 0;
    // }


    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     int num;
    //     int num2;
    //     ptr = fopen("prince.txt","r");
    //     fscanf(ptr,"%d",&num);
    //     fscanf(ptr,"%d",&num2);
    //     fclose(ptr);
    //     printf("the value of num is = %d\n",num);
    //     printf("the value of num2 is = %d\n",num2);
    //     return 0;
    // }

    // #include<stdio.h>
    // int main()
    // {
    //     FILE *ptr;
    //     int num;
    //     int num2;
    //     ptr = fopen("prince.txt", "r");
    //     if (ptr == NULL)
    //     {
    //         printf("This file does not exist\n");
    //     }
    //     else
    //     { 
    //         fscanf(ptr, "%d", &num);
    //         fscanf(ptr, "%d", &num2);
    //         fclose(ptr);
    //         printf("The value of num is %d\n", num);
    //         printf("The value of num2 is %d\n", num2);
    //     }
    //     return 0;
    // }


    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     int number = 55;
    //     ptr=fopen("generated.txt","w");
    //     fprintf(ptr,"the number is %d\n",number);
    //     fprintf(ptr,"thank you for seeing us.\n");
    //     fclose(ptr);
    //     return 0;
    // }

    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     ptr=fopen("p.txt","r");
    //     // char c=fgetc(ptr);
    //     // printf("the value of my character is %c\n", fgetc(ptr));
    //     // printf("the value of my character is %c\n", fgetc(ptr));
    //     // printf("the value of my character is %c\n", fgetc(ptr));
    //     // printf("the value of my character is %c\n", fgetc(ptr));

    //     ptr=fopen("p.txt","w");
    //     putc('o',ptr);
    //     putc('m',ptr);
    //     putc('g',ptr);
    //     fclose(ptr);
    //     return 0;
    // }


    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     char c;
    //     ptr=fopen("p.txt","r");
    //     c = fgetc(ptr);
    //     while(c!=EOF)
    //     {
    //         printf("%c",c);
    //         c=fgetc(ptr);
    //     }
    //     return 0;
    // }

// Q1: write a programm to read  three integer from a file.
    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     int a,b,c;
    //     ptr = fopen("q1.txt","r");
    //     fscanf(ptr,"%d %d %d",&a,&b,&c);
    //     printf("the value of a ,b,c is %d %d %d\n",a,b,c);
    //     return 0;
    // }

// Q2: write a program to generate multiplication table of a given number in text format.make sure  the file is readable and well format.
    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     int num;
    //     printf("Enter the integer you need the table of:\n");
    //     scanf("%d",&num);
    //     ptr=fopen("table.txt","w");
    //     for (int i = 0; i < 10; i++)
    //     {
    //         fprintf(ptr,"%d x %d = %d\n",num,i+1,num*(i+1));
    //     }
    //     printf("successfully generated multiplication!!!!");
    //     fclose(ptr);
    //     return 0;
    // }

// Q3:write a program to read a text file charecrer by charecter and write it's content twice in separate file.
    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr1;
    //     FILE *ptr2;
    //     ptr1 = fopen("p.txt","r");
    //     ptr2 = fopen("b.txt","w");
    //     char c = fgetc(ptr1);
    //     while (c!=EOF)
    //     {
    //         fputc(c,ptr2);
    //         fputc(c,ptr2);
    //         c=fgetc(ptr1);
    //     }
    //     fclose(ptr1);
    //     fclose(ptr2);
    //     return 0;
    // }


// Q4:take name and salary of two employee as input from the user and write to them in text
//     file in the following format.
//     name 1, 3300
//     name 2, 7700
    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *n;
    //     int sallary;
    //     char name[10];
    //     n=fopen("g.txt","w");
    //     for (int i = 0; i < 2; i++)
    //     {
    //         printf("Enter the name and sallary of employee %d : \n", i+1);
    //         scanf("%s\n%d",name,&sallary);
    //         printf("\n");
    //     }
    //     for (int i = 0; i < 2; i++)
    //     {
    //         fprintf(n,"Employee : %d\t\t Name  : %s\t\t Sallary :%d.\n", i+1 , name , sallary); 
    //     }
    //     printf("You may go and check your file now.Thank you.");
    //     fclose(n);
    //     return 0;
    // }


// Q5:write a program to modify containing an integer to double it's value.
//       2     -->     4
//   prev.file      new file
    // #include<stdio.h>
    // int main ()
    // {
    //     FILE *ptr;
    //     int a,b,c;
    //     ptr=fopen("anamika.txt","r");
    //     fscanf(ptr,"%d %d %d",&a,&b,&c);
    //     fclose(ptr);
    //     printf("%d %d %d\n",(a*2),(b*2),(c*2));
    //     return 0;
    // }
    


/*
project 2 : snake , water and gun.
*/
    // #include<stdio.h>
    // #include<stdlib.h>
    // #include<time.h>
    // int snakewatergun(char you,char comp)
    // {
        // returns 1 if you win, -1 if you lose and 0 if draw
    //     if (you==comp)
    //     {
    //         return 0;
    //     }
    //     if (you=='w' && comp=='s' )
    //     {
    //         return -1;
    //     }
    //     else if (you=='s' && comp=='w' )
    //     {
    //         return 1;
    //     }
    //     if (you=='g' && comp=='s' )
    //     {
    //         return 1;
    //     }
    //     else if (you=='g' && comp=='s' )
    //     {
    //         return -1;
    //     }
    //     if (you=='g' && comp=='w' )
    //     {
    //         return -1;
    //     }
    //     else if (you=='w' && comp=='g' )
    //     {
    //         return 1;
    //     }
    // }
    // int main ()
    // {
    //     char you,comp;
    //     srand(time(0));
    //     int number = rand()%100 +1;
    //     if (number <33)
    //     {
    //         comp='s';
    //     }
    //     else if (number >33 && number<66)
    //     {
    //         comp='w';
    //     }
    //     else
    //     {
    //         comp='g';
    //     }        
    //     printf("Enter 's' for snake, 'w' for water or 'g' for gun:\n");
    //     scanf("%c",&you);
    //     int result = snakewatergun(you,comp);
    //     if (result==0)
    //     {
    //         printf("Game draw!!\n");
    //     }
    //     else if (result == -1)
    //     {
    //         printf("You loss !!\n");
    //     }
    //     else
    //     {
    //         printf("You win !!\n");
    //     }
    //     printf("You choose %c ans computer choose %c.",you,comp);
    //     return 0;
    // }



/*
dynamic memory allocation
*/

// 1: malloc function
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *ptr;
    //     // size of operator.
    //     // printf("the size of intezer is %d\n",sizeof(int));
    //     // printf("the size of float is %d\n",sizeof(float));
    //     // printf("the size of char is %d\n",sizeof(char));
    //     ptr=(int *) malloc(6 * sizeof(int));
    //     for (int i = 0; i < 6; i++)
    //     {
    //         printf("Enter value of %d element : \n",i);
    //         scanf("%d",&ptr[i]);
    //     }
    //     for (int i = 0; i < 6; i++)
    //     {
    //         printf("The value of %d element is : %d\n",i,ptr[i]);
    //     }
    //     return 0;
    // }

// Quick quize: write a program to create dynamic array of 5 float using malloc().
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     float *ptr;
    //     ptr=(float *) malloc(5 * sizeof(float));
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("Enter the value of %d element : \n",i+1);
    //         scanf("%f",&ptr[i]);
    //     }
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("The value of %d elemetn is : %.2f\n",i+1,ptr[i]);
    //     }
    //     return 0;
    // }

// 2: calloc function,
    // #include<stdio.h> 
    // #include<stdlib.h> 
    // int main()
    // {
    //     int *ptr; 
    //     ptr = (int *) calloc(6, sizeof(int)); 
    //     // for(int i=0; i<6;i++)
    //     // {
    //     //     printf("Enter the value of %d element: \n", i+1); 
    //     //     scanf("%d", &ptr[i]);
    //     // }
    //     // printf("\n\n");
    //     for(int i=0; i<6;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]);
    //     }
    //     return 0;
    // }
// Quick Quiz: write a program to create an array of size n using calloc where n is an integer entered by user.
    // #include<stdio.h> 
    // #include<stdlib.h> 
    // int main()
    // {
    //     int *ptr; 
    //     int n;
    //     printf("How many integers do you want to enter:\n");
    //     scanf("%d", &n);
    //     ptr = (int *) calloc(n, sizeof(int)); 
    //     for(int i=0; i<n;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i+1); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     printf("\n\n");
    //     for(int i=0; i<n;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]);
    //     }
    //     return 0;
    // }

// free() function :
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *ptr;
    //     int *ptr2;
    //     ptr=(int *) malloc(600* sizeof(int));
    //     for (int i = 0; i < 600; i++)
    //     {
    //         ptr2=(int *)malloc(6000*sizeof(int));
    //         printf("Enter the value of %d element : \n",i+1);
    //         scanf("%d",&ptr[i]);
    //         free(ptr2);
    //     }
    //     return 0;
    // }

// realloc function :
    // #include<stdio.h> 
    // #include<stdlib.h> 
    // int main()
    // {
    //     int *ptr; 
    //     ptr = (int *) malloc(6 * sizeof(int)); 
    //     for(int i=0; i<6;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<6;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i, ptr[i]); 
    //     }

    //     // Reallocate ptr using realloc()
    //     ptr = realloc(ptr, 10*sizeof(int));
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i, ptr[i]); 
    //     }
    //     return 0;
    // }

// Q1:
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *p;
    //     p=(int *)malloc(6 * sizeof(int));
    //     for(int i=0;i<5;i++)
    //     {
    //         printf("The value of %d element is %d.\n",i+1,(i+1)*(2));
    //     }
    //     return 0;
    // }

// Q2:
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *p;
    //     p=(int *)malloc(6 * sizeof(int));
    //     for(int i=0;i<5;i++)
    //     {
    //         printf("Enter value of %d element :\n",i+1);
    //         scanf("%d",&p[i]);
    //     }
    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("The value of %d element id %d.\n",i+1,p[i]);
    //     }
    //     return 0;
    // }

// Q3:
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *p;
    //     p=(int *)calloc(6 , sizeof(int));
    //     for(int i=0;i<5;i++)
    //     {
    //         printf("The value of %d element is %d.\n",i+1,(i+1)*(2));
    //     }
    //     return 0;
    // }

// Q4:
    // #include<stdio.h> 
    // #include<stdlib.h> 
    // int main()
    // {
    //     int *ptr; 
    //     ptr = (int *) malloc(5 * sizeof(int)); 
    //     for(int i=0; i<5;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i+1); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<5;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]); 
    //     }

    //     // Reallocate ptr using realloc()
    //     ptr = realloc(ptr, 10*sizeof(int));
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i+1); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]); 
    //     }
    //     return 0;
    // }

// Q5: create an arrray of multiple table of 7 upto 10 (7x10=70). use realloc to make it store 15 member.(7x15=105)
    // #include<stdio.h>
    // #include<stdlib.h>
    // int main ()
    // {
    //     int *p;
    //     p=(int *)malloc(10 * sizeof(int));
    //     printf("The multiplication table is given bellow:\n");
    //     for(int i=1;i<=10;i++)
    //     {
    //         printf("7 x %d = %d\n",i,7*i);
    //     }
    //     p=realloc(p,15*sizeof(int));
    //     printf("\nYour memory is chaneged.\nNew multiplication table is given bellow:\n");
    //     for(int i=1;i<=15;i++)
    //     {
    //         printf("7 x %d = %d\n",i,7*i);
    //     }
    //     return 0;
    // }

// Q6:
    // #include<stdio.h> 
    // #include<stdlib.h> 
    // int main()
    // {
    //     int *ptr; 
    //     ptr = (int *) calloc(5, sizeof(int)); 
    //     for(int i=0; i<5;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i+1); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<5;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]); 
    //     }

    //     ptr = realloc(ptr, 10*sizeof(int));
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("Enter the value of %d element: \n", i+1); 
    //         scanf("%d", &ptr[i]);
    //     }
    //     for(int i=0; i<10;i++)
    //     {
    //         printf("The value of %d element is: %d\n", i+1, ptr[i]); 
    //     }
    //     return 0;
    // }