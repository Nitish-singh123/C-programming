#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

int i,j,num[50],n,temp;
printf("Enter the size of array:");
scanf("%d",&n);

printf("Enter the num one by one:");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(num[i]>num[j])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }

}
printf("....Ascending order are as....\n");
for(i=0;i<n;i++)
printf("%d\n",num[i]);
getch();



int a[3][3],b[3][3],c[3][3],i,j;
printf("Enter the elements of matrix A:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the elements of matrix B:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
}

printf("sum of two matrix are \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
getch();


char s1[20],s2[20];
int ch;
printf("\n\n.......Menu.....\n\n");
printf("1.string length\n2.string uppercase\n3.string lowercase\n");
printf("4.string reverse\n5.string copy function\n6.string concatenate\n");
printf("7.string compare\n\n\n...End of Menu...\n");

printf("Enter your choice from menu only:");
scanf("%d",&ch);

printf("\nEnter 1st string and 2nd string in uppercase:\n");
scanf("%s%s",&s1,&s2);

if(ch<=0)
printf("\nYou have choosen invalid option:%d plz enter to retry",ch);

else
switch(ch)
{
    case 1:printf("the length of 1st string is:%d",strlen(s1));
    break;
    case 2:printf("the uppercase of  string is:%s",stru(s1));
    break;
    case 3:printf("the lowercaseof 3rd string is:%s",strl(s2));
    break;
    case 4:printf("the reverse of the  string is:%s",strrev(s2));
    break;
    case 5:printf("copied value of the string 1 in string 2 is:%s",strcpy(s2,s1));
    break;
    case 6:printf("string concatenation is:%s",strcat(s1,s2));
    break;
    case 7:printf("string comparision result\n");
 
    if(strcmp(s1,s2)==0)
    printf("strings are equal");

    else
    printf("strings are not equal");
    break;

    default:
    printf("...please choose only upto 7 sorry\n");
    break;
}
getch();
}



#include<stdio.h>
int main()
{
    int i,a[i],b,c;
    printf("\nEnter 10 float numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    b=a[0];
    for(i=1;i<10;i++)
    {
        if(b<a[i])
        {
             b=a[i];
             printf("\n Smallest no.is %d",b);
        }
    }
    c=a[0];
    for(i=1;i<10;i++)
    if(c>a[i])
    {
        c=a[i];
        printf("\n Greatest no. is %d",c);
    }
    return 0;
    }

// wap to read the values of the structure elements and print it on the screen.
#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float height;
} per;

int main()
{
    printf("Enter the name,age and height:");
    scanf("%s%d%f", &per.name, &per.age, &per.height);
    printf("\n Details of the person\n");
    printf("Name  Age  Height \n");
    printf("%s\t%d\t%f\n", per.name, per.age, per.height);
}
