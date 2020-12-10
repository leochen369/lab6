#include<stdio.h>
#include<stdlib.h>
#include"h.h"
int main(void)
{
	card acard;
	card *cardptr;
	acard.face = "ace";
	acard.suit = "spades";
	cardptr = &acard;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", acard.face, " of ",acard.suit, cardptr->face, " of ", cardptr->suit,
		(*cardptr).face, " of ", (*cardptr).suit);
	system("pause");
	return 0;
}