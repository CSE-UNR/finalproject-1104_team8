//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project


#include <stdio.h>
#define rows 12
#define columns 21
void displayMainMenu();
void disp_edit();
int getInteger();
//void loadImage(char array[rows][columns]);
void getFile(char file_name[]);
void getString(char string[]);
void dimImage(char array[rows][columns]);
void brightenImage(char array[rows][columns]);

int main(){
	int input1;
	int input2;
	int row, column;
	char array[rows][columns];
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
	     		for(row = 0; row <= rows; row++){
			    for(column = 0; column <= columns; column++){
			    	fscanf(readfilepointer, "%c", &array[row][column]);	  	
					
					if(array[row][column] == '0'){
						array[row][column] = ' ';
					}
					else if(array[row][column] == '1'){
						array[row][column] = '.';
					}
					else if(array[row][column] == '2'){
						array[row][column] = 'o';
					}	
					else if(array[row][column] == '3'){
						array[row][column] = 'O';
					}	
					else if(array[row][column] == '4'){
						array[row][column] = '0';
					}	
					
	     			printf("%c", array[row][column]);
	  
	     		}
	     		}
	     	printf("\n");

     		}
     		else if(input1 == 3){
     			disp_edit();
     			scanf("%d", &input2);
     				
     				if(input2 == 1){
     			}
     				
     				else if(input2 == 2){
    	 		readfilepointer = fopen(file_name, "r");
	     		for(row = 0; row <= rows; row++){
			    for(column = 0; column <= columns; column++){
			    	fscanf(readfilepointer, "%c", &array[row][column]);	  	
			    	dimImage(array);
			    	printf("%c", array[row][column]);
     		}
     				printf("\n");
     	}
     }
     					else if(input2 == 3){
     				readfilepointer = fopen(file_name, "r");
	     		for(row = 0; row <= rows; row++){
			    for(column = 0; column <= columns; column++){
			    	fscanf(readfilepointer, "%c", &array[row][column]);	  	
			    		brightenImage(array);
			    		printf("%c", array[row][column]);
     		}
     				printf("\n");
     	}
    }
     					
     					else if(input2 == 0){
     				}
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
//Dim image function!
void dimImage(char array[rows][columns]){
    int row, column;
    for (row = 0; row < rows; row++){
        for (column = 0; column < columns; column++){
            if (array[row][column] == '.'){
                array[row][column] = ' ';  // Dimming brightness by one step
            } else if (array[row][column] == 'o'){
                array[row][column] = '.';  // Dimming brightness by one step
            } else if (array[row][column] == 'O'){
                array[row][column] = 'o';  // Dimming brightness by one step
            } else if (array[row][column] == '0'){
                array[row][column] = 'O';  // Dimming brightness by one step
            }
        }
    }
}

//Brighten Image Function
void brightenImage(char array[rows][columns]){
    int row, column;
    for (row = 0; row < rows; row++){
        for (column = 0; column < columns; column++){
            if (array[row][column] == ' ') {
                array[row][column] = '.';  //Increase brightness by one step
            } else if (array[row][column] == '.'){
                array[row][column] = 'o';  //Increase brightness by one step
            } else if (array[row][column] == 'o'){
                array[row][column] = 'O';  //Increase brightness by one step
            } else if (array[row][column] == 'O'){
                array[row][column] = '0';  //Increase brightness by one step
            }
        }
    }
}

//Function to load image (make sure to read image into 2D array here)
void loadImage(char array[rows][columns]){
	char file_name [35];
	int row = 0;
	int column = 0;
	FILE* readfilepointer;
	getFile(file_name);
	readfilepointer = fopen(file_name, "r");
	
		if(readfilepointer != NULL){
     /	printf("Image successfuly loaded!\n");    		
     

     		while(fscanf(readfilepointer, "%c", &array[row][column]) == 1){
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
		




  
