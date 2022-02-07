#include<stdio.h>
int main()
{
    int n,r,pd=1,sd=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pd=pd*r;
        sd=sd+r;
        n=n/10;
    }
    if(pd==sd)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}