// Started at 10:16 5-21-2022

// Section 12
// Debugger

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int i{5};
    while(i > 0) {
        cout << i << endl;
        i--;
    }
    
    int x {100}, y {200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    cout << endl;
    return 0;
}


// Section 12
// Challenge

#include <iostream>

using namespace std;

int * apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
    int *new_array {};
    
    new_array = new int[size1 * size2];
    
    int position {0};
    for (size_t i {0}; i < size2; ++i) {
        for (size_t j {0}; j < size1; ++j) {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

void print(const int *const arr, size_t size) {
    cout << "[";
    for(size_t i {0}; i < size; ++i) {
        cout << arr[i] << " ";
    cout << "]";
    cout << endl;
    }
}


int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1,array1_size);
    
    cout << "Array 2: ";
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, result_size);
    
    delete [] results;
    cout << endl;
    return 0;
}

// Ended at 11:19 5-21-2022
