#include<stdio.h>
void main()
{
    int tt;//tt=Ticket Type
    float bw,fine=0,fee;//bw=baggage Weight
    printf("\nNote:\nEconomy=1\tBussiness=2");
    printf("\nEnter the ticket type:");
    scanf("%d",&tt);
    printf("\nEnter the baggage weight in Kg:");
    scanf("%f",&bw);
    if((tt!=1 || tt!=2) && ((fine<0) && bw<0))
    {
        printf("\nInvalid Inputs.");
    }
    switch (tt)
    {
    case 1:
        if(bw>23)
        {
            printf("\nEnter Charges for excess weight per kg:");
            scanf("%f",&fee);
            fine=fee*(bw-23);
            printf("\nExcess Weight charges are:%.2frs",fine);
        }
        else
        {
            printf("\nBaggage weight is within limit.");
        }
        break;

    case 2:
        if(bw>32)
        {
            printf("\nEnter Charges for excess weight per kg:");
            scanf("%f",&fee);
            fine=fee*(bw-23);
            printf("\nExcess Weight charges are:%.2frs",fine);
        }
        else
        {
            printf("\nBaggage weight is within limit.");
        }

        break;

    default:
        break;
    }
}