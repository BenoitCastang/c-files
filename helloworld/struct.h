typedef enum { eClub = 1, eDiamond = 2, eHeart = 3, eSpade = 4 } Suit;

typedef enum { eOne = 1, eTwo = 2, eThree = 3, eFour = 4, eFive = 5, eSix = 6, eSeven = 7, eEight = 8, eNine = 9, eTen = 10, eJack = 11, eQueen = 12, eKing = 13, eAce = 14 } Face;

typedef struct { Suit suit; int suitValue; Face face; int faceValue; bool isWild; } Card;

typedef struct { int cardsDealt; Card c1, c2, c3, c4, c5; } Hand;

bool isEqual( Card card1, Card card2 );
int sumCards( Card card1, Card card2 );
Hand addCard ( Hand oldHand, Card newCard );
void printCard( Card card );
void printHand( Hand hand );
