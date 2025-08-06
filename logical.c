#include<stdio.h>
#include<conio.h>
int sum(int,int);
int s;
void main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum=%d",s);
    getch();
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}

//same program but in short way
// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("Enter the two numbers:");
//     scanf("%d%d",&a,&b);
//     printf("\nSum of two numbers is:%d",a+b);
// }

//wap in c to print Hello world
// #include<stdio.h>
//  void main()
// {
//     printf("Hello World");
// }

//wap in c to accomplish all the arithmetic operators
// #include<stdio.h>
// void main()
// {
//     int a,b,sum,sub,mul,div,mod;
//     printf("Enter the two numbers:");
//     scanf("%d%d",&a,&b);
//     printf("\nSum=%d",a+b);
//     printf("\nSub=%d",a-b);
//     printf("\nMul=%d",a*b);
//     printf("\nDiv=%d",a/b);
//     printf("\nMol=%d",a%b);
// }

//find the output of the given program
// #include<stdio.h>
// void main()
// {
//     float a,b,c,x,y,z;
//     a=9;b=12;c=3;
//     x=a-b/3+c*2-1;
//     y=a-b/(3+c)*(2-1);
//     z=a-(b/(3+c)*2)-1;
//     printf("x=%f\n",x);
//     printf("x=%f\n",y);
//     printf("x=%f\n",z);
// }

/* program with the use of getchar() and putchar()*/

// #include<stdio.h>
// void main()
// { char ch;
// printf("Enter a character:");
// ch=getchar();
// printf("Character is\t:");
// putchar(ch);
// }


//Example
// #include<stdio.h>
// void main()
// {
//     int a;
//     float b;
//     char x[10];
//     printf("Enter integer,float_value and string:");
//     scanf("%d%f%s",&a,&b,&x);
//     printf("\ninteger=%d\nfloat_value=%f\nString=%s",a,b,x);
// }


//Examples with the use of gets and puts 
// #include<stdio.h>
// void main()
// {
//     char name[20];
//     printf("Enter name:");
//     gets(name);
//     puts(name);
// }

// #include<stdio.h>
// void main()
// {
//     char name[20];
//     printf("Enter name:");
//     gets(name);
//     puts(name);
//     puts("Thank You");
// }

//wap in c to find area of circle 
// #include<stdio.h>
// #define pi 3.14
// void main()
// {
//     float r;
//     printf("Enter the radius:");
//     scanf("%f",&r);
//     printf("\nArea of circle is:%f",pi*r*r);
// }

//wap inc to find the area and perimeter of rectangle
// #include<stdio.h>
// void main()
// {
//     float l,b;
//     printf("Enter the length and breadth:");
//     scanf("%f%f",&l,&b);
//     printf("\nAreaof rectangle is:%f",l*b);
//     printf("\nPerimeter of rectangle is:%f",2*(l+b));
// }

//wap in c to find area of triangle in which three sides are given
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     float a,b,c,s;
//     printf("Enter three sides:");
//     scanf("%f%f%f",&a,&b,&c);
//     s=(a+b+c)/2;
//     printf("\nArea of triangle is:%f",sqrt(s*(s-a)*(s-b)*(s-c)));
// }

//wap in c to read a 4 digit number then find sum of 1st & last digit
// #include<stdio.h>
// void main()
// {
//     int n,r,s;
//     printf("Enter four digit number:");
//     scanf("%d",&n);
//     r=n/1000;
//     s=n%10;
//     printf("\n Sum f first and last digit is:%d",r+s);
// }

/* wap in c to ask no. of quantities and price for per quantity then
find the total price*/
// #include<stdio.h>
// void main()
// {
//     int qty,price;
//     printf("Enter the no. of quantity and price:");
//     scanf("%d%d",&qty,&price);
//     printf("\nTotal_price=%d",qty*price);
// }

/*wap to read mark price of radio and find discount which is 30% of 
the mark price then find actual selling price if radio */
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter mark_price of the radio:");
//     scanf("%f",&a);
//     printf("\nDiscount amount=%f",0.3*a);
//     printf("\nSelling_price=%f",a-0.3*a);
// }


/* wap to read basic salary then find tax and allowance,
tax is 20%of basic salary and allowance is 40% of the 
basic salary.Also find out net salary*/
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter basic_salary:");
//     scanf("%f",&a);
//     printf("\nTax_amount=%f",0.2*a);
//     printf("\nAllowance=%f",0.4*a);
//     printf("\nNet salary=%f",0.2*a-0.4*a);
// }

