#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int uc= 0,lc=0,d=0,s=0,sum=0;
    scanf("%[^\n]s",&ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='A' && ch[i]<=90)
            uc++;
        else if(ch[i]>=97 && ch[i]<='z')
            lc++;
        else if(ch[i]>='0' && ch[i]<='9')//'2' -> 50
        {
            d++;
            sum += ch[i]-48;
        }
        else
            s++;
    }
    printf("Upper : %d\n",uc);
    printf("Lower : %d\n",lc);
    printf("Symbol: %d\n",s);
    printf("Digits: %d\n",d);
    printf("Sum   : %d",sum);

}
