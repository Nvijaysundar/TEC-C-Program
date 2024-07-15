#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    printf("%d ",n);
    while(n!=1){
        if(n%2==0)
            n /= 2;
        else
            n = 3*n+1;
        printf("%d ",n);
        ++count;
   }
   printf("%d",count);
}
