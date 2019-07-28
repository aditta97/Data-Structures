#include<stdio.h>
#include <math.h>
int n;
void Tower(int n, char a, char b, char c)
{
    if(n==1){
        printf("\n%c----------> %c", a, c);
    }
    else{
        Tower(n-1, a, c, b);
        printf("\n%c----------> %c by %c", a, c, b);
        Tower(n-1, b, a, c);
    }
}
int main()
{
    printf("\nEnter Number of Disks: ");
    scanf("%d", &n);
    Tower(n, 'X', 'Y', 'Z');    //X, Y, Z = Assignments variables.
    printf("\nNumber of Steps:%f",pow(2,n)-1);
    return 0;
}

        //If any function call itself it's called recursion.
