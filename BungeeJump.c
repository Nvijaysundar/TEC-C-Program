#include<stdio.h>
int main()
{
    int age,weight;
    float height;
    printf("Enter Age : ");
    scanf("%d",&age);
    if(age>=17)
    {
        printf("Enter Height:: ");
        scanf("%f",&height);
        if(height>=4.8)
        {
            printf("Enter Weight:: ");
            scanf("%d",&weight);
            if(weight>=55 & weight<=115)
            {
                if(weight>85)
                    printf("Add Extra Ropes. ");
                printf("Eligible");
            }
            else
                printf("Not Eligible. Reason : weight Limit");
        }
        else
            printf("Not Eligible. Reason : Height Limit");
    }
    else
        printf("Not Eligible. Reason : Age Limit");
}
