#include <stdio.h>

int binary_search(int a[], int low_index, int high_index, int num);

int main()
{
    int a[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_index = 0, high_index = 15, num = 87;

    int find_element =  binary_search(a, low_index, high_index, num);


    if(find_element == NULL)
        printf("%d is not in the array\n", a[find_element]);
    else
        printf("%d is found in the array. It is the %dth element of the array. \n", a[find_element], find_element);

    getch();
}

int binary_search(int a[], int low_index, int high_index, int num)
{
    int mid_index;
    while(low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2;
        if(num == a[mid_index])
        {
            break;
        }
        if(num < a[mid_index])
        {
            high_index = mid_index - 1;
        }
        else if(num > a[mid_index])
        {
            low_index = mid_index + 1;
        }
    }
    return mid_index;
}
