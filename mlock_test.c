#include<stdio.h>
#include<errno.h>
#include<sys/mman.h>
#include<stdlib.h>
#include<string.h>
#define GB 1073741824

size_t sz = (size_t)GB;

int main()
{
	int* x = (int*)malloc(sz);
	int ret = mlock(x, sz);
	if(ret == -1)
	{
		printf("mlock failed, errno = %d\n", errno);
	}
	else
	{
		printf("mlock success\n");
	}
	//memset(x, -1, sz);
	getchar();
	return 0;
}