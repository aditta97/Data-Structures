#include <stdio.h>
int main()
{
    int n, mx = 10, loc, i, a[100], item, c;
    printf("Enter No. of elements: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        printf("\nEnter A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(;;)
    {
        if(n>=mx)
        {
            printf("Overflow");
            return 0;
        }
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
        printf("\nDo you want to continue? \nEnter 1 for Yes 0 for No\n");
        scanf("%d", &c);
        if(c==0)
        break;
    }
    return 0;
}
