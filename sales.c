#include<stdio.h>
int main()
{
    int size,thres,sum = 0,high,low,pass=0;
    printf("Enter no of sales :: ");
    scanf("%d",&size);
    int sales[size];
    printf("Enter sales ::\n");
    for(int i = 0;i<size;i++)
    {
        scanf("%d",sales+i);
        sum += *(sales+i);
    }
    printf("Enter Threshold value :: ");
    scanf("%d",&thres);

    float avg  = sum / (float)size;
    high = sales[size-1], low = sales[size-1];
    for(int i=0;i<size;i++)
    {
        if(high<sales[i])
            high = sales[i];
        if(low>sales[i])
            low = sales[i];
        if(sales[i]>thres)
            ++pass;
    }
    printf("Total sales : %d\n",sum);
    printf("Average sales : %.2f\n",avg);
    printf("Highest sale : %d\n",high);
    printf("Lowest sale : %d\n",low);
    printf("Threshold cross : %d",pass);
}