/* Input cost price and selling price of watch then 
find profit percentage*/
// #include<stdio.h>
//  void main()
// {
//     float a,b;
//     printf("Enter cost_price and selling_price:");
//     scanf("%f%f",&a,&b);
//     printf("\nProfit percentage=%f",((b-a)/a)*100);
// }

/* wap to read the age of three people 
find average age*/
// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("Enter age of three_people:");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("\nAverage_age=%d",(a+b+c)/3);
// }

/*wap to input roll no.,your college name and your name then
display*/
// #include<stdio.h>
// void main()
// {
//     int n;
//     char x[10];
//     char y[20];
//     printf("Enter Roll_no.,your college_name and your name:");
//     scanf("%d%s%s",&n,x,y);
//     printf("\nRoll_no=%d\nCollege_name=%s\nYour name=%s",n,x,y);
// }


//wap to convert meter into centimeter
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter the length in meter:");
//     scanf("%f",&a);
//     printf("\nThe length in centimeter is:%f",a*100);
// }

//wap to convert hour into minutes
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter the time in hour:");
//     scanf("%f",&a);
//     printf("\nThe time in minutes is:%f",a*60);
// }

//wap to convert rupees into dollars.
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter the money in rupees:");
//     scanf("%f",&a);
//     printf("\nThe capital in dollar is:%f",0.0143*a);
// }


/* wap in c to convert fahrenheit into centigrade scale*/
// #include<stdio.h>
// void main()
// {
//     float a;
//     printf("Enter the temperature in fahrenheit:");
//     scanf("%f",&a);
//     printf("\nTemperature in centigrade scale is:%f",(a-32)/1.8);
// }


//wap to convert feet into inch
// #include<stdio.h>
// void main()
// { int n;
// printf("Enter the length  in feet:");
// scanf("%d",&n);
// printf("\nThe length in inch is:%d",n*12);
// }


/* wap to find square,cube and square root of the given number*/
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int n,p,q,r;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     p=pow(n,2);
//     q=pow(n,3);
//     r=sqrt(n);
//     printf("\nSquare=%d\ncube=%d\nSquare_root=%d",p,q,r);
// }

//wap to solve two linear equation 
// #include<stdio.h>
// void main()
// {   float a1,b1,c1,a2,b2,c2,d,x,y;
//     printf("Enter the coefficients of 1st eq.s(a1,b1,c1):");
//     scanf("%f%f%f",&a1,&b1,&c1);
//     printf("Enter the coefficients of 2nd eq.s(a2,b2,c2):");
//     scanf("%f%f%f",&a2,&b2,&c2);
//     d=a1*b2-a2*b1;
//     if(d==0)
//     {printf("\nThe given eq.s has no solution");}
//     else
//     {   x=b1*c2-b2*c1;
//         y=a1*c2-a2*c1;
//         printf("The solution is:x=%f,y=%f\n",x,y);}}
    

/*wap to find the sum of X and Y where 
X=a^2+2ab+b^2 & Y=a^2+2ab+b^2 */
// #include<stdio.h>
// void main()
// {
//     int a,b,x,y,z;
//     x=a*a+2*a*b+b*b;
//     y=a*a-2*a*b+b*b;
//     z=x+y;
//     printf("\nThe sum of x and y is:%d",z);
// }

/* wap to input radius of circle then find circumference and area*/
// #include<stdio.h>
// #define pi 3.14
// void main()
// {   float r;
//     printf("Enter the radius:");
//     scanf("%f",&r);
//     printf("\nThe circumference of circle is:%f",2*pi*r);
//     printf("\nArea of circle is:%f",pi*r*r);
// }

/* wap to input four digit number then find its reverse*/
// #include<stdio.h>
// void main()
// {
//     int n,r,rev=0;
//     printf("Enter the four digit number:");
//     scanf("%d",&n);
//     while(n>0)
//    { r=n%10;
//     rev=rev*10+r;
//     n=n/10;
//    }
//     printf("\nReverse of the number is:%d",rev);
// }

/*The distance between two places is input through keyboard in meter
 then convert into centimeter and again converts into inch*/
