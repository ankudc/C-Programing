
#include<stdio.h>
int main()
{
    int ara[30];
    int i,j,n,temp;
    printf("Enter the number \n:");
    scanf("%d",&n);
    printf("Enter the value of element \n:");
    for(i=0;i<n;i++)
    scanf("%d",&ara[i]);
          if(ara[i]>ara[j])
    {
        temp=ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;
}
