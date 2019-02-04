#include <stdio.h>
#include "src/platform/version.h"

void main(void)
{
	printf("This is my fancy modification2\n");
	printf("Built with version: %s\n", GIT_COMMIT_HASH);
	return;
}
