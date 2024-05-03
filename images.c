//Authors: David Tsuchiya & Artur Volkau
//Date: 5-2-24
//Assignment: Final Project

#include <stdio.h>





int main(){

int input1;
FILE* readfilepointer;
	
	char input2 [100];
	
	printf("***ERINSTAGRAM***\n");
	printf("1. Load image\n");
	printf("2. Display image\n");
	printf("3. Edit image\n");
	printf("0. Exit\n");
	
	printf("Choose from one of the options above: ");
	scanf("%d", &input1);
	
	
	if(input1 == 1){
		printf("What is the name of image file? ");
		fgets(input2, 100, stdin);

}



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


  
