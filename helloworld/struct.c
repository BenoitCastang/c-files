#include <stdio.h>
#include <stdbool.h>
#include "struct.h"

int main() {

	const Card defaultCard = { eHeart, (int)eHeart, eQueen, (int)eQueen, false };
	const Hand defaultHand = {2, {eClub, (int)eClub, eTen, (int)eTen, false}, {eDiamond, (int)eDiamond, eSeven, (int)eSeven, false}};

	Hand hand = addCard(defaultHand, defaultCard);
	printHand(hand);

	return 0;
}

bool isEqual(Card card1, Card card2) {
	if (card1.suit == card2.suit && card1.face == card2.face && card1.isWild == card2.isWild) return true;
	else return false;
}

int sumCards(Card card1, Card card2) {
	return card1.faceValue + card2.faceValue;
}

Hand addCard (Hand oldHand, Card newCard) {
	Hand newHand = oldHand;
	switch (newHand.cardsDealt) {
		case 0: newHand.cardsDealt++; newHand.c1 = newCard; break;
		case 1: newHand.cardsDealt++; newHand.c2 = newCard; break;
		case 2: newHand.cardsDealt++; newHand.c3 = newCard; break;
		case 3: newHand.cardsDealt++; newHand.c4 = newCard; break;
		case 4: newHand.cardsDealt++; newHand.c5 = newCard; break;
		default: newHand = oldHand; break;
	}
	return newHand;
}

void printCard(Card card) {
	switch(card.face) {
		case eOne: printf("One "); break;
		case eTwo: printf("Two "); break;
		case eThree: printf("Three "); break;
		case eFour: printf("Four "); break;
		case eFive: printf("Five "); break;
		case eSix: printf("Six "); break;
		case eSeven: printf("Seven "); break;
		case eEight: printf("Eight "); break;
		case eNine: printf("Nine "); break;
		case eTen: printf("Ten "); break;
		case eJack: printf("Jack "); break;
		case eQueen: printf("Queen "); break;
		case eKing: printf("King "); break;
		case eAce: printf("Ace "); break;
		default: printf("??? "); break;
	}
	switch(card.suit) {
		case eClub: printf("of Clubs\n"); break;
		case eDiamond: printf("of Diamonds\n"); break;
		case eHeart: printf("of Hearts\n"); break;
		case eSpade: printf("of Spades\n"); break;
		default: printf("of ???\n"); break;
	}
}

void printHand(Hand hand) {
	Card card;
	for(int i=1; i<hand.cardsDealt+1; i++) {
		switch(i) {
			case 1: card = hand.c1; break;
			case 2: card = hand.c2; break;
			case 3: card = hand.c3; break;
			case 4: card = hand.c4; break;
			case 5: card = hand.c5; break;
			default: return; break;
		}
		printCard(card);
	}
}
