#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortinwave(int arr[],int n)
{
    sort(arr, arr+n);  //input array sorting

    for(int i=0; i<n-1; i+=2)  //swapping adjacent elements
        swap(&arr[i],&arr[i+1]);

}


int main()
{
    int arr[] = {10,90,49,2,1,5,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortinwave(arr,n);

    for (int i=0; i<n; i++)
    printf("%d",arr[i]);

    return 0;
}
