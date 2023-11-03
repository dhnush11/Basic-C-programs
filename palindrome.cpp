#include <stdio.h>
int main() {
    int number, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int k = number;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    if (k==reverse)
    	printf("Palindrome");
    else 
    	printf("Not a Palindrome");
}