#include <stdio.h>
/**
 * main - Enter required info
 * Return: 0(success)
 */
int main(void)
{
	printf("Size of a char: 1 %lu byte(s)\n", sizeof(char));
	printf("Size of a int: 4 %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: 4  %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long: 8 %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: 4  %lu byte(s)\n", sizeof(float));
	return (0);
}
