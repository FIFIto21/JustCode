//Check if the number is a perfect number

#include <stdio.h>

int Number;

void PerfectNumber()
{
    int i, Rem, Sum = 0;

    printf("Enter the number: ");
    scanf("%d", &Number);

    for (i = 1; i < Number; i++)
    {
        Rem = Number % i;
        if (Rem == 0)
                Sum = Sum + i;
    }

    if (Sum == Number)
            printf("%d is a perfect number", Number);
    else    
            printf("%d is not a perfect number", Number);
}

int main()
{
    PerfectNumber();
    return 0;
}