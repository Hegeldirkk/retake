#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints "$ ".
 * Return: a;
 */

int main(void)
{
	char *buffer;
	size_t buflen = 32;
	char *argv[] = {"ls", NULL};
	char cmd[] = "/bin/ls";

	buffer = (char *)malloc(buflen * sizeof(char));
	if (!buffer)
	{
		perror("impossible d'allouer");
	}
	do{
		printf("#cisfun$");
		getline(&buffer, &buflen, stdin);
		if (cmd[0] == *buffer)
		{
			execve(cmd, argv, NULL);
		}
		else
		{
			printf("./shell: No such file or directory\n");
		}
	}while(*buffer != EOF);
	return (0);
}
