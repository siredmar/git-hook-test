#include <stdio.h>
#include <string.h>
#include "src/platform/version.h"

void main(void)
{
	printf("%s", GIT_COMMIT_HASH);
	return 0;
}
