#include "pascal.h"

int fact(int i) {

	int j = 1;
	int k = 1;
	for(j; j <= i; j++ ) {
		k *= j;
	}
	return k;
}
