#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Discription: a code that prints to the stderror
 * Return: Always 0 (success)
 */

int main(void)
{	write(STDOUT_FILENO ,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return(0);
}
