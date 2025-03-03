#include <iostream>
using namespace std;
class editString{
    private:
    int NA[50]={1,2,3,4,5};
    public:
        int count=5;
    void insertAtEnd(int n) {
        if(count<50) {
            NA[count]=n;
            count++;
        }
        else {
            cout<<"Array is full"<<'\n';
        }
    }
    void insertAtStart(int n){
        if(count<50) {
            for (int i=count; i>0; i--) {
                NA[i]=NA[i-1];
            }
            NA[0]=n;
            count++;
        }
        else {
            cout<<"Array is full"<<'\n';
        }
    }
    void insertBetween(int pos, int n) {
        if(count<50 && pos>=0 && pos<=count) {
            for (int i=count; i>pos; i--) {
                NA[i]=NA[i-1];
            }
            NA[pos]=n;
            count++;
        }
        else {
            cout<<"Invalid position or array is full"<<'\n';
        }
    }
    void findAndReplaceAll(int oldNum, int newNum) {
        bool found=false;
        for (int i=0; i<count; i++) {
            if (NA[i]==oldNum) {
                NA[i]=newNum;
                found=true;
            }
        }
        if (!found) {
            cout<<"Number not found"<<'\n';
        }
    }
    void findAndReplaceByChoice(int oldNum, int newNum) {
        for (int i=0; i<count; i++) {
            if (NA[i]==oldNum) {
                NA[i]=newNum;
                return;
            }
        }
        cout<<"Number not found"<<'\n';
    }
    void deleteOneNumber(int num) {
        int pos=-1;
        for (int i=0; i<count; i++) {
            if (NA[i]==num) {
                pos=i;
                break;
            }
        }
        if (pos==-1) {
            cout<<"Number is not found"<<'\n';
            return;
        }
        for (int i = pos; i < count - 1; i++) { // Shift left
            NA[i] = NA[i + 1];
        }
        count--;
    }
    void deleteAll(int num) {
        int newCounter=0;
        for (int i=0; i<count; i++) {
            if(NA[i] != num) {
                NA[newCounter]=NA[i];
                newCounter++;
            }
        }
        count=newCounter;
    }
    void viewAll() {
        if(count==0) {
            cout<<"Array is empty"<<'\n';
        }
        for (int i=0; i<count; i++) {
            cout<<NA[i]<<" ";
        }
        cout<<'\n';
    }

};
void showMenu() {
    cout<<"1. Insert number at the end of the array."<<'\n';
    cout<<"2. Insert number at the start of the array."<<'\n';
    cout<<"3. Insert number in between of the array."<<'\n';
    cout<<"4. Search and replace all."<<'\n';
    cout<<"5. Search and replace by choice."<<'\n';
    cout<<"6. Delete one number."<<'\n';
    cout<<"7. Delete all numbers."<<'\n';
    cout<<"8. View all elements."<<'\n';
    cout<<"0 to exit."<<'\n';
    cout<<"Choose from the following options (1-8 or 0 to exit): ";
}
int main () {
    editString alterString;
    int option=-99;
    while (option!=0) {
        showMenu();
        cin>>option;
        switch(option) {
            case 1: {
                int n;
                cout<<"Enter number to insert at end: ";
                cin>>n;
                alterString.insertAtEnd(n);
                break;
            }
            case 2: {
                int n;
                cout<<"Enter number to insert at start: ";
                cin>>n;
                alterString.insertAtStart(n);
                break;
            }
            case 3: {
                int pos, n;
                cout<<"Enter position and number to insert: ";
                cin>>pos>>n;
                alterString.insertBetween(pos, n);
                break;
            }
            case 4: {
                int oldNum, newNum;
                cout<<"Enter number to replace and new number: ";
                cin>>oldNum>>newNum;
                alterString.findAndReplaceAll(oldNum, newNum);
                break;
            }
            case 5: {
                int oldNum, newNum;
                cout<<"Enter number to replace and new number: ";
                cin>>oldNum>>newNum;
                alterString.findAndReplaceByChoice(oldNum, newNum);
                break;
            }
            case 6: {
                int num;
                cout<<"Enter number to delete: ";
                cin>>num;
                alterString.deleteOneNumber(num);
                break;
            }
            case 7: {
                int num;
                cout<<"Enter number to delete all occurrences: ";
                cin>>num;
                alterString.deleteAll(num);
                break;
            }
            case 8:
                alterString.viewAll();
                break;
            case 0:
                return 0;
            default:
                cout<<"Invalid option. Please try again."<<'\n';
        }
    }
}


void deleteAll(int num) {
    int newCounter=0, i=0;
    while (i < count) {
        if(NA[i] != num) {
            NA[newCounter]=NA[i];
            newCounter++;
        }
        i++;
    }
    count=newCounter;
}