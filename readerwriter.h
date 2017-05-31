#ifndef __READERWRITER__
#define __READERWRITER__ 1
#include <stdlib.h>
#include <unistd.h>

#define READER 0
#define WRITER 1
#define DEBUG 1

#define __wait__(a) usleep(a*1000)
#define __waitt__  (10000L+(long)((1e5-1e4)*rand()/(RAND_MAX+1.0)))/10

#define __reading__(a) __wait__(a)
#define __writing__(a) __wait__(a)

int readerorwriter(float);
float nextTime(float);
void *reading(void*);
void *writing(void*);

#endif
