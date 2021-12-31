#include<stdio.h>
int main()
{
    double loan_amount,total_amount ,interest_rate,number_of_years,monthaly_amount;
    printf("Enter the lone amount :");
    scanf("%lf",&loan_amount);
    printf("Enter the interest rate:");
    scanf("%lf",&interest_rate);
    printf("Enter the number of years:");
    scanf("%lf",&number_of_years);
    total_amount=loan_amount+loan_amount*interest_rate*number_of_years/100.00;
    monthaly_amount=total_amount/(number_of_years*12);
    printf("Total amount :%.2lf\n",total_amount);
    printf("Monthaly amount:%.2lf\n",monthaly_amount);
        return 0;
}
