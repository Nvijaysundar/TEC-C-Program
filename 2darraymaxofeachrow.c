#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int **arr;
    arr = (int**) malloc (size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        *(arr+i) =(int*)malloc(size*sizeof(int));
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){
            scanf("%d",*(arr+i)+j);
        }
    }
    int max;
    for(int i=0;i<size;i++)
    {
        max = **(arr+i);
        for(int j=0;j<size;j++){
            if(max<*(*(arr+i)+j))
                max = *(*(arr+i)+j);
        }
        printf("Row %d max value : %d\n",i+1,max);
    }
}
