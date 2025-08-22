#include <stdio.h>

//aaa14.58

#define swap(a, b)  do  \
                    {   \
                        int t = a; \
                        a = b;     \
                        b = t;     \
                    } while(0)// 交换两个变量的值


// 函数声明
void bubble_sort(int arr[], int len);
 
int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);  // 计算数组长度

    bubble_sort(arr, len);  // 调用冒泡排序函数
 
    // 打印排序后的数组
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}

// 冒泡排序函数
void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len-1; i++) 
    {
        for (int j = 0; j < len-1 - i; j++) // 外层循环控制排序趟数，内层循环控制每趟排序的元素个数
        {
            if (arr[j] > arr[j + 1]) // 如果前面的元素大于后面的元素，则交换位置
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


