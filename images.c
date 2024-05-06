//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project


#include <stdio.h>
#define rows 11
#define columns 21
void displayMainMenu();
void disp_edit();
int getInteger();
void loadImage(double array[rows][columns]);
void getFile(char file_name[]);
void getString(char string[]);


int main(){
	int input1;
	int row, column;
	double array[rows][columns];
	char file_name [35];
	FILE* readfilepointer;
	readfilepointer = fopen(file_name, "r");

	do{	
	displayMainMenu();
	input1 = getInteger();
	
		if(input1 == 1){
     			getFile(file_name);
     		}
     		else if(input1 == 2){
     			
	     			
	     			
     			readfilepointer = fopen(file_name, "r");
	     		for(row = 0; row < rows; row++){
			for(column = 0; column < columns; column++){
			fscanf(readfilepointer, "%lf", &array[rows][columns]);	  	
	     		printf("%.0lf\n", array[rows][columns]);
	     		}
	     		}
	     	
	
     		
     		}
     		else if(input1 == 3){
     			disp_edit();
    	 			
     		
     		}
     		else if(input1 == 0){
     			printf("\nGoodBye!\n\n");
     		}
     		else{
			printf("Invalid option, please try again.");
		}
     		
   	}while(input1 != 0);
	
return 0;
}


//Function to display main menu
void displayMainMenu(){

	printf("\n***ERINSTAGRAM***\n");
	printf("1. Load image\n");
	printf("2. Display image\n");
	printf("3. Edit image\n");
	printf("0. Exit\n");
	printf("\nChoose from one of the options above: ");
	
}
//Function to display editing menu
void disp_edit(){

	printf("\n\n**EDITING**");
	printf("\n1: Crop image");
	printf("\n2: Dim image");
	printf("\n3: Brighten image");
	printf("\n0: Return to main menu\n");
	printf("\nChoose from one of the options above: ");
}
//Function to get user inputs
int getInteger(){
	int input1;
	scanf("%d", &input1);
	
	return input1;
}
//Functtion to get file
void getFile(char file_name[]){
	printf("What is the name of image file? ");
	//getString(file_name);
	scanf("%s", file_name);
	FILE* readfilepointer;
	//getFile(file_name);
	readfilepointer = fopen(file_name, "r");
	if(readfilepointer != NULL){
     		printf("\nImage successfuly loaded!\n");
     		}
     		else{
     		printf("Could not find an image with that file name.\n");
     		return;
     	}
     		fclose(readfilepointer);
}
//Function to get string 
void getString(char string[]){
	scanf("%s", string);
}
//Function to load image (make sure to read image into 2D array here)
void loadImage(double array[rows][columns]){
	char file_name [100];
	int row = 0;
	int column = 0;
	FILE* readfilepointer;
	getFile(file_name);
	readfilepointer = fopen(file_name, "r");
	
		if(readfilepointer != NULL){
     		printf("Image successfuly loaded!\n");
     		
     		
     		//for(row = 0; row != '\0'; row++){
	//for(column = 0; column != '\0'; column++){
		//fscanf(readfilepointer, "%lf", &array[row][column]);
     		
     		
     		
     		while(fscanf(readfilepointer, "%lf", &array[row][column]) == 1){
     			column++;
     			if(column == columns){
     			row++;
     			column = 0;
     			if(row == rows);
     				break;
     				}
     		}
     		}
     		else{
     		printf("Could not find an image with that file name.\n");
     		return;
     	}
     		fclose(readfilepointer);
}
		




  
