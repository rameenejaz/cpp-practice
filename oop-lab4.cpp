//making a number editor
#include <iostream>
using namespace std;
class editArray {
    private:
    int NA[10]={0};
    int counter=0;
    public:
    void insertAtEnd(int number) {
        if(counter<10) {
            NA[counter]=number;
            counter++;
        }
        else {
            cout<<"Array is full"<<'\n';
        }
        cout<<"Number entered at end of array!"<<'\n';
    }
    void InsertAtSpecific(int pos, int number) {
        int i=counter;
        while(i>pos) {
            NA[i]=NA[i-1];
            i--;
        }
        NA[pos]=number;
        counter++;
        cout<<"Number entered at specific position in array!"<<'\n';
    }

    void searchDeleteNum(int number) {
        int pos=-99;
        for (int i=0; i<counter; i++) {
            if(NA[i]==number) {
                pos=i;
                break;
            }
        }
        for (int j=pos; j<(counter-1); j++) {
            NA[j]=NA[j+1];
        }
        counter--;
        if(pos==-99) {
            cout<<"Number not found!"<<'\n';
        }   
        cout<<"Number searched and deleted!"<<'\n';

    }
    void searchAndDeleteIndex(int pos) {
        if (pos < 0 || pos >= counter) {
            cout << "Invalid index entered!" << '\n';
            return;
        }
        for (int i = pos; i < (counter - 1); i++) {
            NA[i] = NA[i + 1];
        }
        counter--;
        cout<<"Number searched and deleted at specific index"<<'\n';
    }
    void deleteAll() {
        counter=0;
        cout<<"All numbers deleted successfully!"<<'\n';
    }
    void viewAll() {
        if (counter==0) {
            cout<<"Array is empty!"<<'\n';
        }
        for (int i=0; i<counter; i++) {
            cout<<NA[i]<<" ";
        }
        cout<<endl;
    }

};
void showMenu() {
    cout << "1. Insert number at the end of the array."<<'\n';
    cout << "2. Insert number at specific index of the array."<<'\n';
    cout << "3. Search and delete number."<<'\n';
    cout << "4. Search and delete from specific index."<<'\n';
    cout << "5. Delete all numbers."<<'\n';
    cout << "6. View all elements."<<"\n";
    cout << "0 to exit."<<'\n';
    cout << "Choose from the following options (1-6 or 0 to exit): "<<'\n';
}
int main () {
    editArray edited;
    int inputNum=-99;
    int option=-1;
    int position=-99;
    while (option!=0) {
        showMenu();
        cin>>option;
        switch(option) {
            case 1:
            cout<<"Enter the number you want to add at the end: ";
            cin>>inputNum;
            edited.insertAtEnd(inputNum);
            cout<<'\n';
            break;
            case 2:
            cout<<"Enter the position at which you want to insert the number:";
            cin>>position;
            cout<<"Enter the number you want to insert at position "<<position<<":";
            cin>>inputNum;
            edited.InsertAtSpecific(position,inputNum);
            break;
            case 3:
            cout<<"Enter the number you want to insert at position "<<position<<":";
            cin>>inputNum;
            edited.searchDeleteNum(inputNum);
            break;
            case 4:
            cout<<"Enter the position at which you want to insert the number:";
            cin>>position;
            edited.searchAndDeleteIndex(position);
            break;
            case 5:
            edited.deleteAll();
            break;
            case 6:
            edited.viewAll();
            break;
            case 0:
            return 1;
        }
    }
}