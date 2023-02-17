#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes input from user
 * nom - first input
 * matric - second input
 * Return: 0
 */

int main(void)
{
	char nom[20];
	int matric;

	printf("Enter name: ");
	scanf("%s", nom);
	printf("Enter matric number: ");
	scanf("%d", &matric);

	printf("welcome %s\n", nom);
	printf("Your matric number is %d\n", matric);

	return (0);
}
