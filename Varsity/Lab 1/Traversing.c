#include<stdio.h>
int main ()
{
    int a[1000], i, counter = 0, n, key;
    printf("Enter no. of elements: \n");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for(i = 1; i <= n; i++)
    {
        printf("\na[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter key value: \n");
    scanf("%d", &key);
    for(i = 1; i <= n; i++)
    {
        if(a[i] > key)
        counter++;
    }

    printf("\nNo. of elements greater than %d = %d", key, counter);
    return 0;
}
