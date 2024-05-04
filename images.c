//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project

#include <stdio.h>
#define rows 100
#define columns 100

int main(){

	int input1;
	double array[rows][columns];
	int row, column;
	char file_name [100];
	FILE* readfilepointer;
	
	
	
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
			}
		
		
		//if(readfilepointer != NULL){
     			//printf("file open succesful");
   		//}
		//fgets(input2, 100, stdin);
	
	
	if(input1 == 2){
	
	readfilepointer = fopen(file_name, "r");
	for(row = 0; row != '\0'; row++){
	for(column = 0; column != '\0'; column++){
		//fscanf(readfilepointer, "%lf", &array[row][column]);
	 	// Theres something wrong with our condtions in these for loops because it spams zero when the fscanf condition is //
	 
	}
	}
	
	printf("%.2lf", array[row][column]);
	
	
	
	 //printf("%.2lf", array[rows][columns]);
	//read the text file, convert it into integers values, and then store into the array
//if image is succesffull loaded we need to display image then display main menu again
// if image is not succsfully loaded we need to say "Sorry, no image to display" then display main menu again 
	}
	
	else if(input1 == 3){
//if image is not uploaded we need to say "Sorry, no image to edit" then display main menu again
//if image is succesfully loaded give dispaly second menu
	}
	
	else if(input1 == 0){
		printf("\nGoodBye!\n");
	}
		
	else{
		printf("Invalid option, please try again.");
	//then need to display main menu again
	
	}
	
	
	}while(input1 != 0);
	



return 0;
}


//Function to display main menu


//Function to display editing menu


//Function to dim image


//Function to brighten image


//Function to crop the image


//Function to save image to file


//Function to display image current image


//Function to load image into a new file


  
