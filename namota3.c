#include<stdio.h>
int main()
{
    int n=10;
    int m=0;
    int i=1;
    for(i=1;i<=10;i++)
    {
       m=m+n;
       printf("%d*%d=%d\n",n,i,m);
    }
        return 0;
}
