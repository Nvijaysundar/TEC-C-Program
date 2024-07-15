#include<stdio.h>
int calculate2(int lm, int qty);
void calculate()
{
    printf("Bill: %d\n",350*20);
}

void calculate1(int qty)
{
    printf("Bill %d\n",350*qty);
}
int main()
{
    int choice,qty,lm;
    while(1)
    {
        printf("1.Lamp-350& Qty:20\n");
        printf("2.Lamp-350 & Qty :?\n");
        printf("3.Lamp- ? Qty : ?\n::");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            calculate();
            break;
        case 2:
            printf("How many lamps : ");
            scanf("%d",&qty);
            calculate1(qty);
            break;
        case 3:
            printf("Price of Lamp :: ");
            scanf("%d",&lm);
            printf("How many lamps : ");
            scanf("%d",&qty);
            int bill  = calculate2(lm,qty);
            break;

        }
    }
}
int calculate2(int lm, int qty)
{
    return lm * qty;
}N


