//This Program was made as a safe and reminder for sortings, especially in c++.
//-Nala Ahmad Rayyan Saragih

#include <iostream>
using namespace std;

void BubbleSort(int array[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-(i+1); j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

void SelectionSort(int array[], int size){
    for(int i=0; i<size; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(array[min]>array[j]){
                min = j;
            }
        }

        swap(array[min], array[i]);
    }
}

void InsertionSort(int array[], int size){
    for(int i=0; i<size; i++){
        for(int j=i; j>0; j--){
            if(array[j]<array[j-1]){
                swap(array[j],array[j-1]);
            }
        }
    }
}

void ShellSort(int array[], int size){
    for(int i=size; i>0; i/=2){
        for(int j=0; j+i<size; j++){
            if(array[j]>array[j+i]){
                swap(array[j], array[j+i]);
            }
        }
    }
}

void PivotPartition(int array[], int first, int last){
    
}

void QuickSort(int array[], int size){
    
}

void BucketSort(int array[], int size){
    int bucket[10][size];
    bool moved[size];

    for(int i=0; i<10; i++){
        int temp[size];
        for(int j=0; j<size; j++){hj
            if((array[j]/10) == i){
                temp[j]=array[j];
            }
        }
        InsertionSort(temp, size);
    }
}

int main(){
    //Declaring and How many elements does the array have
    int size;
    cout << "Array size: "; cin >> size;
    
    //Declaring the array and inserting the elements
    int array[size];
    cout << "Array elements: "; 
    for(int i=0; i<size; i++){
        cin >> array[i];
    }

    //Sorting Processes....
    //BubbleSort(array,size);
    //SelectionSort(array,size);
    //InsertionSort(array,size);
    ShellSort(array,size);
    QuickSort(array, 0, size-1);

    //Print out the sorted array
    cout << endl;
    for(int i : array){
        cout << i << " ";
    }

    return 0;
}