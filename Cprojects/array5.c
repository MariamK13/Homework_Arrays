#include <stdio.h>

int main ()
{
	const int size = 5;
	int array[size];
	int max = 0;

	printf("Enter array elements: ");
	for (int i = 0; i < size; ++i) {
		scanf(" %d", &array[i]);
	}
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
		if (array[i] < array[j])
		{
			max = array[i];
			array[i] = array[j];
			array[j] = max;
		} 
	}
}

	printf("The second max element is %d ", array[1]);
}
