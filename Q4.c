#include <stdio.h>
#include <math.h>

void main()
{
    double a, b, result;
    int choice;

    printf("\nEnter number:");
    scanf("%lf", &a);
    printf("\nChoose an operation\n1 = Power\t2 = Square Root\n3 = Absolute Value\t4 = Round");
    scanf("%d", &choice);
    if (choice<0 && choice>4)
    {
        printf("\nInvalid choice.\n");
    }

    switch (choice)
    {
        case 1:
            printf("\nEnter power:");
            scanf("%lf", &b);
            result = pow(a, b);
            break;
        case 2:
            if (a < 0)
            {
                printf("\nCannot calculate the square root of a negative number.\n");
            }
            result = sqrt(a);
            break;
        case 3:
            result = fabs(a);
            break;
        case 4:
            result = round(a);
            break;
        default:
            printf("\nInvalid operation choice.\n");

    }

    printf("Result: %g\n", result);
}