#include<stdio.h>
int main()
{
    int a,b,count;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            count=i;
        }
    }
    printf("%d",(a*b)/count);
}