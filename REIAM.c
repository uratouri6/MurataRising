#include <stdio.h>
#include "myNameIs.h"
#include "thirdNameIs.h"

void main(){
	int i;
	for (i = 0; i < 10; i++){
		printf("Hello!\n");
	}

	myNameIs();
	thirdNameIs();
}

