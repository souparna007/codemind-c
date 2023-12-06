#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    //scanf("
%d %d %d",&n,&m,&k);
    for(int i=1;i<=t;i++)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int a=n+k;
        if(a<=m)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        
    }
}