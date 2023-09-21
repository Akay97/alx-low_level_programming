#include <stdio.h>

/**
 * leet - the function name
 * @str: the string to be encoded
 * Return: Always 0 as success
 */

char *leet(char *str)
{
char *p = str;
char led[] = "AEOTL";
char rep[] = "43071";

while (*str)
{
int i = 0;

while (led[i])
{
if (*str == led[i] || *str == led[i] + 32)
{
*str = rep[i];
break;
}
i++;
}
str++;
}

return (p);
}

