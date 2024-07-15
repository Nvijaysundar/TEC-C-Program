#include<stdio.h>
int main()
{
    int size,no_prime=0,flag=1,temp,rev=1;

    int count = 0,sum,no_arm=0,no_palin=0,dc= 0;
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        //prime
        flag =1;
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag =0;
                break;
            }
        }
        if(flag ==1)
            ++no_prime;

        //palindrome
        rev = 0;
        temp = arr[i];

        while(temp>0)
        {
            rev = rev*10+temp%10;
            temp/=10;
        }
        if(rev == arr[i])
            ++no_palin;

     //armstrong
         sum =0;
         count = 0;
         temp = arr[i];
         do{
            temp/=10;
            count++;
         }while(temp>0);

         temp = arr[i];
         while(temp>0)
         {
             sum += (int)pow(temp%10,count);
             temp/=10;
         }

         if(arr[i]== sum)
            ++no_arm;

      //diff of even & odd
      int esum = 0,osum = 0;
      temp = arr[i];
      while(temp>0)
      {
          if(temp%10%2==0)
            esum += temp%10;
          else
            osum += temp%10;
          temp/=10;
      }

      if(osum==esum)
          dc++;
    }
    printf("Primes : %d\n",no_prime);
    printf("Palin : %d\n",no_palin);
    printf("Armstrong : %d\n",no_arm);
    printf("Diff 0 : %d",dc);


}
