/**
 * str_len - the function name
 * @s: the string to be examine
 * Return: 0 always success
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
 * is_palindrome_rec - the function name
 * @s: the string to be examine
 * @st: the begining
 * @ed: the end
 * Return: 0 always success
 */

int is_palindrome_rec(char *s, int st, int ed)
{
	if (st >= ed)
	{
		return (1);
	}
	if (s[st] != s[ed])
	{
		return (0);
	}
	return (is_palindrome_rec(s, st + 1, ed - 1));
}

/**
 * is_palindrome - the function name
 * @s: the string to be examine
 * Return: 0 always success
 */

int is_palindrome(char *s)
{
	int length = str_len(s);

	return (is_palindrome_rec(s, 0, length - 1));
}
