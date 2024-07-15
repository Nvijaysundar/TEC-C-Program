#include<stdio.h>
int main()
{
    int t_b, t_r, c_r, c_b;
    printf("Enter Total No of balls: ");
    scanf("%d",&t_b);
    printf("Enter total runs scored : ");
    scanf("%d",&t_r);
    printf("Enter Current Runs: ");
    scanf("%d",&c_r);
    printf("Enter Current Balls : ");
    scanf("%d",&c_b);
    float t_overs = t_b/6 + (t_b%6)*0.1;
    float c_overs = c_b/6 + (c_b%6)*0.1;
    float c_runrate = c_r/c_overs;
    float runrate = t_r/t_overs;

    //print statements

}
