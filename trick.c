// wap of the following

#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    printf("%d\t",i);
}

#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=99;i+=2)
    {
        printf("%d\t",i);
    }
}

#include <stdio.h>
#include <math.h>
void main()
{
    // int p,i=2;
    // p=pow(i,10);
    // for(i=2;i<=p;i=i*2)
    // printf("%d\t",i);

    int p, i = 2;
    while (i <= p)
    {
        printf("%d\t", i);
        i = i * 2;
    }
}

#include<stdio.h>
void main()
{
    int n,i=2;
    printf("Enter the limit:");
    scanf("%d",&n);
    while(i<=n*2)
    {
        printf("%d\t",i);
        i+=2;
    }

}

#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\t",i*i*i);
        i++;
    }
}

#include<stdio.h>
#include<math.h>
void main()
{
    int i=5,p;
    p=pow(i,9);
    for(i=5;i<=p;i=i*25)
    printf("%d\t",i);
}

#include<stdio.h>
void main()
{
    float i=100;
    while(i>85)
    {
        printf("%.1f\t",i);
        i=i-1.5;
    }
}

#include<stdio.h>
#include<math.h>
void main()
{
    int p,i=3;
    p=pow(i,10);
    while(i<=p)
    {
        printf("%d\t",i);
        i=i*3;
    }
}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",1);
        }printf("\t");
    }
}

#include<stdio.h>
void main()
{
    int i;
    for(i=-25;i<=70;i+=5)
    {
        printf("%d\t",i);
    }
}

#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",3*i*i);
    }
}

#include<stdio.h>
#include<conio.h>
void main()
{   int n;
    float i=1,j=0,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(j=0;j<=n;j++)
   {
    if(j==0)
    continue;
    k=i/j;
    printf("%.2f\t",k);
   }
}

#include<stdio.h>
#include<math.h>
void main()
{
    int p,i=2,j;
    for(j=1;j<=100;j++)
    {
        // printf("%d\t",i*i);
         p=pow(j,i);
         printf("%d\t",p);
    }
}

#include<stdio.h>
#include<math.h>
void main()
{
    int i,p;
    for(i=2;i<=100;i+=2)
    {
        p=pow(i,3);
        printf("%d\t",p);
    }
}

#include<stdio.h>
#include<math.h>
void main()
{
    float i=2,j,p;
    float k;
    for(j=1;j<=10;j++)
    {
        p=pow(j,i);
        k=i/p;
        printf("%.2f\t",k);
    }
}

#include<stdio.h>
void main()
{
    float i,j,k,l;
    for(i=1;i<=20;i++)
    {
        for(j=2;j<=20;j++)
        {
            k=i/j;
            printf("%.2f\t",k);
        }
    }
}

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n*2;i+=2)
    {
        printf("%d\t",i);
    }
}

#include<stdio.h>
void main()
{
    int n,i,j,f=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        for(j=i;j>i-1;j--)
        {
            f=f*j;
            printf("%d\t",f);
        }
    }

}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }printf("\n");
    }
}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("5 ");
        }printf("\n");
    }
}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }printf("\n");
    }
}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("1 ");
        }printf("\n");
    }
}

#include<stdio.h>
#include<math.h>
void main()
{
    float i,j,k,l,p;
    for(i=2;i<=100;i++)
    {
        k=pow(i,2);
        for(j=3;j<=101;j++)
        {
            l=pow(j,2);
            p=k/l;
            printf("%.3f\t",p);
        }
    }
}

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("5");
        }printf(", ");
    }printf("\n");
}

#include<stdio.h>
void main()
{
    int i,n=20;
    for(i=1;i<=n;i++)
    {
     printf("%d/%d",i,i+1);
     if(i<n)
     printf(", ");
    }
}

#include<stdio.h>
void main()
{
    int n=100,i;
    for(i=2;i<=n;i++)
    {
        printf("%d^2/%d^2",i,i+1);
        if(i<n)
        printf(", ");
    }

}

#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d%c",i,'!');
        if(i<n)
        printf(", ");
    }
}

/*wap to solve quadratic equation if value of a,b and c are given
below*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a=2,b=4,c=4,d,r1,r2;
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("Thr roots are real and equal\n");
        r1=r2=-b/(2*a);
        printf("root 1= %f and root 2= %f\n",r1,r2);
    }
    else if(d>0)
    {
        printf("Roots are real and unequal\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root 1= %f and root 2= %f\n",r1,r2);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
    return 0;
}

#include<stdio.h>
void main()
{
    float a=1,d=2,n=10,sn;
    sn=(n/2)*(2*a+(n-1)*d);
    printf("Sum=%f",sn);
}

#include<stdio.h>
int main()
{
   float i,n=11,sum=0;
    for(i=2;i<=n;i++)
    {
        sum+=(1/i);
    }
    printf("total_sum=%f",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n=10;
    printf("1+X+");
    for(i=2;i<n;i++)
    {
        printf("%c%d",'X',i);
        if(i<n-1)
        {
        printf("+");
        }
    }
    return 0;
}

#include<stdio.h>
void main(){
    int i;
    double a=0.1,b=0.01;
    for(i=1;i<=6;i++){
        printf("%.6f",a);
        a+=b;
        b/=10;
        if(i<6){
            printf(", ");
        }
    }
}
