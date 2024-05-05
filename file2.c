#include <stdio.h>



void get_image(int rows, int columns, double array[][columns]);

int main(){

  	int rows, columns;
	double array[rows][columns];
	int row, column;
	char file_name [100];
	FILE* readfilepointer;

			printf("What is the name of image file? ");
			scanf("%s", file_name);
			readfilepointer = fopen(file_name, "r");
			if(readfilepointer != NULL){
     			printf("Image successfuly loaded!");
     			}
     			






return 0;
}

void get_image(int rows, int columns, double array[][columns]){

  int row, column;
  FILE* readfilepointer;
  char file_name [100];
  
        readfilepointer = fopen(file_name, "r");
	for(row = 0; row != '\0'; row++){
	for(column = 0; column != '\0'; column++){
		fscanf(readfilepointer, "%lf", &array[row][column]);
	}	
	}
	
return;
}
