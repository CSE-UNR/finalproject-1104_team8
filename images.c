//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project

#include <stdio.h>
#define row 11
#define column 20

int main(){

	int input1;
	int rows, columns;
	double array[rows][columns];
	char file_name [35];
	FILE* readfilepointer;
	readfilepointer = fopen(file_name, "r");
	
	
	printf("***ERINSTAGRAM***\n");
	printf("1. Load image\n");
	printf("2. Display image\n");
	printf("3. Edit image\n");
	printf("0. Exit\n");
	printf("Choose from one of the options above: ");
	scanf("%d", &input1);
	
	do{
		if(input1 == 1){
			
			printf("What is the name of image file? ");
			scanf("%s", file_name);
			printf("File: %s", file_name); //  TEST
			readfilepointer = fopen(file_name, "r");
			
			
			
			if(readfilepointer != NULL){
     			printf("Image successfuly loaded!");
     			printf("\n***ERINSTAGRAM***\n");
			printf("1. Load image\n");
			printf("2. Display image\n");
			printf("3. Edit image\n");
			printf("0. Exit\n");
			printf("Choose from one of the options above: ");
			scanf("%d", &input1);
   			}
   		}
   		else if(input1 == 2){
			
			readfilepointer = fopen(file_name, "r");
			//printf("rows: %d", rows);  // TEST
			//printf("c: %d", columns);  // TEST
			for(int i = 0; i < rows; i++){
				
				for(int j = 0; j < columns; j++){
					
					fscanf(readfilepointer, "%lf", &array[rows][columns]);
				 	printf("%.2lf", array[i][j]);
				
				}
			}
		}
		else{
			printf("Could not find an image with that file name.\n");
			printf("\n***ERINSTAGRAM***\n");
			printf("1. Load image\n");
			printf("2. Display image\n");
			printf("3. Edit image\n");
			printf("0. Exit\n");
			printf("Choose from one of the options above: ");
			scanf("%d", &input1);
		}
		
		
	
	} while(input1 != 0);
	
	

	
	 //printf("%.2lf", array[rows][columns]);
	 
	 
	//read the text file, convert it into integers values, and then store into the array
//if image is succesffull loaded we need to display image then display main menu again
// if image is not succsfully loaded we need to say "Sorry, no image to display" then display main menu again 
	
	//else if(input1 == 3){
//if image is not uploaded we need to say "Sorry, no image to edit" then display main menu again
//if image is succesfully loaded give dispaly second menu
	//}
	
	// else if(input1 == 0){
		//printf("\nGoodBye!\n");
	//}
		
	//else{
		//printf("Invalid option, please try again.");
	//then need to display main menu again
	
	//}
	

return 0;
}

//Function to display image current image


//Function to dim image


//Function to brighten image


//Function to crop the image


//Function to save image to file


//Function to load image into a new file


  
