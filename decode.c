#include <stdio.h>
#include <math.h>
#include <string.h>
#include "decode.h"


void decode(char original_message[], char resulting_message[]){
	int row,col;
	char d_message[200][200];
	int k = 0;
	int size = strlen(original_message);

	row = sqrt(size);
	col = row;

	printf("\n\nDecode message: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			d_message[i][j]=original_message[k];
			printf("%c",d_message[i][j]);
			k++;
		}
		printf("\n");
	}

	k = 0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			resulting_message[k]= d_message[j][i];
			k++;
		}
	}
}

void print_result(char message[]){
	printf("\nResult message: \n");
	for(int i=0;i<64;i++){
		printf("%c",message[i]);

	}
	printf("\n");

}
