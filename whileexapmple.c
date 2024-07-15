#include<stdio.h>
int main(){
    int i=0;
    while(++i)
    {
        if(i%2==0)
            continue; //skip the iteration
        printf("Hello\n");
        if(i==15)
            break; //terminate the iteration
    }
}
