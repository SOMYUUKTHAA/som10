#include<stdio.h>
int main()
{
int n,c;
printf("Enter an integer:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
printf("Number of digits:%d",c);
}
