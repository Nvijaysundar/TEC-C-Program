#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;

    arr = (int*) malloc(5*sizeof(int));

    arr[0] = 56;
    arr[1] = 74;
    arr[2] = 55;
    arr[3] = 78;
    arr[4] = 33;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(arr+i));
    }
    free(days);
}
