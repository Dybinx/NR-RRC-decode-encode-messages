#include <stdlib.h>
#include <assert.h>


void *AsnMalloc(unsigned int size)
{
	void *ptr = NULL;

	ptr = malloc(size);

	assert(ptr != NULL);

	return ptr;
}

void AsnFree(void *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
	}
}