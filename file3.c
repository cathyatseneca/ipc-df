#include <stdio.h>
/*this program will read in the information stored
  in bacon.txt and print out each record in this 
  format:

   product number - product name: price

  to the standard output.

  The listing needs to be done so that the product numbers
  are sorted.


  You may assume that the product name is no more than 
  50 characters long.  You may assume that there are no more
  than 50 records.
 */

struct Bacon{
	int productNumber;
	char productName[51];
	double productPrice;
};

void sort(struct Bacon array[],int sz){
    int i,j;

}
int main(void){

  //open the file.  name of file is bacon.txt.  Opening for
  //reading so use r as the mode
  FILE* baconFile;
  //declare a variable of type Bacon (a struct)
  struct Bacon theBacon[50];
  int readResult;
  int i=0;
  //read a record
  //as long as the file has not been fully read
  while(readResult == 3){
  	//as long as the file has not been fully read
  }

  sort(theBacon,i);
  int j;
  for(j=0;j<i;j++){
    //print it out
    printf("%d - %s: $%.2lf\n",theBacon[j].productNumber,
    						    theBacon[j].productName,
    						    theBacon[j].productPrice);
   }
  //close file


  return 0;
}