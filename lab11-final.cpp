#include <iostream>
#include <string>
using namespace std;
void displayName() {
cout << "********************************************" << endl;
cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
cout << "*** LAB WEEK 9 ***" << endl;
cout << "*** FA24-BSE-160 ***" << endl;
cout << "*** RAMEEN MUZAMMIL EJAZ ***" << endl;
cout << "********************************************" << endl;
}
//functions for lab task 2
void inputSize(int &size) {
cout<<"Enter the n number of elements you want to enter: ";
cin>>size;
do {
    if(size<=0) {
        cin.ignore();
        cin.clear();
        cout<<"Array size must be greater than zero, enter size again: ";
        cin>>size;
    }
    }while(size<=0);
}
void inputArray(int arr[], int size) {
    for(int index=0; index<size; index++){
        cin>>*(arr+index);
    }
}
int sumArray(int arr[], int size) {
    int sum=0;
    for (int index=0; index<size; index++) {
        sum+=*(arr+index);
    }
    return sum;
}
//functions for lab task 3
void reverse(int arr[], int size) {
    for (int index=(size-1); index>=0; index--) {
        cout<<*(arr+index)<<" ";
    }
}
//functions for lab task 4
bool isVowel(char letter) {
    letter=tolower(letter);
    return (letter=='a'|| letter=='e'|| letter=='i'|| letter=='o' ||letter=='u');
    }
string outputRemoveVowels(string &str) {
    string output="";
    for (int index = 0; index< str.length(); index++) {
        if (!isVowel(str[index])) {
            output += str[index]; 
        }
    }
    return output;
}
//functions for lab task 5
void inputString(string &inputStr) {
    cout<<"Enter two words seperated by a space: ";
    cin.clear();
    cin.ignore();
    getline(cin, inputStr);
}
void displaySwappedString(string &inputStr, string str1, string str2){
    int findSpace=inputStr.find(' ');
    str1=inputStr.substr(0,findSpace);
    str2=inputStr.substr(findSpace+1);
    cout<<"Correct Answer: "<<str2<<" "<<str1<<'\n';
}
void labtask6() {
    string inputString;
    cout<<"Enter a string: ";
    cin>>inputString;
    //printing the third character
    cout<<"The third character is: "<<inputString.at(2)<<'\n';
    //printing the second to last character of the string
    cout<<"The second to last character of the string is: "<<inputString[inputString.size()-2]<<'\n';
    //printing the first five characters of the string
    cout<<"The first five characters of the string is: "<<inputString.substr(0,5)<<'\n';
    //printing the whole string except the last two characters
    cout<<"The whole string except the last two characters is: "<<inputString.substr(0,inputString.size()-2)<<'\n';
    //printing all the characters of this string with even indices
    cout<<"The characters with even indices are: ";
    for (int index=0; index<inputString.size(); index+=2) {
        cout<<inputString[index]; 
    }
    cout<<'\n';

    //printing all the characters of this string with odd indices
    cout<<"The characters with odd indices are: ";
    for (int index=1; index<inputString.size(); index+=2) {
        cout<<inputString[index]; 
    }
    cout<<'\n';

    //printing all the characters of the string in reverse order
    cout<<"The string in reverse order is: ";
    for (int index=(inputString.size()-1); index>=0; index--) {
        cout<<inputString[index];
    }
    cout<<'\n';
    //printing the length of the string
    cout<<"The length of the string is: "<<inputString.length();
}

int main () {
    displayName();
    //for lab task 2:
    cout<<"***lab task 2***"<<'\n';
    int size;
    inputSize(size);
    int list[size];
    cout<<"Enter "<<size<<" elements: ";
    inputArray(list,size);
    cout<<"The sum of the elements in the array is: "<<sumArray(list,size)<<'\n';
    //for lab task 3
    cout<<"***lab task 3"<<'\n';
    cout<<"The reversed array: ";
    reverse(list,size);
    cout<<'\n';
    //for lab task 4
    cout<<"***lab task 4***"<<'\n';
    string input;
    cout<<"Enter a string (word): ";
    cin>>input;
    cout<<"The word after removing all vowels is: "<<outputRemoveVowels(input)<<'\n';
    //for lab task 5
    cout<<"***lab task 5***"<<'\n';
    string inputStr;
    inputString(inputStr);
    string str1;
    string str2;
    displaySwappedString(inputStr,str1,str2);
   //for lab task 6
    cout<<"***lab task 6***"<<'\n';
    labtask6();

}