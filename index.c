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
// binary_search
#include<stdio.h>
int binary_search(int A[],int n,int data)
{
    int l,r,mid;
    l=0;
    r = n-1;
    while(l<=r){
        mid = (l+r)/2;
        if(data== A[mid]){
            return mid;
        }else if (data > A[mid]){
             l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return -1;
}
int main()
{
    int A[] = {5,7,9,12,15,20,24,27,33,40,50,65,72};
    int n = sizeof(A) / sizeof(A[0]);
    int data = 33;
    int result = binary_search(A,n,data);
    if(result!= -1){
        printf("Element found at index %d\n" , result);
    }else{
         printf("Element is not found in the array :");
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

// Bubble sort
#include <stdio.h>

void bubble_sort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {22, 14, 12, 18, 9};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Unsorted Array: ");
    print_array(A, n);
    bubble_sort(A, n);
    printf("Bubble Sort: \n");
    print_array(A, n);
    return 0;
}
// Insertion sort
#include <stdio.h>

void insertion_sort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {31, 43, 26, 29, 12};
    int n = sizeof(A) / sizeof(A[0]);
    insertion_sort(A, n);
    print_array(A, n);

    return 0;
}
// stack 
#include <stdio.h>
#define MAX_STACK 10

typedef struct {
    int top;
    int data[MAX_STACK];
} Stack;

void push(Stack *s, int x) {
    if (s->top == MAX_STACK - 1) {
        printf("Overflow\n");
    } else {
        s->top++;
        s->data[s->top] = x;
    }
}

void pop(Stack *s) {
    if (s->top == -1) {
        printf("Underflow\n");
    } else {
        printf("Popped: %d\n", s->data[s->top]);
        s->top--;
    }
}

void top(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top: %d\n", s->data[s->top]);
    }
}

void display(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->data[i]);
        }
        printf("\n");
    }
}

int main() {
    Stack my_stack;
    my_stack.top = -1; // Initialize top to -1, indicating an empty stack

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    display(&my_stack);

    pop(&my_stack);
    display(&my_stack);

    top(&my_stack);

    return 0;
}

