// #include <stdio.h>
//
// #include <time.h>
// int main{
//     int a[100], i, item, loc = 0, n;
//     printf("Enter no. of elements: ");
//     scanf("%d", &n);
//     return 0;
// }

#include <stdio.h>
int main(){

int getRoll;
char getConfirmation;
double midNumber[] = {12, 0, 17, 18, 0, 9, 0, 11, 0, 0, 20, 13.5, 7, 0, 0, 9,
0, 17.5, 0, 0, 0, 5, 8.5, 19, 0, 0, 0, 0, 15.5, 3, 0,
7, 19, 18, 15, 5, 9, 0, 6, 8, 15, 0, 0, 18, 0, 0, 0, 0};

printf("This is MATH-203 mid exam result.\n\n");

printf("Enter your roll: ");
scanf("%d", &getRoll);

printf("Your result is: %.2lf\n", midNumber[getRoll-1]);

printf("Wanna see all result? (y/n): ");
scanf("%s", &getConfirmation);

if(getConfirmation == 'y'){
for(int i = 1; i<=48; i++){
printf("%d = %.2lf\n", i, midNumber[i-1]);
}
}else if(getConfirmation == 'n'){
printf("Thank you!\n");
}else{
printf("Invalid input.\n");
}

printf("\n\n\n");

}
