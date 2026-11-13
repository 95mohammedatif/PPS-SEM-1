#include<stdio.h>
int main()
{
    int M[5],i,key,s=0;
    printf("Enter 5 Values:");
    for(i=0;i<5;i++)
    scanf("%d",&M[i]);
    printf("Enter Key Value To Be Searched");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
    if (key==M[i])
    {
        s=1;
        break;
       }
    }
if(s==1)
    printf("Element found at %d",i+1);
else
    printf("Element not Found");

}
