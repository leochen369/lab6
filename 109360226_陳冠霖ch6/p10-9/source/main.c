#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"h.h"
void filldeck(card * const wdeck, const char * wface[],
	const char * wsuit[]);
void shuffle(card *const wdeck);
void deal(const card *const wdeck);
int main(void)
{
	card deck[52];
	const char *face[] = { "ace","deuce","three",
		"four","five","six","seven","eight","nine","ten"
		,"jack","queen","king" };
	const char *suit[] = { "hearts","diamonds","clubs","spades" };
	srand(time(NULL));
	filldeck(deck, face, suit);
	shuffle(deck);
	deal(deck);
	return 0;
}
void filldeck(card*const wdeck, const char*wface[],
	const char *wsuit[])
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		wdeck[i].face = wface[i % 13];
		wdeck[i].suit = wsuit[i / 13];
	}
}
void shuffle(card *const wdeck)
{
	int i, j;
	card temp;
	for (i = 0; i <= 51; i++)
	{
		j = rand() % 52;
		temp = wdeck[i];
		wdeck[i] = wdeck[j];
		wdeck[j] = temp;
	}
}
void deal(const card *const wdeck)
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		printf("%5s of %-8s%s", wdeck[i].face, wdeck[i].suit,
			(i + 1) %4 ? "  " : "\n");
	}
}