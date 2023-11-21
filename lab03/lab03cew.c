  // Question 1
// #include <stdio.h>
// // Function to swap two elements using call by reference
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int num1, num2;

//     // Input two numbers
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     // Display original numbers
//     printf("Original numbers: %d, %d\n", num1, num2);

//     // Call the swap function to swap the numbers
//     swap(&num1, &num2);
//     // Display swapped numbers
//     printf("Swapped numbers: %d, %d\n", num1, num2);

//     return 0;
// }

      // Question 2
// #include <stdio.h>
// #include <string.h>

// // Function to print a string in reverse using pointers
// void printReverse(char *str) {
//     int length = strlen(str);
//     char *endPtr = str + length - 1; // Points to the last character of the string

//     // Traverse the string in reverse and print characters
//     while (endPtr >= str) {
//         printf("%c", *endPtr);
//         endPtr--; // Move the pointer to the previous character
//     }
//     printf("\n");
// }
// int main() {
//     char inputString[100];

//     // Input a string from the user
//     printf("Enter a string: ");
//     scanf("%s", inputString);

//     // Print the string in reverse using pointers
//     printf("String in reverse: ");
//     printReverse(inputString);

//     return 0;
// }

// Question 3
// #include <stdio.h>
// int main() {
//     int n;
//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     // Declare an array of size 'n'
//     int arr[n];
//     // Input array elements using pointers
//     int *ptr = arr;
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", ptr + i);
//     }
//     // Print array elements using pointers
//     printf("Array elements: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }

// Question 4
// #include <stdio.h>

// int main() {
//     int n, searchElement;
//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];  // Declare an array of size 'n'
//     int *ptr = arr;  // Input array elements using pointers
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", ptr + i);
//     }
//     // Input the element to search
//     printf("Enter the element to search: ");
//     scanf("%d", &searchElement);
//     // Search for the element using pointers
//     int found = 0;
//     for (int i = 0; i < n; i++) {
//         if (*(ptr + i) == searchElement) {
//             found = 1;
//             printf("Element found at index: %d\n", i);
//             break;
//         }
//     }
//     if (!found) {
//         printf("Element not found in the array.\n");
//     }
//     return 0;
// }

// Question 5
#include <stdio.h>

// Function to add two matrices and store the result in 'result' matrix
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Calculate the index for the current element in the matrices
            int index = i * cols + j;
            // Access elements using pointers and store the sum in 'result' matrix
            *(result + index) = *(mat1 + index) + *(mat2 + index);
        }
    }
}
int main() {
    int rows, cols;
    // Input the number of rows and columns for the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    // Declare matrices and result matrix
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Call the function to add matrices
    addMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], rows, cols);
    printf("Resultant matrix after addition:\n");  // Print the resulting matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

