#include <stdio.h>

enum suit {
	eSpade = 4,
	eHeart = 3,
	eDiamond = 2,
	eClub = 1
	};

int main () {
	enum suit card = 3;
	if(card == eClub) printf("club\n");
	else if(card == eDiamond) printf("diamond\n");
	else if(card == eHeart) printf("heart\n");
	else if(card == eSpade) printf("spade\n");
	else printf("Unknown enumerated value.\n");
	return 0;
	printf("%d\n", eSpade);
}
