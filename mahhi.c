// /* Waf to find the sum of any two no.s*/
#include<stdio.h>
int sum(int ,int );//function prototype

void main(){
    int a,b;
    printf("Enter the two no.:");
    scanf("%d%d",&a,&b);
    int s= sum(a,b);/*function call/ call by reference/ passing actual parameter*/
    printf("Sum of the two numbers is:%d",s);
}

int sum(int x,int y){ /*function definition/ passing formal parameter */
    return x+y;
}

// /*Waf to calculate area of a circle */
#include<stdio.h>
#define pi 3.14
void circleArea();

int main(){
    circleArea();
    return 0;
}

void circleArea(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Area of circle is:%f",pi*r*r);
}

// /*Waf to find the factorial of a given no.*/
#include<stdio.h>
void fact();

int main(){
    fact();
    return 0;
}
void fact(){
    int n,f=1;
    printf("Enter any positive number:");
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial=%d",f);
}

/* waf to find the reverse of a given number*/
#include<stdio.h>
void rev();

int main(){
    rev();
    return 0;
}

void rev(){
int n,r,rev=0;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("\n Reverse number=%d",rev);
}

/* waf to check given number is palindrome or not*/
#include<stdio.h>
void pal();

int main(){
    pal();
    return 0;
}

void pal(){
int n,r,rev=0,prev;
printf("Enter the number:");
scanf("%d",&n);
prev=n;
while(n>0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
if(prev==rev)
printf("%d is palindrome number",prev);
else
printf("%d is not palindrome",prev);
}

/*waf to check whether the no. is Armstrong or not*/
#include<stdio.h>
void arm();

int main() {
    arm();
    return 0;
}

void arm(){
int n,r,arm=0,prev;
printf("Enter the number:");
scanf("%d",&n);
prev=n;
while(n>0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
if(prev==arm)
printf("%d is Armstrong number",prev);
else
printf("%d is not Armstrong",prev);
}

//factorial using while loop
#include<stdio.h>
void fact();

int  main() {
    fact();
    return 0;
}

void fact(){
    int n,i=1,f=1;
    printf("Enter the number to find factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("\nFactorial is:%d",f);
}

//waf to find the cube of given number
#include<stdio.h>
void cube();

int main(){
    cube();
    return 0;
}

void cube(){
    int n;
    printf("Enter any non zero number:");
    scanf("%d",&n);
    printf("Cube of the number is:%d",n*n*n);
}

/*program to find the area of circle*/
#include<stdio.h>
#define pi 3.14
float circleArea(float r);

int main(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    float area=circleArea(r);
    printf("Area of the circle is:%.2f",area);
    return 0;
}

float circleArea(float r){
    return pi*r*r;
}

/*program to find the sum of two numbers by no argument no return type*/
#include<stdio.h>
void sum();

int main(){
    sum();
    return 0;
}
void sum(){
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum of the two numbers is:%d",a+b);
}

/*program to find the sum of two numbers by with arguments and no return value*/
#include<stdio.h>
void sum(int a,int b);

int main(){
    int a=5,b=6;
    sum(a,b);
    return 0;
}
void sum(int a,int b){
    int result=a+b;
    printf("Sum of the two numbers is:%d",result);
}

/*program to find sum of two numbers by with no arguments with return value*/
#include<stdio.h>
int sum();

int main(){
    int result=sum();
    printf("sum of the two no.s is:%d",result);
    return 0;
}
int sum(){
    int a=4,b=5;
    int result=a+b;
    return result;
}

/*program to find the sum of two numbers by with arguments with return value*/
#include<stdio.h>
int sum(int a,int b);

int main(){
    int a=3,b=2;
    int result=sum(a,b);
    printf("Sum of the two numbers is:%d",result);
    return 0;
}

int sum(int x,int y){
    int result=x+y;
    return result;
}

#include<stdio.h>
int sum(int ,int);
int main(){
    int a,b;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    printf("the sum of two no.s is:%d",sum(a,b));
    return 0;
}

int sum(int x, int y){
    int sum=x+y;
    return sum;
}

#include<stdio.h>
void main()
{
    int i,j,temp=0,size,n;
    printf("Enter the aray list one by one:");
    scanf("%d",&size);
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(n[i]>n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d",n[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d",n[i]);
    }
}

/*wap to swap any two numbers with arguments with return value using function*/
#include<stdio.h>
int swap(int,int);
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
int swap(int x,int y){
   int temp=x;
   x=y;
   y=temp;
   printf("a=%d and b=%d",x,y);
   return 0;
}

/* wap to sort n numbers in ascending order*/
#include<stdio.h>
int sort(int a[100],int n);
int main(){
int a[100],n,i,j,temp;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the numbers one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,n);
printf("....Ascending order are as....\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}

int  sort(int a[100],int n){
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
return 0;
}

#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("Number of digits is:%d", count);
}
