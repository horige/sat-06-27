#include "input.h"
#include <stdio.h>

//int _PlayerNumber()
//{
//	int playerNumber;
//	printf("0`9‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
//	scanf_s("%d", &playerNumber);
//
//	return (playerNumber);
//}

int * _PlayerNumberPointer()
{
	int playerNumber;
	printf("0`9‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf_s("%d", &playerNumber);

	return (&playerNumber);
}