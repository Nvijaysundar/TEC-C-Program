#include<stdio.h>
#include<stdlib.h>
union Student{
    char name[50];
    int marks[3];
    float avg;
    char grade;
}*std;

int main(){
    int n;
    scanf("%d",&n);
    std =(union Student*)calloc(n, sizeof(union  Student));
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Name :    ");
        scanf("%[^\n]s", (std+i)->name);
        for(int j=0;j<=2;j++){
            printf("Enter Sub %d Marks ::",j+1);
            scanf("%d",(std+i)->marks+j);
        }
        (std+i)->avg = ((std+i)->marks[0]+(std+i)->marks[1]+(std+i)->marks[2])/3.0;
        if((std+i)->avg>90 && (std+i)->avg<=100)
            (std+i)->grade = 'A';
        else if ((std+i)->avg>80)
            (std+i)->grade = 'B';
        else if ((std+i)->avg>70)
            (std+i)->grade = 'C';
        else if ((std+i)->avg>=40)
            (std+i)->grade = 'D';
        else if ((std+i)->avg>0 && (std+i)->avg<40)
            (std+i)->grade = 'F';
        else {
            printf("Invalid grade. Enter Complete Details Again");
            --i;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s - %.2f - %c\n",(std+i)->name,(std+i)->avg,(std+i)->grade);
    }

}
