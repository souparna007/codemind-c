#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d %d",&n,&j);
    for(int i=1;i<=j;i++)
    {
        printf("%d x %d = %d",n,i,n*i);
    }
}
