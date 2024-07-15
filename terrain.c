#include<stdio.h>
int main()
{
    int choice;
    printf("Select Terrain : ");
    printf("1.Forest\t2.Desert\t3.Mountain\t4.River::");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("1.Explore\t2.Build a Shelter:: ");
        scanf("%d",&choice);
        if(choice == 1)
            printf("You chose to Explore the Forest. Be cautious of wild animals!");
        else if(choice ==2)
            printf("You chose to Build a Shelter. Find a good spot with resources.");
        else
            printf("Invalid selection");
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default :
        printf("Invalid Selection");
    }

}
