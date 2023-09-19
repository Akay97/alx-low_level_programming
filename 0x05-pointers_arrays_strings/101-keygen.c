#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main()
{
	srand(time(NULL));

	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	printf("Generating valid password for 101-crackme: ");

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
        
		int index = rand() % (sizeof(charset) - 1);

		printf("%c", charset[index]);
	}

	printf("\n");

	return 0;
}
