#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -  this should be returned
 * @s: the string
 * Return: 0 as success
 */

int _strlen(char *s)
{
	int i  = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - the string should be coppied
 * @dest: the pointer to the string to copy
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - the function name
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: 0 as success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
