#include <stdio.h>

/**
 * Startup - Apply the constructor attribute to Startup() so that it
 *    is executed before main()
*/
void Startup(void) __attribute__ ((constructor));
/**
 * Startup - executes before main function
 */
void Startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
