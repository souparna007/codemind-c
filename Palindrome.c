#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int c=n;
    while(n>0)
    {
        int r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(c==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}