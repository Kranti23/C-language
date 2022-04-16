#include<stdio.h>
#include<stdlib.h>

void Subset(int arr1[],int arr2[],int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

                   if(arr2[i]==arr1[j])
                    break;

        if(j==m)
        printf("It is a subset");
    }

}

int main()
{
    int arr1[] ={4,65,12,8,6};
    int arr2[]={4,12,6};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    Subset(arr1,arr2,m,n);

        //printf("arr2 is a subset of arr1");


    return 0;
}
