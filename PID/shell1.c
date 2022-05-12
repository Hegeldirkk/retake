#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints "$ ".
 * Return: 0;
 */

int main(void)
{
	char *buffer;
	size_t buflen = 32;
	int reciev;

	buffer = malloc(buflen * sizeof(char));
	if (!buffer)
	{
		perror("impossible d'allouer");
	}
	printf("#cisfun$");
	getline(&buffer, &buflen, stdin);
	isatty(
	if ((reciev = access(buffer, F_OK)) != 0)
        {
		printf("%d\n", reciev);
          printf("%s No such file or directory!\n", buffer);
        }else{
           if (access(buffer, R_OK) == 0){
             
           }
        }
	return (0);
}
