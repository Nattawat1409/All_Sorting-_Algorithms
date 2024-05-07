//Nattawat Ruebsumrit 66070503420//
// Insertion sort //
#include <stdio.h>
void insertion_sort(int *arr , int size)
{
    int i , j , temp;
    for(i = 1; i < size; i++)
    {
        temp = arr[i]; // temp = arr[1] // // record point at 1st time //
        j = i-1; // old point using from i // // j = 0 //
        while( (temp < arr[j]) && (j >= 0) )
        {
            arr[j+1] = arr[j]; // arr[1] = arr[0] //
            j--;    // from j = 0 to j = -1 //
        }
        arr[j+1] = temp; // arr[-1 + 1] = temp  because bring in the value from temp record old value at that moment//
    }

    return;
}

void bubblesort(int *arr , int size)
{
    int temp , i , j , flag = 0;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j+1] < arr[j]) // if arr[2] < arr[1] //
            {
                flag = 1;
                temp = arr[j+1];
                arr[j+1] = arr[j]; // arr[2] = arr[1] //
                arr[j] = temp; // arr[1] = arr[j+1]=>arr[2] //
            }
        }
        if(flag == 0) // array had sorted for whole array done //
        {
            return;
        }
    }
}


int main() 
{
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("after using insertion sort is\n");

    bubblesort(arr , size);
    //insertion_sort(arr , size);// // using function // 
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
