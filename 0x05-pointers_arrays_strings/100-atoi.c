#include <stdio.h>
#include <limits.h>

/**
* _atoi - the function name
* @s: the pointer variable
* Return: 0 as success
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
			i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
		else
		{
			return (INT_MIN);
		}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

		return (result * sign);
}
