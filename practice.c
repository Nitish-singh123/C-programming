/*wap to sum of the 2 no.s*/

#include<stdio.h>
int sum(int,int);

void main(int a,int b)
{
	a=2,b=3;
	printf("\nThe sum of the two numbers is:%d",sum(a,b));
	return;
}

int sum(int x,int y)
{
	return x+y;
}

/* prints the table of any no.*/

#include<stdio.h>
void printTab(int);

void main(int n)
{
	printTab(n);
}

void printTab(int n)
{
	int i;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for( i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}	
 }

//use library function to calculate the square of any number
#include<stdio.h>
#include<math.h>
void calSq(int);

void main(int n)
{
	printf("\nEnter the number:");
	scanf("%d",&n);
	calSq(n);
}
void calSq(int n)
{
	int p=pow(n,2);
	printf("\nThe square of %d is:%d",n,p);
}

/*waf to calculate the area of circle,rectangle and square */
#include<stdio.h>
#define pi 3.141
int cirAr(int);
int recAr(int,int);
int sqAr(int);

void main()
{
	int r,l,b,s;
	printf("\nEnter the radius:");
	scanf("%d",&r);
	printf("\nEnter the length and breadth:");
	scanf("%d%d",&l,&b);
	printf("\nEnter the side:");
	scanf("%d",&s);
	cirAr(r); 
	recAr(l,b);
	sqAr(s);
	printf("\nArea of Circle is:%d",cirAr(r));
	printf("\nArea of Rectangle is:%d",recAr(l,b));
	printf("\nARea of Square is:%d",sqAr(s));
}

int cirAr(int r)
{
	return pi*r*r;
}
int recAr(int l,int b)
{
	return 2*(l+b);
}
int sqAr(int s)
{
	return s*s;
}


/* product of no.s*/

#include<stdio.h>
void Prod(float,float);

void main(float a,float b)
{
	a=2,b=3;
	Prod(a,b);
}
void Prod(float x,float y)
{
	printf("\nProduct of the two numbers is:%.2f",x*y);
}

/* swapping two no.s*/

#include<stdio.h>
void swap(int,int);

void main(int a,int b)
{
	printf("\nEnter the two no.s:");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("\n a=%d \t b=%d",x,y);
}

/* factorial of any non-negative no. */

#include<stdio.h>
void fact(int);
void main(int n)
{
	printf("\nEnter the no.:");
	scanf("%d",&n);
	fact(n);
}
void fact(int n)
{
	int i,f=1;
	if(n==0)
	printf("Factorial=1");
	else
	{
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		printf("\nFactorial of %d is:%d",n,f);
	}
}

/* Reverse any no.*/

#include<stdio.h>
void rev(int);
void main(int n)
{
	printf("\nEnter the no.:");
	scanf("%d",&n);
	rev(n);
}
void rev(int n)
{
	int r,rev=0;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("\nReversed no. is:%d",rev);
}

/* checking whether the no. is palindrome or not */

#include<stdio.h>
void pal(int);
void main(int n)
{
	printf("\nEnter the no.:");
	scanf("%d",&n);
	pal(n);
}
void pal(int n)
{
	int r,rev=0,prev=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(prev==rev)
	printf("%d is Palindrome no.",prev);
	else
	printf("%d is not Palindrome no.",prev);
}

/* Armstrong or not */

#include<stdio.h>
void arm(int);
void main(int n)
{
	printf("\nEnter the no.:");
	scanf("%d",&n);
	arm(n);
}
void arm(int n)
{
	int r,arm=0,prev=n;
	while(n!=0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if(prev==arm)
	printf("%d is Armstrong no.",prev);
	else
	printf("%d is Not armstrong no.",prev);
}

/* calculate  power of x^y */

#include<stdio.h>
void Pow(int,int);
void main()
{
	int x,y;
	printf("\nEnter the two no.s:");
	scanf("%d%d",&x,&y);
	Pow(x,y);
}
void Pow(int x,int y)
{
	int w=y,z=1;
	while(y!=0)
	{
		z=z*x;
		y--;
	}
	printf(" \nPower of %d raise to the %d is:%d",x,w,z);
}

/* sorting of n numbers */

#include<stdio.h>
void sort(int arr[100],int n);

void main(int arr[100],int n)
{
	int i,j,temp;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	
	printf("\nEnter the no.s one by one:");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	return;
}
void sort(int arr[100],int n) 
{
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("...Ascending order...");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}

/* Recursion (recursive function) */
/* factorial of positive no.s */
#include<stdio.h>
int fact(int);
void main(int n)
{
	printf("\nEnter the no.:");
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


/*fibonacci series*/

#include<stdio.h>
int fib(int);
void main(int t)
{
	int i;
	printf("\nEnter the no. of terms:");
	scanf("%d",&t);
	printf("\nFibonacci Series:");
	for(i=0;i<t;i++)
	{
		printf("%d ",fib(i));
	}
}

int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}

/* structure and union */

/* wap in c to input n employees details like(id,name,post,salary)and display
them in proper format */

#include<stdio.h>
struct employee{
	int id;
	char name[50];
	char post[50];
	float salary;
}emp[5];

void main()
{
	int i,n=5;
	printf("Enter the Id,name post and salary of 5 employees:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%s%f",&emp[i].id,&emp[i].name,&emp[i].post,&emp[i].salary);
	}
	
	printf("\n....................\n");
	printf("Id    Name    Post   Salary\n");
	for(i=0;i<n;i++)
	{
//		if(emp[i].salary>50000)
	   printf("%d\t%s\t%s\t%f\n ",emp[i].id,emp[i].name,emp[i].post,emp[i].salary);	
	}
}


