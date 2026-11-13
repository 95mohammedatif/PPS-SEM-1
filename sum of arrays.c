#include<stdio.h>
int main()
{
int M[5],i,s=0;
printf("Enter 5 Values:");

for(i=0;i<5;i++)
scanf("%d",&M[i]);

for(i=0;i<5;i++)
{
    s=s+M[i];
}

printf("sum=%d",s);
}
