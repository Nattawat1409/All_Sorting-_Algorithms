#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *arr , int size)  // time complexity is O(n^2) //
{
    int i , j , temp , flag = 0;
    for(i = 0 ; i < size; i++) // i = 1 ; 1 < 5 //
    {
        for(j = 0 ; j < size - i - 1; j++) // j = 0
        {
            if(arr[j] > arr[j+1])
            {
                flag = 1; // unsorted array //
                temp = arr[j+1]; // backup info second info //
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if(flag == 0) // array had sorted done for whole array //
            return; //return array had had sorted done for whole array //
    }
    return;
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size]; // creating an array //
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr , size);

    printf("After using bubble sort is : \n");

    for(int i = 0; i < size; i++) // loop to show output //
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}