/* wap in c to input 5 stds details(roll,name,sub,mark),calculate the average 
marks and display failed stds */

#include<stdio.h>
struct student{
	int roll;
	char name[50];
	char sub[50];
	float mark;
}std[5];

void main()
{
	int i,n=5,total=0;
	float avg;
	printf("Enter the roll,name ,sub and marks of 5 stds:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%s%f",&std[i].roll,&std[i].name,&std[i].sub,&std[i].mark);
	}
	
	for(i=0;i<n;i++)
	{
		total=total+std[i].mark;
		avg=total/n;
	}
	printf("Average marks is:%.2f\n",avg);

	printf("\n....Failed students....\n");
	printf("Roll   Name   Subject   Marks\n");
	for(i=0;i<n;i++)
	{
		if(std[i].mark<40)
		printf("%d\t%s\t%s\t%f\n",std[i].roll,std[i].name,std[i].sub,std[i].mark);	
	}
	printf("\n.....................\n");
}


/* wap in c to input 3 employee details(id,name and salary) and give bonus of 20%
to salary holders whose salary is more than 100000 and print the details */

#include<stdio.h>
struct employee{
	int id;
	char name[50];
	float salary;
}emp[3];

void main()
{
	int i,n=3;
	printf("\nEnter Id,name and salary of 3 employees:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%f",&emp[i].id,&emp[i].name,&emp[i].salary);
	}
	
	printf("\n....Employee Details....\n");
	printf("Id   Name  Salary\n");
	for(i=0;i<n;i++)
	{
		if(emp[i].salary>100000)
		emp[i].salary=emp[i].salary+0.2*emp[i].salary;
		printf("%d\t%s\t%f\n",emp[i].id,emp[i].name,emp[i].salary);
	}printf("\n........................\n");	
}

/* Pointers */

#include<stdio.h>
void main()
{
	int x=5;
	int *p;
	p=&x;
	*p=*p+5;
	printf("\nThe value of x is:%d",x); //x=10
}


/* swapping of two no.s */

#include<stdio.h>
void swap(int *a,int *b);

void main(int a,int b)
{
	printf("\nEnter the two no.s:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n a=%d and b=%d\n",a,b);
}
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}


/* File handling in C (have to do separately)*/

/* create a file and store id and salary of an employee */
#include<stdio.h>
struct employee{
	int id;
	float salary;
}emp;
void main()
{
	int *fp;
	fp=fopen("emp.txt","w");
	printf("\nEnter id and salary of an employee:");
	scanf("%d%f",&emp.id,&emp.salary);
	fprintf(fp,"Id=%d \n salary=%f",emp.id,emp.salary);
	fclose(fp);
}


/* wap in c to store 5 employee details having fields(id,name,salary) in a file 
 named"emp.txt */

#include<stdio.h>
struct employee{
	int id;
	char name[50];
	float salary;
}emp[5];

void main()
{
	int *fp,i,n=5;
	fp=fopen("emp.txt","w");
	printf("\nEnter the details of 5 employees\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the details of employee %d:\n",i+1);
		printf("\n Enter Id,name and salary:\n");
		scanf("%d%s%f",&emp[i].id,&emp[i].name,&emp[i].salary);
	}
	
	printf("ID   Name   Salary \n");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"Id=%d \n Name=%s \n Salary=%f\n",emp[i].id,emp[i].name,emp[i].salary);
	}
	fclose(fp);
}


/* wap in c to input 5 stds details having(id,name,mark) and store it in a file
"std.txt",also count and display stds who are passes.*/

#include<stdio.h>
struct student{
	int id;
	char name[50];
	float mark;
}std[5];

void main()
{
	int *fp,i,n=5,c=0;
	fp=fopen("std.txt","w");
	printf("Enter the details of 5 students\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the details of std %d:\n",i+1);
		printf("Enter id,name and mark:");
		scanf("%d%s%f",&std[i].id,&std[i].name,&std[i].mark);	
	}
	
	printf("\n....Student Details....\n");
	printf("ID  NAME  MARKS\n");
	for(i=0;i<n;i++)
	{
		if(std[i].mark>40)
		{
			c++;
		}
		fprintf(fp,"%d\t%s\t%f\n",std[i].id,std[i].name,std[i].mark);
		printf("Pass stds=%d\n",c);		
	}
}




















