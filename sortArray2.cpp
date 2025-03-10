#include <iostream>
using namespace std;

class sortingArray {
private:
    int *array1, *array2, *resultantArray;
    int size1, size2, resultantSize;

public:
    // Constructor to allocate memory for arrays
    sortingArray(int s1, int s2) {
        size1 = s1;
        size2 = s2;
        resultantSize = size1 + size2;

        array1 = new int[size1];
        array2 = new int[size2];
        resultantArray = new int[resultantSize];
    }
    void inputArray() {
        cout << "Enter elements in the first array: ";
        for (int i = 0; i < size1; i++) {
            cin >> array1[i];
        }
        cout << "Enter elements in the second array: ";
        for (int j = 0; j < size2; j++) {
            cin >> array2[j];
        }
    }
    void sortArray(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void merge() {
        sortArray(array1, size1);
        sortArray(array2, size2);

        int i = 0, j = 0, k = 0;
        while (i < size1 && j < size2) {
            if (array1[i] < array2[j]) {
                resultantArray[k++] = array1[i++];
            } else {
                resultantArray[k++] = array2[j++];
            }
        }
        while (i < size1) {
            resultantArray[k++] = array1[i++];
        }
        while (j < size2) {
            resultantArray[k++] = array2[j++];
        }
        cout << "Merged Sorted Array: ";
        for (int i = 0; i < resultantSize; i++) {
            cout << resultantArray[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    int size1, size2;
    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter size of second array: ";
    cin >> size2;
    sortingArray obj(size1, size2);
    obj.inputArray();
    obj.merge();
    return 0;
}
