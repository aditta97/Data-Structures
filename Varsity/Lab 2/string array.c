#include <stdio.h>
#include <string.h>
int main() {
    char x[20] [20], key[20];
    int i, n, counter=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter words: ");
    for(i=1; i <=n; i++)
    {
        printf("\nX[%d]=", i);
        scanf("%s", x[i]);
    }
    printf("Enter key value: \n");
    scanf("%s", &key);
    for(i=1; i <=n; i++)
    {
        if(strcmp(x[i], key)!=0)
        counter++;
        //printf("%s", x[i]);
    }
    printf("\nThere are %s = %d", key, counter);
    printf("\n%d", counter);
    return 0;
}
