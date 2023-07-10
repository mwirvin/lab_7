/*
Michael Irvin
mi458851

lab 7 

Consider running Bubble Sort on the array shown below. Write a c program to compute the number of swaps needed for each index in the array. 

97  16  45  63  13  22  7  58  72

upload to git 

*/

#include <stdlib.h>
#include <stdio.h>

int bubbleSort(int arr[], int size){
    int temp;
    for(int i = 0; i < size ; i++){
        int counter = 0;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
                counter++;     
            }
        }
        printf("%d ", counter);
    }
}

int display(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};

    int len = sizeof(arr)/sizeof(int);

    printf("Array: \n");
    display(arr, len);
    printf("Total number of swaps for each element \n");
    bubbleSort(arr, len);

    
    
    return 0;

}

