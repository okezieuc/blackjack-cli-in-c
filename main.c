#include <stdio.h>

void name(int card_number);
void value(int card_number);

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
    if (card_number < 1 || card_number > 13)
    {
        printf("BAD CARD\n");
        return;
    }

    switch (card_number)
    {
    case 1:
        printf("Drew an Ace\n");
        return;
    case 8:
        printf("Drew an 8\n");
        return;
    case 11:
        printf("Drew a Jack\n");
        return;
    case 12:
        printf("Drew a Queen\n");
        return;
    case 13:
        printf("Drew a King\n");
        return;
    default:
        printf("Drew a %d\n", card_number);
    }
}

/*
    This function prints the value of card. If it recieves an invalid
    card number, it prints "BAD CARD."

    Parameters:
    - card_number: The number of the card whose value is to be printed
*/
void value(int card_number ) {
    if (card_number < 1 || card_number > 13) {
        printf("BAD CARD");
        return;
    }

    switch(card_number) {
        case 1:
            printf("Your hand value is 11");
            return;
        case 11:
        case 12:
        case 13:
            printf("Your hand value is 10");
            return;
        default:
            printf("Your hand value is %d\n", card_number);
    }
}
