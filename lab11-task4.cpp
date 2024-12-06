#include <iostream>
#include <string>
using namespace std;
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
int main () {
    string input;
    cout<<"Enter a string (word): ";
    getline(cin, input);
    cout<<"The word after removing all vowels is: "<<outputRemoveVowels(input)<<'\n';

}