#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d %d",&a,&b);
    while(b>=a)
    {
        printf("%d ",b);
        b++;
    }
}