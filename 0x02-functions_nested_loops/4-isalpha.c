#include "main.h"

/**
  * _isalpha - check if c is alphabetic character
  * @c: character to check
  * return: 1 if c is alphabetic or 0 if c not alphabitic
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
