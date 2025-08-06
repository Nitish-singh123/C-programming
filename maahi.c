/*wap to find if a number is even or odd using c program*/

#include<stdio.h>
void chk(int);
void main(){
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    chk(n);
}
void chk(int n){
    if(n%2==0)
    printf("%d is Even number",n);
    else
    printf("%d is Odd number",n);
}

// /*wap in c to calculate average of 4 subject marks(take 4 inputs from user)*/
#include <stdio.h>
float CalAvg(float marks[], int n);

void main()
{
    int n = 4;
    float marks[n];
    printf("Enter marks for 4 subjects:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    float avg = CalAvg(marks, n);
    printf("\nAverage marks: %.2f\n", avg);
}
float CalAvg(float marks[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return sum / n;
}



#include<stdio.h>
int fact(int);

void main(){
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("Factorial of %d is:%d",n,fact(n));
}

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}


#include<stdio.h>
void chk(int);

void main(){
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    chk(n);
}
void chk(int n){
    if(n>0)
    printf("%d is positive number",n);
    else if(n<0)
    printf("%d is negative number",n);
    else
    printf("%d is neutral",n);
}


#include<stdio.h>
void chk(int);
void main(){
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    chk(n);
}

void chk(int n){
    int prev=n,r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(prev==rev)
    printf("%d is palindrome number",prev);
    else
    printf("%d is not palindrome number",prev);
}

#include<stdio.h>
void fact(int);
    
    void main(){
        int n;
        printf("\nEnter the number:");
        scanf("%d",&n);
        fact(n);
    }
    void fact(int n){
        if(n==0)
        printf("Factorial =1");
        else
        {
            int f=1;
            for(int i=1;i<=n;i++)
            {
                f=f*i;
            }
            printf("Factorial of %d is:%d",n,f);
        }
    }
   
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even num",n);
    }
    else{
        printf("%d is odd",n);
    }
}

#include<stdio.h>
#include<conio.h>
#define pi 3.141
void main()
{
    float r;
    printf("\nEnter the radius:");
    scanf("%f",&r);
    printf("Area of the circle is:%f",pi*r*r);
}

// using functions
#include<stdio.h>
#include<conio.h>
int sum(int,int);

 void main(){
    int a=3,b=2;
    printf("Sum of the two no.s is:%d",sum(a,b));
}

int sum(int x,int y){
    return x+y;
}

#include<stdio.h>
#include<conio.h>
void swap(int,int);

void main()
{
    int a=2,b=3;
    swap(a,b);
}

void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("a=%d and b=%d",x,y);
}

#include<stdio.h>
#include<conio.h>
void fact(int);

void main(int n)
{
    printf("\nEnter any positive integer:");
    scanf("%d",&n);
    fact(n);
}

void fact(int n)
{
    int f=1;
    if(n==0)
    printf("Factorial=1");
    else
    {
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
    printf("\nFactorial of %d is:%d",n,f);}
}

#include<stdio.h>
#include<conio.h>
void rev(int);

void main(int n){
    printf("\nEnter the number:");
    scanf("%d",&n);
    rev(n);
}

void rev(int n){
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\nReversed number is:%d",rev);
}

// wap in c to raise the power of x as y
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int x,y,z=1;
     printf("\nEnter the two numbers:");
     scanf("%d%d",&x,&y);
     while(y!=0)
     {
         z=z*x;
         y--;
     }
     printf("\nThe power of x as y is:%d",z);
 }

