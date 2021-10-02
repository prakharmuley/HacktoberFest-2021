#include<stdio.h>
int main()
{
    int a[10000],n,i,e;
    printf("\n Enter number of elements : ");
    scanf("%d",&n);
    printf("\n Enter the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter element to search : ");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            printf("\n Element is found.");
            printf("\n position of element in array is : %d",i+1);
            break;
        }
        if(i==(n-1))
        {
            printf("\n Element not found in the array!!");
        }
    }
    printf("\n\n");
    return 0;
}
