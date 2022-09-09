#include <stdio.h>
/**
 *
 * main- Entry point
 *
 *
 *
 * Return: ALways 0 (success)
 *
 * */

int main(void)

{

	printf("Size of a char: %LD byte(s)\n", sizeof(char));

	printf("Size of an int: %LD byte(s)\n", sizeof(int));

	printf("Size of a long int: %LD byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %LD byte(s)\n", sizeof(long long int));

	printf("Size of a float: %LD byte(s)\n", sizeof(float));

	return (0);

}
