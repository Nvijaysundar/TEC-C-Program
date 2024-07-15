#include<stdio.h>
struct Student{
    int sno;
    char name[50];
    char dept[50];
    float per;
};

int main()
{
    int size;
    printf("Enter no of Students: ");
    scanf("%d",&size);
    struct Student s[size];
    for(int i=0;i<size;i++)
    {
        fflush(stdin);
        printf("Enter Sno: ");
        scanf("%d",&s[i].sno);
        fflush(stdin);
        printf("Enter Name: ");
        scanf("%[^\n]s",s[i].name);
        fflush(stdin);
        printf("Enter dept: ");
        scanf("%[^\n]s",s[i].dept);
        fflush(stdin);
        printf("Enter per: ");
        scanf("%f",&s[i].per);
    }
    for(int i=0;i<size;i++)
    {
        printf("Sn0 : %d\n",s[i].sno);
        printf("Name : %s\n",s[i].name);
        printf("Dept : %s\n",s[i].dept);
        printf("Per : %.2f\n\n",s[i].per);
    }
}
