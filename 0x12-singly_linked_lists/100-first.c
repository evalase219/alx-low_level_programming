#include <stdio.h>

/**
 * myStartupFun - apply the constructor attribute to StartupFun() so that
 * it is executed before main()
 */
void myStartupFun(void)
__attribute__((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
