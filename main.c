#include <stdio.h>
#include "src/platform/version.h"

void main(void)
{
	printf("Built with version: %s\n", GIT_COMMIT_HASH);
	return;
}
