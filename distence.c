#include<stdio.h>
int main()
{
    double t,v,s;
    printf("Enter the Time : ");
    scanf("%lf",&t);
    printf("Enter the velocity :");
    scanf("%lf",&v);
    s=2*v*t;
    printf("Distance=%.2lf\n",s);
        return 0;
}
