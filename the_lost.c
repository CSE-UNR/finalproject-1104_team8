#include <stdio.h>
#define rows 100
#define columns 100
void displayMainMenu();
int getInteger();
void loadImage(double array[rows][columns]);
void getFile(char file_name[]);
void getString(char string[]);

int main(){

int input;
double array[rows][columns];
int row, column;
char file_name [100];


do{

displayMainMenu();
input = getInteger();

if(input == 1){
//readfilepointer = fopen(file_name, "r");
getFile(file_name);
     
     
    }

//fgets(input2, 100, stdin);


else if(input == 2){
//readfilepointer = fopen(file_name, "r");
}
//for(row = 0; row != '\0'; row++){
//for(column = 0; column != '\0'; column++){
//fscanf(readfilepointer, "%lf", &array[row][column]);


//printf("%.2lf", array[rows][columns]);
//read the text file, convert it into integers values, and then store into the array
//if image is succesffull loaded we need to display image then display main menu again
// if image is not succsfully loaded we need to say "Sorry, no image to display" then display main menu again

else if(input == 3){
//if image is not uploaded we need to say "Sorry, no image to edit" then display main menu again
//if image is succesfully loaded give dispaly second menu
}

else if(input == 0){
printf("\nGoodBye!\n");
}

else{
printf("Invalid option, please try again.");

}


}while(input != 0);




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
int input;
scanf("%d", &input);

return input;
}
//Functtion to get file
void getFile(char file_name[]){
printf("What is the name of image file? ");
getString(file_name);
FILE* readfilepointer;
getFile(file_name);
readfilepointer = fopen(file_name, "r");
if(readfilepointer != NULL){
       printf("Image successfuly loaded!\n");
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
//Function to load image ()
void loadImage(double array[rows][columns]){
char file_name [100];
char value;
FILE* readfilepointer;
getFile(file_name);
readfilepointer = fopen(file_name, "r");
if(readfilepointer != NULL){
      printf("Image successfuly loaded!\n");
      }
      else{
      printf("Could not find an image with that file name.\n");
      return;
      }
      fclose(readfilepointer);
}

