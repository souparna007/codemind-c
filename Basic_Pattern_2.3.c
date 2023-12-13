#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            int b=64+a;
            char c=(char)b;
            printf("%c ",c);
            a++;
        }
        printf("
");
    }
}