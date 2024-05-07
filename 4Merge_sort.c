#include<stdio.h>
void merge(int *arr,int l ,int m ,int r)
{
    int l_idx , r_idx , arr_idx;
    int l_len = m - l+1 , r_len = r-m;
    int L[l_len] , R[r_len];
    
    for(l_idx = 0 ; l_idx < l_len; l_idx++)
    {
        L[l_idx] = arr[l+ l_idx];
    }
    for(r_idx = 0; r_idx < r_len; r_idx++)
    {
        R[r_idx] = arr[m+1+r_idx];
    }
    
    for(l_idx = 0, r_idx = 0 , arr_idx = l; arr_idx <= r; arr_idx++)
    {
        if((l_idx < l_len) && (r_idx >= r_len || L[l_idx] <= R[r_idx]))
        {
            arr[arr_idx] = L[l_idx];
            l_idx++;
        }else{
            arr[arr_idx] = R[r_idx];
            r_idx++;
        }
    }
    return;
}
void merge_sort(int *arr , int l ,int r)
{
    if(r-l == 0)
    {
        return;
    }
    
    int m = l + (r-l)/2;
    merge_sort(arr, l, m);
    merge_sort(arr, m+1, r);
    
    merge(arr , l , m ,r);
    
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
    printf("after using insertion sort is\n");
    
    merge_sort(arr , 0 , size - 1);
    //insertion_sort(arr , size);// // using function // 
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}