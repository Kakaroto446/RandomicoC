#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, numSort;
	srand(time(NULL));

	for(i=1;i<=6;i++) {
		numSort = rand() %60;
		printf("\t Número %d: %d\n", i, numSort);
	}

	printf("\n\n\n");
	system("pause");
	return 0;
}
