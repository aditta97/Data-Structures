#include <stdio.h>
int main()
{
    int n, mx = 5, loc, i, a[100], item;
    printf("Enter No. of elements: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        printf("\nEnter A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    // if(n>=mx)
    // {
    //     printf("Overflow");
    //     return 0;
    // }

    printf("\nEnter location to insert: ");
    scanf("%d", &loc);
    printf("\nEnter item to insert: ");
    scanf("%d", &item);
    for(i = n; i >= loc; i--)
    {
        a[i+1] = a[i];
    }
    a[loc] = item;
    n = n + 1;
    printf("\nList after insert");
    for(i = 1; i <=n; i++)
    {
        printf("\nA[%d] = %d", i, a[i]);
    }
    return 0;
}
