#include "auxfun.h"

void ownmemset(void *mem, char val, unsigned int size){
	int i;
	for(i = 0; i < size; i++){
		/*Assegno ad ogni byte di mem il valore val*/
		((char*)mem)[i] = val;
	}
}