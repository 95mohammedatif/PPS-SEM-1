#include<stdio.h>
    int main ()
{
    int i,j,N;
 printf("Enter the value of N: ");
 scanf("%d",&N);

 printf("Square pattern of size %d is \n");
 for(i=1;i<=N;i++)
 {
     for(j=1;j<=N;j++)
     {

     printf("*");
     }
     printf("\n");
}
return 0;
}
