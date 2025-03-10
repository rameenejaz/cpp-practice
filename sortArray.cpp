#include <iostream>
using namespace std;
class sortingArray {
    private:
    int *array1, *array2, *resultantArray;
    int size1, size2, resultantSize;
    public:
    sortingArray(int s1,int s2) {
        size1=s1;
        size2=s2;
        resultantSize=size1+size2;
        array1=new int[size1];
        array2=new int[size2];
        resultantArray=new int[resultantSize];
    }
    void inputArray() {
        cout<<"Enter elements in the first array:";
        for(int i=0; i<size1; i++) {
            cin>>array1[i];
        }
        cout<<'\n';
        cout<<"Enter elements in the second array:";
        for(int j=0; j<size2; j++) {
            cin>>array2[j];
        }
    }
    void sortArrays(int arr[], int size) {
        cout<<"Sort the two arrays!!"<<'\n';
        for(int i=0; i<size; i++) {
            for (int j=0; j<size-j-1; j++) {
                if (arr[j]>arr[j+1]) {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"Sorted Array:";
        for (int i=0; i<size; i++) {
            cout<<arr[i]<<" ";
        }
    }
    void merge() {
        sortArrays(array1,size1);
        sortArrays(array2,size2);
        int i=0, j=0, k=0;
        while (i<size1 && j<size2) {
            if (array1[i]<array2[j]) {
                resultantArray[k++]=array1[i];
            }
            else {
                resultantArray[k++]=array2[j];
            }
        }
        while(i<size1) {
            resultantArray[k++]=array1[i++];
        }
        while (j<size2) {
            resultantArray[k++]=array2[j++];
        }
        for (int i=0; i<k; i++) {
            cout<<resultantArray[i]<<" ";
        }
        cout<<'\n';
    }
};
int main () {
    int size1, size2;
    cout<<"Enter the size of array 1:";
    cin>>size1;
    cout<<"Enter the size of array 2:";
    cin>>size2;
    sortingArray sortArray(size1,size2);
    sortArray.inputArray();
    sortArray.merge();
}