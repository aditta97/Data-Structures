#include <stdio.h>
int main(){
    FILE *myFile;
    myFile = fopen("program.txt", "r");
    int numberArray[16];
    int i;

    for(i = 0; i<7; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for(i = 0; i< 7; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
}
