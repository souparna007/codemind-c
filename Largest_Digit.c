#include<stdio.h>
int main()
{
    int n,l=0,rem=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        if(rem>l)
        {
            l=rem;
        }
    }
    printf("%d",l);
}