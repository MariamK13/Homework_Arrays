#include <stdio.h>

int main ()
{
	const int size = 5;
	int arr[size];
	int i = 0;
	int j = 0;
	printf("enter array's elements please: ");
	for (i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < size; ++i) {
		for (j = 0; j < size; ++j) {
			if (arr[i] == arr[j] && i != j)
				break;
		}
		if (j >= size) {
			printf("Nonrepeating element: %d ", arr[i]);
					}
}
}
