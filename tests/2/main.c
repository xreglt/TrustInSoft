#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tis_builtin.h>

int bug() {
	int *p = NULL;
	(*p)++;
	return *p;
}


int main(int argc, char **argv) {
	int counter = tis_interval(0, 2^31-1);;
	// tis_scanf("%d", &counter);

	if (counter == 75) {
		bug();
	}
	return 0;
}