#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num = rand()%50+1  , guess,count=1;
   do{
        printf("Enter a value to guess :: ");
        scanf("%d",&guess);
        if(guess<num)
            printf("Too Low\n");
        else if(guess>num)
            printf("Too High\n");
        else
            {
            printf("Yes you guess the correct number");
            break;
            }
        count++;
   }while(count<=5);

   if(guess != num)
    printf("No of attempts completed. correct number : %d",num);
}
