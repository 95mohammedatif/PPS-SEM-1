#include<stdio.h>
int main()
{
    int uid,upwd,sid,spwd;

    sid=123;
    spwd=456;

printf("Enter uid,upwd in Numbers");
scanf("%d %d",&uid,upwd);
if ((uid==sid)&&(upwd==spwd));
printf("Login Successful");

else printf("Invalid Id or Password");
    return 0;
}
