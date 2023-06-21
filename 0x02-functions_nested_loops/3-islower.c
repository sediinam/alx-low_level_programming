#include "main.h"
/**
  *_islower - tests whether a character is a lowercase
  *@c: character to test
  *Return: 1 if it is a lowercase, 0 if it is not a lowercase
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
