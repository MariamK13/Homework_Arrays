#include <stdio.h>

int main ()
{
	int size = 5;
	int array[size];
	int element = 0;
	int target = 0;	
	printf("Enter please the element which index is your target\n");
	scanf("%d", &element);
	printf("Enter please the array elements\n");
	for(int i = 0; i < size; ++i) {
		scanf("%d", &array[i]);
		if (element == array[i])
		{
			target = i;
		} 
	}

	printf ("the target is %d ", target);
}	

