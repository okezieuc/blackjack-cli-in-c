#include <stdio.h>

void name(int card_number);
int card_value(int card_number);
void print_card_value(int card_number);
void end_status(int hand_value);

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
    card number, it returns -1.

    Parameters:
    - card_number: The number of the card whose value is to be evaluated.

    Returns:
    The value of a card or -1 if an invalid card number is received.
*/
int card_value(int card_number)
{
    if (card_number < 1 || card_number > 13)
    {
        return -1;
    }

    switch (card_number)
    {
    case 1:
        return 11;
    case 11:
    case 12:
    case 13:
        return 10;
    default:
        return card_number;
    }
}

/*
    This function uses card_value() to get the value of a card and prints it
    to the console.

    Parameters:
    - card_number: The number of the card whose value is to be printed.
*/
void print_card_value(int card_number)
{
    switch (card_value(card_number))
    {
    case -1:
        printf("BAD CARD");
    default:
        printf("Your hand value is %d.\n", card_number);
    }
}

/*
    This function recevies the current hand value. If the hand value is not
    possible, it prints "BAD HAND VALUE!" It prints "BLACKJACK!" if the hand
    value is 21, "BUST!" if the hand value is greater than 21, and prints
    nothing otherwise.

    Parameters:
    - hand_value: a player's hand value
*/

void end_status(int hand_value)
{
    if (hand_value < 4 || hand_value > 31)
    {
        printf("BAD HAND VALUE!");
        return;
    }

    if (hand_value == 21)
    {
        printf("BLACJACK!");
        return;
    }

    if (hand_value > 21)
    {
        printf("BUST");
        return;
    }
}
