#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    strupr(str);
    for(int i = 0,j=strlen(str)-1; i<strlen(str)&&j>=0;i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("No palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;

}
