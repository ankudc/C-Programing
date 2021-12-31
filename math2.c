
#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("Enter the value of a1:");
    scanf("%lf",&a1);
     printf("Enter the value of a2:");
    scanf("%lf",&a2);
     printf("Enter the value of b1:");
    scanf("%lf",&b1);
     printf("Enter the value of b2:");
    scanf("%lf",&b2);
     printf("Enter the value of c1:");
    scanf("%lf",&c1);
     printf("Enter the value of c2:");
    scanf("%lf",&c2);
    d=a1*b2-a2*b1;
    if((int) d==0)
    {
        printf("value of x and y can not determined\n:");
    }
    else
    {
        x=(b2*c1-b1*c2)/d;
        y=(a1*c2-a2*c1)/d;
        printf("x=%0.2lf,y=%0.2lf\n",x,y);
    }
        return 0;
}
