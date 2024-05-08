//Name: David Tsuchiya 
//Date: 4-18-24 
//Assignment: Project 8


#include <stdio.h>
#define write_filename "numbers.txt"
#define read_filename "stats.txt"

void getInts(int amount[10], FILE* readfilepointer);
void displayInts(int amount[10]);
int findMax(int *amount);
int findMin(int *amount);
void findMeanMode(int *amount, double*mean, int*mode);

int main(){

  int amount[10];
  int num = 1;
  double mean1;
  int mode1;
  int count1;
  int input1;
  int input2;
  FILE* readfilepointer, *writefilepointer;
  readfilepointer = fopen("numbers.txt", "r");
  writefilepointer = fopen("stats.txt", "w");

    printf("Get input from file? (1 - Yes, 0 - No) " );
    scanf("%d", &input1);
    
    if(input1 == 0){
    
	       printf("\nEnter 10 whole numbers (from 0 through 9)\n");
	       for(num = 1; num<= 10; num++){
	      	  scanf("%d", &amount[num-1]);
	       }
	      printf("Output stats to file? (1 - Yes, 0 - No) ");
	      scanf("%d", &input2);
	      
	      if(input1 == 0 && input2 == 0){
	     	   printf("NUMBER STATS");
		   printf("\nNumbers: ");
		   displayInts(amount);
		   int min1 = findMin(amount);
		   printf("\nMin: %d", min1);     
		   int max1 = findMax(amount);
		   printf("\nMax: %d", max1);        
		   findMeanMode(amount, &mean1, &mode1);
		   printf("\nMean: %.2lf", mean1);
		   printf("\nMode: %d\n", mode1);
	      }
	      
	      if(input1 == 0 && input2 == 1){
	     	   fprintf(writefilepointer, "NUMBER STATS");
		   fprintf(writefilepointer, "\nNumbers: ");
		  
		   for(num = 1; num<= 10; num++){p
		   	fprintf(writefilepointer,"%d ", amount[num-1]);
		   }
		   int min1 = findMin(amount);
		   fprintf(writefilepointer,"\nMin: %d", min1);    
		   int max1 = findMax(amount);
		   fprintf(writefilepointer,"\nMax: %d", max1);   
		   findMeanMode(amount, &mean1, &mode1);
		   fprintf(writefilepointer,"\nMean: %.2lf", mean1);
		   fprintf(writefilepointer,"\nMode: %d\n", mode1);
	      }
    }
    
    if(input1 == 1 && readfilepointer == NULL){
      printf("Input file does not exist.\n");
      printf("Goodebye!\n");
    }
    else if(input1 == 1 && readfilepointer != NULL){
      printf("Output stats to file? (1 - Yes, 0 - No) ");
      scanf("%d", &input2);
    }
    
    if(input1 == 1 && input2 == 0){
   
		     printf("NUMBER STATS");
		     printf("\nNumbers: ");
		     getInts(amount, readfilepointer);
		     displayInts(amount);
		     int min1 = findMin(amount);
		     printf("\nMin: %d", min1);
		     int max1 = findMax(amount);
		     printf("\nMax: %d", max1);
		     findMeanMode(amount, &mean1, &mode1);
		     printf("\nMean: %.2lf", mean1);
		     printf("\nMode: %d\n", mode1);
    }
return 0;
}
      //REQUIRED FUNCTIONS
      
//Function to store integers

   void getInts(int amount[10], FILE* readfilepointer){
      int num = 1;
   	for(num = 1; num<= 10; num++){
	   fscanf(readfilepointer, "%d", &amount[num-1]);
   }
   return;
    }
//Function to display integers

void displayInts(int amount[10]){
   int num = 1;
	for(num = 1; num<= 10; num++){
		printf("%d ", amount[num-1]);
	}
return;
}
//Function to find max
int findMax(int amount[]){
   int max = 0;
   int num = 1;
	for(num = 1; num <= 10; num++){
		if(amount[num-1] > max){
			max = amount[num-1];
		}
	}
return max;
}
//Function to find min
int findMin(int amount[]){
   int min = 9;
   int num = 1;
   
	for(num = 1; num <= 10; num++){
		if(amount[num-1] < min){
			min = amount[num-1];
		}
	}
return min;
}
//Function to find mean and mode
   void findMeanMode(int *amount, double *mean, int*mode){ 
	  int num = 1;
	  double high1;
	  double sum;
	  double count0;
	  double count1;
	  double count2;
	  double count3;
	  double count4;
	  double count5;
	  double count6;
	  double count7;
	  double count8;
	  double count9;

		for(num = 1; num <= 10; num++){
			sum = sum + amount[num-1];
		}
		  *mean = sum / 10;
	      
		
		for(num = 1; num < 10; num++){  
			  if(amount[num-1] == 0){
			  count0++;
			  }
			  else if(amount[num-1] == 1){
			  count1++;
			  }
			  else if(amount[num-1] == 2){
			  count2++;
			  }
			  else if(amount[num-1] == 3){
			  count3++;
			  }
			  else if(amount[num-1] == 4){
			  count4++;
			  }
			  else if(amount[num-1] == 5){
			  count5++;
			  }
			  else if(amount[num-1] == 6){
			  count6++;
			  }
			  else if(amount[num-1] == 7){
			  count7++;
			  }
			  else if(amount[num-1] == 8){
			  count8++;
			  }  
			  else if(amount[num-1] == 9){
			  count9++;
			  }  
		
		
		if(count0 > high1){
		high1 = 0;
		}
		if(count1 > count0){
		high1 = 1;
		} 
		if(count2 > count1){
		high1 = 2;
		}
		if(count3 > count2){
		high1 = 3;
		}
		if(count4 > count3){
		high1 = 4;
		}
		if(count5 > count4){
		high1 = 5;
		}
		if(count6 > count5){
		high1 = 6;
		}
		if(count7 > count6){
		high1 = 7;
		} 
		if(count8 > count7){
		high1 = 8;
		}
		if(count9 > count8){
		high1 = 9;
		}   
		}
		  
		*mode = high1;   
   }


