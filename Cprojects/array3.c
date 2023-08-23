#include <stdio.h>

int main()
{
	const int size = 3;
	int arr1[size];
	int arr2[size];
	int new_size = 2 * size;
	int arr3[new_size];
	printf("enter the elements of the first array: ");
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr1[i]);
	}
        printf("enter the elements of the second array: ");
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < size; ++i) {
		arr3[i] = arr1[i];
	}
	for (int i = 0, j = size; j < new_size && i < size; ++i, ++j) {
		arr3[j] = arr2[i];
	}
	printf("The concatenated array is: ");
	for (int i = 0; i < new_size; ++i) {
		printf("%d ", arr3[i]);
				}
}
