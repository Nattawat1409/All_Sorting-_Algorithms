#include<stdio.h>

int quick(int *arr, int l,int r)
{
    int pivot_val = arr[l];
    int i = l , j = r+1;
    
    do{
        do{
            i++;
        }while(arr[i] < pivot_val);
        do{
            j--;
        }while(arr[j] > pivot_val);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }while(i<j);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    
    temp  = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    
    return j;
}
void quick_sort(int *arr , int l ,int r)
{
    if(r-l <= 0)
    {
        return;
    }
    int pivot = quick(arr,l,r);
    quick_sort(arr , l ,pivot-1);
    quick_sort(arr, pivot+1 ,r);
    
    return;
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i< size; i++)
    {
        scanf("%d",&arr[i]);
    }

    quick_sort(arr, 0, size - 1);
    puts("Quick Sort ascending order : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