// wap to sort 10 integers number using array and functions
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,j;
    printf("\nEnter the size of array:");
    scanf("%d",&n);

    printf("\nEnter the numbers one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("....Ascending order are as....\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

#include<stdio.h>
#include<conio.h>
void sort(int a[100],int n);

void main()
{
    int n,a[100],i,j;
    printf("\nEnter the size of array:");
    scanf("%d",&n);

    printf("\nEnter the numbers one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}

void sort(int a[100],int n)
    {
        int i,j,temp;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("....Ascending order are as....\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

// recursive function

#include<stdio.h>
#include<conio.h>
int fact(int);

void main(int n)
{
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("\nFactorial of %d is:%d",n,fact(n));
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}

#include <stdio.h>
#include <conio.h>
int fib(int);

void main()
{
    int t;
    printf("\nEnter the no. of terms:");
    scanf("%d", &t);
    printf("Fibonacci series is:");
    for (int i = 0; i < t; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
     return fib(n - 1) + fib(n - 2);
}


/*wap in c to check whether the given no. is odd or even*/

#include<stdio.h>
void main(int n){
    printf("\n Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is Even number",n);
    else
    printf("%d is Odd number",n);
}

/*wap in c to read the radius of a circle and display its area*/

#include<stdio.h>
#define pi 3.141
void main(float r){
    printf("\nEnter the radius:");
    scanf("%f",&r);
    printf("\nArea of the circle is:%.2f",pi*r*r);
}

/*wap in c to sum of any two numbers using functions*/

#include<stdio.h>
int sum(int,int);
void main(){
    int a,b;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe sum of the two numbers is:%d",sum(a,b));
}
int sum(int x ,int y){
    return x+y;
}

/*wap in c that prints the table of any number*/
#include <stdio.h>
void printTable(int n);
void main()
{
    int n;
    printf("\nEnter the number:");
    scanf("%d", &n);
    printTable(n);
}
void printTable(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%dx%d=%d",x,i,x*i);
    }
}

/* Using the library function calculate the square of the number*/
#include <stdio.h>
#include <math.h>
void main(int n)
{
    printf("\nEnter the number:");
    scanf("%d", &n);
     int p = pow(n, 2);
    printf("\nThe square is:%d ", p);
}

/*wap in c to swap any two no.s using functions*/
#include <stdio.h>
void swapNum(int, int);
void main()
{
    int a, b;
    printf("\nEnter the two numbers:");
    scanf("%d%d", &a, &b);
    swapNum(a, b);
}
void swapNum(int x, int y)
{
    int z = x;
    x = y;
    y = z;
    printf("Value of a=%d and Value of b=%d", x, y);
}

/*waf in c to calculate the area of the circle*/
#include <stdio.h>
#define pi 3.141
int circleArea(float);
void main(float r)
{
    printf("\nEnter the radius:");
    scanf("%f", &r);
    float result = circleArea(r);
    printf("\nThe area of the circle is: %f", result);
}
int circleArea(float r)
{
    return pi * r * r;
}

/* wap in c to input 5 employee details like (id,name,post,salary) and display them
in proper format */

#include <stdio.h>
struct employee
{
    int id;
    char name[30];
    char post[50];
    float salary;
} em[5];
void main()
{
    printf("Enter ID,name post, salary of 5 employee");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d%s%s%f", &em[i].id, &em[i].name, &em[i].post, &em[i].salary);
    }
    printf("\n.......................\n");
    printf("ID   Name  Post  Salary\n");
    printf(".........................\n");
    for (int i = 0; i < 5; i++)
    {
        if(em[i].salary>50000)
        printf("%d\t%s\t%s\t%f\n", em[i].id, em[i].name,&em[i].post, em[i].salary);
    }
    printf("..........................");
}


#include <stdio.h>
#include <conio.h>
struct stud
{
    int roll;
    char nam[10];
    float per;
};

void main()
{
    struct stud info;
    printf("Enter the roll:");
    scanf("%d", &info.roll);
    printf("Enter the Name:");
    scanf("%s", &info.nam);
    printf("Enter the percentage:");
    scanf("%f", &info.per);
    printf("Roll Name Percentage\n");
    printf("%d\t%s\t%f\t", info.roll, info.nam, info.per);
}


#include <stdio.h>
#include <conio.h>
void main()
{
    int *pc, c;

    c = 22;
    printf("Address of c:%p\n", &c);
    printf("value of c:%d\n\n", c);

    pc = &c;
    printf("Address of pointer pc:%p\n", pc);
    printf("Content of pointer pc:%d\n\n", *pc);

    c = 11;
    printf("Address of pointer pc:%p\n", pc);
    printf("Content of pointer pc:%d\n\n", *pc);

    *pc = 2;
    printf("Address of c:%p\n", &c);
    printf("value of c:%d\n\n", c);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    int rn, tm;
    char name[15];
    FILE *fptr;
    fptr = fopen("student.dat", "w");
    printf("Enter the Roll., Name & Test Mark:\n");
    scanf("%d%s%d", &rn, &name, &tm);
    printf("_______________________\n");
    fprintf(fptr, "%d\t\t%s\t\t\n", rn, name, tm);
    fclose(fptr);
    printf("Reading Data\n");
    fptr = fopen("student.dat", "r");
    fscanf(fptr, "%d%s%d", &rn, &name, &tm);
    printf("Roll Name Salary\n");
    printf("_________________________\n");
    printf("%d\t\t%s\t%d", rn, name, tm);
    fclose(fptr);
}


