#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
int arr[MAX_SIZE]; // Declare the array
int n; // Number of elements in the array
int i; // Loop variable
int flag = 1; // Flag to check if array is strictly even

// Read the number of elements in the array
scanf("%d", &n);

// Read the elements of the array

for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

// Check if array is strictly even
for(i = 0; i < n; i++) {
if(arr[i] % 2 == 0 && i % 2 != 0) { // If element is even and its index is odd
flag = 0; // Set the flag to false
break;
}
}

// Print the result
if(flag == 1) {
printf("True");
}
else {
printf("False");
}

return 0;
}