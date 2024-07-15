#include<stdio.h>
#include<stdlib.h>
void execute(int *array,int size)
{
    for(int i=0;i<size;i++)
        array[i] = 100;
}

int main()
{
    int size;
    scanf("%d",&size);
    int *arr = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);//12 13 14 15 16
    for(int i=0;i<size;i++)
        printf("%d ",*(arr+i));
    printf("\n");
    execute(arr,size);
    for(int i=0;i<size;i++)
        printf("%d ",*(arr+i));
}
