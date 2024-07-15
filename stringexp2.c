#include<stdio.h>
int main()
{
    int num,num1;
    char str1[50],str2[50];
    scanf("%d",&num);
    fflush(stdin);
    scanf("%[^\n]s",str1);
    scanf("%d",&num1);
    fflush(stdin);
    scanf("%[^\n]s",str2);
    printf("%d\n",num);
    printf("%s\n",str1);
    printf("%d\n",num1);
    printf("%s",str2);

}
