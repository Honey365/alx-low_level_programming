#include <stdio.h>

/* Function prototype with attribute to execute before main */
void first(void) __attribute__ ((constructor));

/**
 * first - Prints a message before the main function runs.
 *
 * Executed automatically before the main function starts.
 * Prints the following message:
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
