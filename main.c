#include <stdio.h>
#include <stdlib.h>
#include "Engine.h"

int main(int argc, char* argv[]){
	if(argc != 1){
		fprintf(stderr, "argc is %d\n", argc);
		exit(1);
	}
	Run("data.dat");
	return 0;
}

