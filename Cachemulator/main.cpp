#include <stdio.h>

#define MACHINE_BIT			64

#define Data_read			0
#define Data_write			1
#define Instruction_read	2


int main()
{
	int type;
	char addr[MACHINE_BIT];

	FILE *pTrace;
	fopen_s(&pTrace, "trace.txt","r");

	for (int i = 0; i < 10; i++) {
		
		fscanf_s(pTrace, "%d %x\n", &type, &addr);

		printf("%d ", type);
		for (int j = 0; j < MACHINE_BIT; j++) 
			printf("%d ", addr[j]);
		printf("\n");
	}
	fclose(pTrace);
	getchar();

	return 0;
}