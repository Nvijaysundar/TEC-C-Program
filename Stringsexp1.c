#include<stdio.h>
int main()
{
    char str1[20] = "Cprogramming",str2[50];
    scanf("%[^&]s",str2);
    printf("%s %s",str1,str2);
}
