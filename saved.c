#include <stdio.h>
#define rows 100
#define columns 100
void displayMainMenu();
int getInteger();
void loadImage(double array[rows][columns]);
void getFile(char file_name[]);
void getString(char string[]);

//int main(){

	//int input;
	//double array[rows][columns];
	//int row, column;
	//char file_name [100];
	

//#define row 11
//#define column 20

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
			//loadImage(array);
     			getFile(file_name);
     		
   		}
			
	
	
	
	else if(input1 == 2){
	//readfilepointer = fopen(file_name, "r");
	}
	//for(row = 0; row != '\0'; row++){
	//for(column = 0; column != '\0'; column++){
		//fscanf(readfilepointer, "%lf", &array[row][column]);
	 	// Theres something wrong with our condtions in these for loops because it spams zero when the fscanf condition is //
	 

		if(input1 == 1){
			
			printf("What is the name of image file? ");
			scanf("%s", file_name);
			//printf("File: %s", file_name); //  TEST
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

	
	//printf("%.2lf", array[row][column]);
	

	
	 //printf("%.2lf", array[rows][columns]);
	 
	 
	//read the text file, convert it into integers values, and then store into the array
//if image is succesffull loaded we need to display image then display main menu again
// if image is not succsfully loaded we need to say "Sorry, no image to display" then display main menu again 
	

	 if(input1 == 3){

	//else if(input1 == 3){

//if image is not uploaded we need to say "Sorry, no image to edit" then display main menu again
//if image is succesfully loaded give dispaly second menu
	}
	

	else if(input1 == 0){
		printf("\nGoodBye!\n");
	}
		
	else{
		printf("Invalid option, please try again.");

	// else if(input1 == 0){
		//printf("\nGoodBye!\n");
	//}
		
	//else{
		//printf("Invalid option, please try again.");
	//then need to display main menu again

	
	}
	

	
	//}while(input1 != 0);
	





return 0;
}


//Function to display main menu
void displayMainMenu(){

printf("***ERINSTAGRAM***\n");
	printf("1. Load image\n");
	printf("2. Display image\n");
	printf("3. Edit image\n");
	printf("0. Exit\n");
	printf("Choose from one of the options above: ");
	
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
	getString(file_name);
	//FILE* readfilepointer;
	//getFile(file_name);
	//readfilepointer = fopen(file_name, "r");
	//if(readfilepointer != NULL){
     	//	printf("Image successfuly loaded!\n");
     	//	}
     	//	else{
     	//	printf("Could not find an image with that file name.\n");
     	//	return;
     	}
     	//	fclose(readfilepointer);
//}

	
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
