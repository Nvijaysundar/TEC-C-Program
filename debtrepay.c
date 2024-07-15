#include<stdio.h>
int main()
{
    int principle, rate_of_i, time;
    printf("Enter Principle Amount : ");
    scanf("%d",&principle);
    printf("Enter rate_of_interest::");
    scanf("%d",&rate_of_i);
    printf("Enter time::");
    scanf("%d",&time);

    float interest, amount , discount , total_amt;
    interest = (principle * time * rate_of_i)/100.0;
    amount = principle + interest;
    discount = 0.02 * interest;
    total_amt = amount - discount;

    printf("Interest : %.2f\n",interest);
    printf("Amount : %.2f\n",amount);
    printf("Discount : %.2f\n",discount);
    printf("Total Amount : %.2f",total_amt);


}
