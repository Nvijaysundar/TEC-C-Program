#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size],arr2[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<size;i++)
        scanf("%d",&arr2[i]);

    for(int i=0;i<size;i++)
    {
        if(arr[i]<arr2[i])
        {
            printf("Not Compatable");
            return 0;
        }
    }

    printf("Compatble");
}
