#include "main.h"

#include "stdio.h"
/**
  * _lenght - checks the length of a string
  * @s: is the string
  * Return: return the length of the string
**/
int main(void)
{
	int r;
	
    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
**/
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
