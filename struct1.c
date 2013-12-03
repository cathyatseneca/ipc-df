#include <stdio.h>
/*This program will read the videos from the file videos.txt and store
them in an array of VideoInfo's.  It will sort them and then reprint the
videos to the standard output such that they are sorted by their lengths.
In the output show the length in the format: mm:ss
*/
struct VideoInfo{
  char title_[51]   //title of video
  int length_;      //length of video in seconds
};

/*this function will read in the file pointed to by 
  fp and store the video information into the array vi.
  function returns number of items read from the file*/
int readFile(FILE* fp, struct VideoInfo vi[]);
void sort(struct VideoInfo vi[],int size);
void print(struct VideoInfo vi[],int size)

int main(void){
	//declare an array of 50 VideoInfo structs
	struct VideoInfo vi[50];
    FILE* fp=fopen("videos.txt","r");
	//read in a file and put the information into the array
	//sort the array
	//print the array with length formated in the form mm:ss
}
int readFile(FILE* fp, struct VideoInfo vi[]){

}

void print(struct VideoInfo vi[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%s - %2d:%2d\n",vi[i].title_,vi[i].length_/60,vi[i].length_%60);
	}

}
void sort(struct VideoInfo vi[],int size){
	int i,j;
	struct VideoInfo tmp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1;j++){
			if(vi[j].length_ >vi[j+1].length_){
				tmp=vi[j];
				vi[j]=vi[j+1];
				vi[j+1]=tmp;
			}
		}
	}
}











