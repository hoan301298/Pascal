#include "pascal.h"

void pascal_triangle(int v) {
	int i, j;
	int k, count = v-1;
//	for (k = 0; k<v; k++){
//		printf("\t");
//	}
	for (i = 0; i < v; i++){
		for(j = 0; j <= i ; j++) {
			printf("\t\t%d", comb(i, j));
			if(j = 0){
				for (k = 0; k < v; k++ ){
					printf("\t");
				}
			}
			v--;
		}
		
		printf("\n");
//		for (k=0; k<count; k++){
//				printf("\t");
//		}
//		count--;
	}
}
