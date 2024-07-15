#include<stdio.h>
int main()
{
    int *days,sum =0 , c = 0;
    days =(int*)calloc(30,sizeof(int));

    for(int i =0 ; i<30;i++)
    {
         printf("Day %d : ",i+1);
                //&days[i]
        scanf("%d",(days+i));
        if(*(days+i)< 0 || *(days+i)>500)
        {
            printf("Range of rain fall should be between 0-500\n");
            --i;
        }
        else{
         if(*(days+i) == 0)
            c++;
         sum += *(days+i);
        }
    }
    printf("Total Rain Fall : %d\n",sum);
    printf("Avg Rainfall : %.2f\n",sum/30.0);
    printf("Dry days : %d\n",c);
    days = (int*)realloc(days,45*sizeof(int));

    for(int i= 30 ; i<45;i++)
    {
        printf("Day %d : ",i+1);
        scanf("%d",days+i);
        if(*(days+i)< 0 || *(days+i)>500)
        {
            printf("Range of rain fall should be between 0-500\n");
            --i;
        }
        else{
         if(*(days+i) == 0)
            c++;
         sum += *(days+i);
        }
    }
    printf("Total Rain Fall : %d\n",sum);
    printf("Avg Rainfall : %.2f\n",sum/45.0);
    printf("Dry days : %d",c);
    free(days);
}
