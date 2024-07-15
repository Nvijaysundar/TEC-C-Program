#include<stdio.h>
struct Student{
    int sno;
    char name[50];
    char dept[50];
    float per;
}s1;
int main()
{
    struct Student s2;
    fflush(stdin);
    printf("Enter Sno: ");
    scanf("%d",&s1.sno);
    fflush(stdin);
    printf("Enter Name :: ");
    scanf("%[^\n]s",s1.name);
    fflush(stdin);
    printf("Enter dept :: ");
    scanf("%[^\n]s",s1.dept);
    fflush(stdin);
    printf("Enter per :: ");
    scanf("%f",s1.per);

    printf("Sno : %d",s1.per);
    printf("Name : %s",s1.name);
    printf("dept : %s",s1.dept);
    printf("Per : %.2f",s1.per);

}
