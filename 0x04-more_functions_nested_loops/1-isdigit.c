#include "holberton.h"
/**
  *_isdigit - function to check for a digit
  *@c: digit to check
  *Return: 0 or 1
  */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
		return (0);
}
