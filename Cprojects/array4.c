#include <stdio.h>
#include <stdbool.h>

int main ()
{
	char str[] = "()(()(";
	long unsigned int size = sizeof(str) / sizeof(str[0]);
	bool is_palindrome = true;
	for (int i = 0; i < size - 1; ++i) {
		for (int j = size - 1; j >= 0; --j) {
			if (str[i] == str[j]) {
			is_palindrome = true;
		 } else {
			 is_palindrome = false;
		 }
	}
	}
	if (is_palindrome) {
		printf("Yes,the string is palindrome\n");
	} else {
		printf("No, the string is nonpalindrome\n");
	}
}
