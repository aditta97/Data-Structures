#include <stdio.h>
int main(){
        int num;
        FILE *fptr;
        fptr = fopen("program23.txt", "w");
        if(fptr == NULL) {
                printf("Error!");
                return 0;
        }
        printf("Enter Num: ");
        scanf("%d", &num);
        fprintf(fptr, "%d", num);
        fclose(fptr);
        return 0;
}
