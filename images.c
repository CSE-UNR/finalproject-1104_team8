//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project


#include <stdio.h>
#define rows 1000
#define columns 1000
void displayMainMenu();
void disp_edit();
int getInteger();
//void loadImage(char array[rows][columns]);
void displayImage(char array[][columns], FILE* readfilepointer);
void dimImage(char array[rows][columns],FILE* readfilepointer);
void brightenImage(char array[rows][columns], FILE* readfilepointer);

int main(){
	int input1;
	int input2;
	int row, column;
	char array[rows][columns];
	char file_name [35];
	FILE* readfilepointer;

	do{	
	displayMainMenu();
	input1 = getInteger();
	
		if(input1 == 1){
     			printf("What is the name of image file? ");
			scanf("%s", file_name);
			readfilepointer = fopen(file_name, "r");
	
	if(readfilepointer != NULL){
     		printf("\nImage successfuly loaded!\n");
     		}
     		else{
     		printf("Could not find an image with that file name.\n");
     		return 0;
     	}
     			
     		}
     		else if(input1 == 2){     		    	
     			displayImage(array, readfilepointer);
    		     			     		
     		}
     		else if(input1 == 3){
     			disp_edit();
     			scanf("%d", &input2);

     			if(input2 == 1){
     			
     			    			
     			}
     			else if(input2 == 2){
    	 		
	     		dimImage(array, readfilepointer);  
	     		  
	     		  
     			}
     			else if(input2 == 3){
	     		 
	     		brightenImage(array, readfilepointer);
	     		 
	     		 
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
<<<<<<< HEAD
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
                array[row][column] = 'O';  // Dimming brightness by vone step
            }
        }
    }
}
=======
>>>>>>> 0096cd3f8ff6b0c9991eb8753f25a3174504a2ab

//Function to display image
void displayImage(char array[][columns], FILE* readfilepointer){
	char file_name [35];
	int row, column;
			
	     	for(row = 0; row <= rows; row++){
		  for(column = 0; column <= columns; column++){
		   fscanf(readfilepointer, "%c", &array[row][column]);	  	
					
			if(array[row][column] == '0'){
				printf(" ");
			}
			else if(array[row][column] == '1'){
				printf(".");
			}
			else if(array[row][column] == '2'){
				printf("o");
			}	
			else if(array[row][column] == '3'){
				printf("O");
			}	
			else if(array[row][column] == '4'){
				printf("0");
			}
			else if(array[row][0] == '\n' || array[row][column] == '\0'){
			return;					
			}
			else if(array[row][column] == '\n'||array[row][column] == '\0'){
			printf("\n");
			break;
			}		 	
	     	  }
	     	}
return;		
}
//Dim image function
void dimImage(char array[][columns], FILE* readfilepointer){
    char file_name [35];
    int row, column;
    
    		for(row = 0; row <= rows; row++){
		  for(column = 0; column <= columns; column++){
		   fscanf(readfilepointer, "%c", &array[row][column]);	  	
					
			if(array[row][column] == '0'){
				printf(" ");
			}
			else if(array[row][column] == '1'){
				printf(" ");
			}
			else if(array[row][column] == '2'){
				printf(".");
			}	
			else if(array[row][column] == '3'){
				printf("o");
			}	
			else if(array[row][column] == '4'){
				printf("O");
			}
			else if(array[row][0] == '\n' || array[row][column] == '\0'){
			return;					
			}
			else if(array[row][column] == '\n'||array[row][column] == '\0'){
			printf("\n");
			break;
			}		 	
	     	  }
	     	}    
return;
}
//Brighten Image Function
void brightenImage(char array[][columns], FILE* readfilepointer){
    char file_name [35];
    int row, column;
  
  		for(row = 0; row <= rows; row++){
		  for(column = 0; column <= columns; column++){
		   fscanf(readfilepointer, "%c", &array[row][column]);	  	
					
			if(array[row][column] == '0'){
				printf(".");
			}
			else if(array[row][column] == '1'){
				printf("o");
			}
			else if(array[row][column] == '2'){
				printf("O");
			}	
			else if(array[row][column] == '3'){
				printf("0");
			}	
			else if(array[row][column] == '4'){
				printf("0");
			}
			else if(array[row][0] == '\n' || array[row][column] == '\0'){
			return;					
			}
			else if(array[row][column] == '\n'||array[row][column] == '\0'){
			printf("\n");
			break;
			}		 	
	     	  }
	     	}
  
  
  

return;
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
     	printf("Image successfuly loaded!\n");    		
     

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
		




  
