#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"



int main(int argc, char *argv[]) {

	int iRC;
	long int liRandom;
	unsigned int iSeed;
	char pchState[256];
	time_t timeVal;


	iRC=EXIT_SUCCESS;

	if (argc != 1) {
		fprintf(stderr, "Usage: %s \n", argv[0]);
		iRC=EXIT_FAILURE;
		exit(iRC);
	}

	timeVal = time(&timeVal);
	iSeed = timeVal;
	initstate(iSeed, pchState,256);
	liRandom = random();

	
	printf("val between 1 and 100 %ld\n",(liRandom%100) + 1);

	
	exit(iRC);

}