//  #include<stdio.h>
//  void main()
//  {  float a;
//     printf("Enter distance between two places:");
//     scanf("%f",&a);
//     printf("\nDistance in centimeter=%f",a*100);
//     printf("\nDistance in inch=%f",a*39.37);
//  }

/* Now starts control structure*/
/*wap to check given number is greater than,equal to or less than 4*/
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if(n>4)
//     printf("%d is greater than 4",n);
//     else if(n<4)
//     printf("%d is less than 4",n);
//     else
//     printf("%d is equal to 4",n);
// }

/*wap to find greatest number between any two number using simple statement*/
// #include<stdio.h>
// void main()
// { 
//    int a,b;
//     printf("Enter the two numbers:");
//     scanf("%d%d",&a,&b);
//     if(a==b)
//     printf("%d is equal to %d\n",a,b);
//      if(a<b)
//     printf("%d is less than %d\n",a,b);
//     if(a>b)
//     printf("%d is greater than %d\n",a,b);
// }

/*wap to check given number is odd or even*/
// #include<stdio.h>
// void main()
// {
//     int n,r;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     if(n%2==0)
//     printf("%d is even number\n",n);
//     else
//     printf("%d is odd number\n",n);
// }

/* wap to check given number is positive, negative or zero*/
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     if(n>0)
//     printf("%d is positive number\n",n);
//     else if(n<0)
//     printf("%d is negative number\n",n);
//     else
//     printf("%d is zero\n",n);
// }

/*wap to find the greatest number among three numbers using
nested if statement*/
// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("Enter three numbers:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//         printf("%d is greater",a);
//         else
//         printf("%d is greater",c);
//     }
//     else{
//         if(b>c)
//         printf("%d  is greater\n",b);
//         else
//         printf("%d is greater\n",c);
//     }
// }


/*wap to input percentage then find division according to given conditions*/
// #include<stdio.h>
// void main()
// {
//     float p;
//     printf("Enter the percentage:");
//     scanf("%f",&p);
//     if(p>=80)
//     printf("Distinction\n");
//     else if(p>=60)
//     printf("1st division\n");
//     else if(p>=50)
//     printf("2nd division\n");
//     else if(p>=40)
//     printf("3rd division\n");
//     else
//     printf("Fail\n");
// }

/*wap to choose color by switch statement*/
// #include<stdio.h>
// void main()
// {
//     char ch;
//     printf("Enter your choice[r,w,b]:");
//     ch=getchar();
//     switch(ch)
//     {
//         case'r':printf("RED");
//         break;
//         case'w':printf("WHITE");
//         break;
//         case'b':printf("BLUE");
//         break;
//         default:
//         printf("UNKNOWN");
//     }
// }


//wap to choose 1-3 to demonstrate it
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter the number[1,2,3]:");
//     scanf("%d",&n);
//     switch(n)
//     {
//         case 1:printf("\nIt is 1!");
//         break;
//         case 2:printf("\nIt is 2!");
//         break;
//         case 3:printf("\nIt is 3!");
//         break;
//         default:
//         printf("\n Invalid number!");
//     }
// }
        
/*Demonstrate the switch case condition to input any two number then
find the following according to choice*/
// #include<stdio.h>
// void main()
// {   int ch;
//     float a,b;
//     printf("Enter any two number:");
//     scanf("%f%f",&a,&b);
//     printf("\n1.Multiply\n2.Divide\n3.Subtract\n4.Add\n");
//     printf("Enter your choice[1-4]:");
//     scanf("%d",&ch);
//     switch(ch)
//     {
//                 case 1:printf("\nThe result is:%f",a*b); 
//         break;
//                 case 2:printf("\nThe result is:%f",a/b);
//         break;
//                 case 3:printf("\nThe result is:%f",a-b);
//         break;
//                 case 4:printf("\nThe result is:%f",a+b);
//         break;
//         default:
//         printf("Invalid choice!");
//     }
// }

