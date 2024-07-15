#include<stdio.h>
int main()
{
    int arr[] = {55,66,44,22,33};
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(arr+i));
    }
}
