//linear search
#include<stdio.h>
int linear_search(int arr[],int n, int x){
      for(int i = 0; i<n;i++){
        if(arr[i] == x){
            return i;
        }
      }
      return -1;
}
 int main (void){
           int arr[] = {10,50,30,70,80,60};
           int n = sizeof(arr);
           int x = 30;
           int result = linear_search(arr, n,x);
           if(result!= -1){
            printf("Element found at index %d\n", result);
           }else{
             printf("Element not found in an array\n");
           }
           return 0;

      }
// selection sort
#include <stdio.h>

// Function to perform selection sort
void selection_sort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}

int main() {
    int A[] = {9, 13, 15, 11, 2};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the number of elements in the array

    selection_sort(A, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
