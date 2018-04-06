#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bug() {
	int *p = NULL;
	(*p)++;
	return *p;
}


int main(int argc, char **argv) {
	char input[100];
	fgets(input, sizeof(input), stdin);
	int counter = 0, values = 0;
	for(int i=0; i<100; ++i) {
		if( input[i] == 'B') {
			counter++;
			values += 2;
		}
	}

	printf("counter = %d\n", counter);
	printf("values = %d\n", values);

	if (counter == 75) {
		bug();
	}
	return 0;
}