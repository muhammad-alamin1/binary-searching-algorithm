#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x);

int main()
{
	int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
	int x = 25;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not found in array")
				: printf("Element is found at index %d",
							result);
	getch();
}


int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = (l + r) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}
