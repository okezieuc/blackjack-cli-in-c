#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void name(int card_number);
int card_value(int card_number);
void print_card_value(int card_number);
void end_status(int hand_value);
void dealer();

int main()
{
    srand(time(NULL));
    return 0;
}

/*
    This function handles part of the gameplay. It draws cards for users
    and, when appropriate, asks users to choose to hit. It also prints the
    relevent game end status when appropriate.
*/

void dealer()
{
    int hand_1, hand_2, dealer_hand_value = 0, extra_hand;

    hand_1 = rand() % 13 + 1;
    hand_2 = rand() % 13 + 1;

    name(hand_1);
    name(hand_2);

    dealer_hand_value += card_value(hand_1) + card_value(hand_2);

    while (dealer_hand_value <= 17)
    {
        printf("Dealer has %d.\n", dealer_hand_value);

        extra_hand = rand() % 13 + 1;
        name(extra_hand);
        dealer_hand_value += card_value(extra_hand);
    }

    printf("Final hand: %d.\n", dealer_hand_value);
    end_status(dealer_hand_value);
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
        printf("BAD CARD\n");
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
        printf("BAD HAND VALUE!\n");
        return;
    }

    if (hand_value == 21)
    {
        printf("BLACJACK!\n");
        return;
    }

    if (hand_value > 21)
    {
        printf("BUST!\n");
        return;
    }
}