/*wap to find the followings,
1.Area of circle
2.Area of rectangle
3.Simple interest */
// #include<stdio.h>
// #define pi 3.14
// void main()
// {   int ch;
//     float r,l,b,p,q,s;
//     printf("\n1.Area of circle\n2.Area of rectangle\n3.Simple interest\n");
//     printf("Enter your choice:");
//     scanf("%d",&ch);
//     switch(ch)
//     {
//         case 1:
//         printf("Enter the radius:");
//         scanf("%f",&r);
//         printf("\nArea of circle is:%f",pi*r*r);
//         break;
//         case 2:
//         printf("Enter the length and breadth:");
//         scanf("%f%f",&l,&b);
//         printf("\nArea of rectangle is:%f",l*b);
//         break;
//         case 3:
//         printf("Enter principal,time and rate:");
//         scanf("%f%f%f",&p,&q,&s);
//         printf("\nSimple interest is:%f",(p*q*s)/100);
//         break;
//         default:
//         printf("Invalid choice!");
//     }
// }

/*Examples of switch statement using simple case and multiple case*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the choice:");
//     scanf("%d",&n);
//     switch(n)
//     {
//         case 1:
//         case 2:
//         printf("1 or 2");
//         break;
//         case 3:
//         case 4 :
//         printf("3 or 4\t");
//         case 5:
//         case 6:
//         printf("5 or 6\t");
//         printf("or maybe 3 or 4");
//         default:
//         break;
//     }
//     return 0;
// }

/*wap to read a positive number and calculates the sum of its digits*/
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter a positive number:");
//     scanf("%d",&n);
//     while(n!=0)
//     { 
//     sum=sum+n%10;
//     n=n/10;
//     }
//     printf("\nThe sum of its digits is:%d",sum);
//     return 0;
// }

/*wap using nested while loop*/
// #include<stdio.h>
// int main()
// {
//     int i,j,m;
//     i=1;
//     while(i<=5)
//     {
//         j=1;
//         while(j<=5)
//         {
//             m=i*j;
//             printf("%d\t",m);
//             j++;
//         } 
//         i++;
//         printf("\n");
//     }
//     return 0;
// }

//wap to display hello world 10 times
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     do{
//         printf("HELLO WORLD!\n");
//         i++;
//     }while(i<=10);
//     return 0;
// }


//Example for nested for loop
// #include<stdio.h>
// void main()
// {
//     int i,j,m;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             m=i*j;
//             printf("%d\t",m);
//         }printf("\n");
//     }
// }


/* wap to print hello world 10 times using for loop*/
// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     printf("HELLO WORLD\n");
// }

/*prints 0 to 100*/
// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=0;i<=100;i++)
//     printf("%d\n",i);
// }

//program to display multiplication table
// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             k=i*j;
//             printf("%d\t",k);
//         }printf("\n");
//     }
// }


//Use of break statement
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=2;i++)
//     {
//         for(j=1;j<=2;j++)
//         {
//             if(i==j)
//             break;
//             printf("%d\t%d\n",i,j);
//         }printf("\n");
//     }
// }

//Use of continue statement
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=2;i++)
//     {
//         for(j=1;j<=2;j++)
//         {
//             if(i==j)
//             continue;
//             printf("%d\t%d\n",i,j);
//         }printf("\n");
//     }
// }


//example of using break statement
// #include<stdio.h>
// void main()\
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         if(i>=5)
//         break;
//         printf("%d\t",i);
//     }
// }


//Use of continue statement
// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         if(i>=5)
//         continue;
//         printf("%d\t",i);
//     }
// }


//Use of goto statement
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if(n%2==0)
//     goto even;
//     else 
//     goto odd;
//     even:
//     printf("%d is even number",n);
//     return ;
//     odd:
//     printf("%d is odd number",n);
// }


// Now program examples
/*wap to find the factorial of a given number*/
// #include<stdio.h>
// void main()
// {
//     int n,i,f=1;
//     printf("Enter a number to find factorial:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     printf("\nFactorial=%d",f);
// }


/*wap to check given number is prime or composite*/
// #include<stdio.h>
// void main()
// {
//     int n,i,r;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(i=2;i<n/2;i++)
//     {
//         r=n%2;
//         if(r==0)
//         {
//          printf("\n%d is composite number",n);
//          break;
//         }
//     }

//         if(r!=0)
//         printf("\n%d is prime number",n);
// }


//wap to find the reverse of a given number
// #include<stdio.h>
// void main()
// {
//     int n,r,rev=0;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     while(n!=0)
//     {  r=n%10;
//        rev=rev*10+r;
//        n=n/10;
//     }
//     printf("\nReverse number=%d",rev);
// }

