#include<stdio.h>
int main()
{
    int a,b,n,r;
    scanf("%d %d",&a,&b);
    if(a<b && b-a>=2)
    {
        for(int i=a;i<b;i++)
        {
            if(a!=i)
            {
                n=i*i;
                r=i*i*i;
                printf("%d %d %d
",i,n,r);
            }
        }
    }
}