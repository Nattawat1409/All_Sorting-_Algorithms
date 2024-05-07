#include<stdio.h>
int smallest(int *arr , int start , int size)
{
    int i , cur_pos = start; // 1st possition //
    for(i = start + 1; i < size; i++)
    {
        if(arr[i] < arr[cur_pos]) //arr[1] < arr[0] // 1 < 2
        {
            cur_pos = i; // 0 = 1 // // for update new pos value //
        }
    }

    return cur_pos; // return value of pos to other function //
}

void selection_sort(int *arr , int size)
{
    int i , pos , temp;
    for(i = 0; i < size; i++)
    {
        pos =  smallest(arr , i , size); // 1 //
        temp = arr[i]; // temp = arr[0] //
        arr[i] = arr[pos]; // arr[0] = arr[1]
        arr[pos] = temp;
    }

    return;
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
    printf("after using Selection sort is\n");

    selection_sort(arr , size);
    //insertion_sort(arr , size);// // using function // 

    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}