/*wap to check given number is palindrome or not*/
// #include<stdio.h>
// void main()
// {
//     int n,prev,r,rev=0;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     prev=n;
//     while(n!=0)
//     {
//         r=n%10;
//         rev=rev*10+r;
//         n=n/10;
//     }
//     if(prev==rev)
//     printf("%d is palindrome number",prev);
//     else
//     printf("%d is not palindrome number",prev);
// }

//wap to display n terms of fibonacci series
// #include<stdio.h>
// void main()
// {
//     int a=0,b=1,c,n,i;
//     printf("Enter the limit:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("%d\n",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }

//wap to display the following
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }printf("\n");
//     }
//     }



//wap to find the fibonacci of the given number
// #include<stdio.h>
// void main()
// {
//     int n,i,a=0,b=1,c;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }



//wap to find factorial of the given number
// #include<stdio.h>
// void main()
// {
//     int n,i,f=1;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//          printf("factorial=%d",f);
// }


// #include<stdio.h>
// void main()
// {
//     int n,i,r;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(i=2;i<n/2;i++)
//     {
//         r=n%2;
//         if(r==0)
//         {
//             printf("%d is Not",n);
//             break;
//         }
//     }
//         if(r!=0)
//      printf("%d is prime number",n);
// }

//Display a multiplication of 1 to 10
// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for(i=1;i<=10;i++)
//     {
//         for(j=1;j<=10;j++)
//         {
//             k=i*j;
//             printf("%d\t",k);
//         }printf("\n");
//     }
// }


//wap to display multiplication of 2
// #include<stdio.h>
// void main()
// {
//     int i,n=2;
//     for(i=1;i<=10;i++)
//     {
//         printf("%dx%d=%d",n,i,n*i);
//         printf("\n");
//     }
// }


//wap to display all the odd numbers between 100 to 200
// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=101;i<=200;i+=2)
//     {
//         printf("%d",i);
//         if(i<199)
//         printf(", ");
//     }
// }


//wap to display all the prime numbers between 500 to 600
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     int l=500,u=600;
//     for(i=l+1;i<u;i++)
//     {
//         for(j=2;j<u;j++)
//         if(i%j==0)
//         break;
//         if(j==i)
//         printf("%d ", i);
//     }
// }




// #include<stdio.h>
// void main()
// {
//     int i;
//     float mark[7];
//     float total=0;
//     int failed=0;
//     float per;
//     printf("Enter the marks of 7 different subjects\n");
//     for(i=0;i<7;i++){
//         printf("Enter the marks of sub:%d\n",i+1);
//         scanf("%f",&mark[i]);
//         if(mark[i]<35){
//             failed=1;
//         }
//         total+=mark[i];
//     }
//     per=total/7;
//     if(failed)
//     {printf("Result:failed marks less than 35 in one or more subjects\n");}
//     else if(per>=60)
//     {printf("Result:first division\n");}
//     else if(per>=45)
//     {printf("Result:second division\n");}
//     else if(per>=35)
//     {printf("Result:third division\n");}
//     else
//     {printf("Result:failed_overall percentage is less than 35\n");}
// }

//wap to find the sum of the square of digits of a given number
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("Enter the number:\n");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//     r=n%10;
//     sum=sum+r*r;
//     n=n/10;
//     }
//     printf("Sum of the square of its digits is %d\n",sum);
// }


//wap to find the sum of 23,43 and 12 of a given number 234312
// #include<stdio.h>
// void main()
// {
//     int n=234312;
//     int a,b,p,q,r,x,y,z;
//     {
//         a=n/100000;
//         r=n%100000;
//         b=r/10000;
//         r=r%10000;
//         x=a+b*10;

//         p=r/1000;
//         r=r%1000;
//         q=r/100;
//         r=r%100;;
//         y=p+q*10;

//         z=r;
//         printf("sum=%d",x+y+z);
//     }
// }



//wap to find the product of digits og given number
// #include<stdio.h>
// void main()
// {
//     int n,r,p=1;
//     printf("Enter the number:\n");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         p=p*r;
//         n=n/10;
//     }
//     printf("Product=%d",p);
// }


//wap to find the average of n natural numbers
// #include<stdio.h>
// void main()
// {
//     float n;
//     printf("Enter the number limit:");
//     scanf("%f",&n);
//     printf("Average=%.2f",(n+1)/2);
// }

//wap to find the HCF of the given number
