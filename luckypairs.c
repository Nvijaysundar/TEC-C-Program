#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    for(int i=1;i<=n;i++){
        if(i%2==1)
            a*=2;
        else
            b*=2;
    printf("A:%d B:%d\n",a,b);
    }
    printf("%d",a+b);
}
