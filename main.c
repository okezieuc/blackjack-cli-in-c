#include <stdio.h>

void name(int card_number);

int main()
{
    return 0;
}

/*
    this function accepts the number and prints the name of the card with that
    number. If the number if not a valid card number, it prints "BAD CARD"

    Parameters:
    - card_number: the number of the card.

*/
void name(int card_number)
{
    if (1 < card_number || card_number > 13)
    {
        printf("BAD CARD");
    }

    switch (card_number)
    {
    case 1:
        printf("Drew an Ace");
        return;
    case 11:
        printf("Drew a Jack");
        return;
    case 12:
        printf("Drew a Queen");
        return;
    case 13:
        printf("Drew a King");
        return;
    default:
        printf("Drew a %d \n", card_number);
    }
}