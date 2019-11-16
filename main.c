#include<stdio.h>

int main()
{
    int size , i , j;
    printf("Enter the size of array : ");
    scanf("%d" , &size);
    int arr[size];
    printf("Enter %d element into an array : "  , size);
    for(i=0;i<size;i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    int temp;
    for(i=1;i<size;i++)
    {
        temp = arr[i];
        for(j=i-1;j>=0 && temp < arr[j];j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    printf("\nSorted array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d " ,arr[i]);
    }


}
