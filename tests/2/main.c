#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bug() {
	int *p = NULL;
	(*p)++;
	return *p;
}


int main(int argc, char **argv) {
	int counter;
	scanf("%d", &counter);

	if (counter == 75) {
		bug();
	}
	return 0;
}