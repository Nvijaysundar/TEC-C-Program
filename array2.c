#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size],arr2[size];
    printf("Enter arr elements: \n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
        printf("Enter arr2 elements: \n");
    for(int i=0;i<size;i++)
        scanf("%d",arr2+i);
    printf("Elements are : %d %d",*(arr+2),arr2[3]);
}
