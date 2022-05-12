#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - print all arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 0;

	while (*av[i] != '\0')
	{
		printf("%s\n", av[i]);
		i++;
	}
}
