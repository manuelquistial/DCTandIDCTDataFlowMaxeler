#include <stdio.h>
#include <stdint.h>

#include "Maxfiles.h"

#define SIZE 8

uint32_t dataIn[SIZE] = { 1, 0, 2, 0, 4, 1, 8, 3 };
uint32_t dataOut[SIZE];

int main(void) {

	// This is just a stub for a SLiC call
	// to use the SLiC call, please change the function name
	// to the SLiC call you need.
	// DCTandIDCTCpuCode(SIZE, dataIn, SIZE * sizeof(uint32_t), dataOut, SIZE * sizeof(uint32_t));

	for (int i = 0; i < SIZE; i++) { // Ignore edge values
		printf("dataOut[%d] = %d\n", i, dataOut[i]);
	}

	for (int i = 0; i < SIZE; i++) { // Ignore edge values
		if(dataIn[i] != dataOut[i]) {
			printf("Test FAILED!\n");
			return 1;
		}
	}
	printf("Test passed!\n");

	return 0;
}