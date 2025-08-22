#include <stdio.h>
//#bb15.03
//bb15.03
int num[]={6,3,5,2,4,1,9,8,7,0,11,10,15,14,13,12,19};

#define swap(a,b) do{\
                        int temp=a;\
                        a=b;       \
                        b=temp;    \
                    }while(0)


void quick_sort(int arr[], int low, int high)
{
    if(low >= high)    return;

    int pivot = arr[low];
    int i = low,j = high;

    while(i < j)
    {
        while(i < j && arr[j] >= pivot)    j--;
        arr[i] = arr[j];
        while(i < j &&arr[i] <= pivot)    i++;
        arr[j] = arr[i];
    
    }
    arr[i] = pivot;

    quick_sort(arr, low, i-1);
    quick_sort(arr, i+1, high);
}


int main()
{
    int len = sizeof(num) / sizeof(num[0]);
    for(int i=0;i<len;i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    quick_sort(num, 0, len-1);

    for(int i=0;i<len;i++)
    {     
        printf("%d ", num[i]);
    }
    return 0;
}



