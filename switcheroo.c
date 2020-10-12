#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int random[10];
	srand(time(NULL));
	int i;
	for(i = 0; i < 9; i++) {
		int x = rand();
		random[i] = x;
	}
	random[9] = 0;
	for (i = 0; i < 10; i++) {
      		printf("random[%d] = %d\n", i, random[i]);
   	}
	int reverseR[10];
	int *rp = random;

	printf("~oooh~ the switcheroo!\n");
	for (i = 0; i < 10; i++) {
		reverseR[i] = *(rp + (9 - i));
	}
	for (i = 0; i < 10; i++) {
                printf("reverseR[%d] = %d\n", i, reverseR[i]);
        }
}
