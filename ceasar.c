#include <stdio.h>
#include "decode.h"

int main(){

	char original_message[]="ITRYUPWANIASRRIN MTTSOTGREIEEGHUE NM R AAOG WACGLP CEM E-ESO  L!";
	char resulting_message[]=" ";

	int i;
	printf("\nOriginal message: \n");
	for(i=0;i<64;i++){
		printf("%c,",original_message[i]);

	}

	decode(original_message,resulting_message);

	print_result(resulting_message);

	return 0;
}


