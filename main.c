#include <stdio.h>

#ifndef VAR
#define VAR "default"
#endif

int main()
{
	printf("got variable: " VAR "\n");
	return 0;
}
