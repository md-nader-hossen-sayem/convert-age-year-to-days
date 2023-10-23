#include<stdio.h>
int main()
{
    int year, month, days, Total_days;
    printf("Enter Your Year: ");
    scanf("%d",&year);
    printf("Enter Your Months: ");
    scanf("%d",&month);
    printf("Enter your Days:");
    scanf("%d",&days);

    year *= 365;
    month *= 30;

    Total_days = year + month + days;
    printf("The Total days are : %d",Total_days);

    return 0;
}
