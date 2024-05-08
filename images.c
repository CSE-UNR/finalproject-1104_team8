//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project


#include <stdio.h>
#define rows 1000
#define columns 1000
#define read_filename "stored.txt"
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
	int save1;
	int row, column;
	char array[rows][columns];
	char file_name [35];
	char new_file[25];
	FILE* readfilepointer, *writefilepointer;
        writefilepointer = fopen("stored.txt", "w");
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
     			if(readfilepointer == NULL){
     				printf("\nsorry, no image to display\n");
     		}		    	
     			displayImage(array, readfilepointer);
    		     			     		
     		}
     		else if(input1 == 3){
     			disp_edit();
     			scanf("%d", &input2);

     			if(input2 == 1){
     			
     			    			
     			}
     			else if(input2 == 2){   	       
     	  		  
     	  		  dimImage(array,readfilepointer);
     	  		  
     	  		  printf("Would you like to save the file? (y=1 or n=0) ");
     	  		  scanf("%d", &save1);
     	  
     	  		  if(save1 == 1){
     	   		  printf("\nWhat do you want to name the image file? (include the extension) ");
     	   		  scanf("%s",new_file);
     	   		  //fprintf(writefilepointer, "%d", array);
     	   		  
     	   		  
     	   		  printf("\nImage successfully saved!\n");
     	   		  
     	  		  
     	  		  
     	  		  }
     	  		  
     	  		  		
     			}
     			else if(input2 == 3){	     		 
	     		  brightenImage(array,readfilepointer);	     		 	     		 
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
//Function save file

  
