#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int **arr;

    arr = (int**)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        *(arr+i) = (int*)malloc(size*sizeof(int));
    }

    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d",*(arr+i)+j);
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
           printf("%d ",*(*(arr+i)+j));
           printf("\n");
      }
      free(arr);
}
