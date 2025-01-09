#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0; i<n; i++){
        bool isSwap = false;

        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    cout << endl;
}


// selection sort ------------


void selectionSort(int arr[], int n){

    for(int i=0; i<n; i++){
        int smallestIdx = i;
         for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
         }
    }
     swap(arr[i], arr[smallestIdx]);
  }
}

// ------------- insertion sort -----------

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
      }

      arr[prev+1] = curr;
  }
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
