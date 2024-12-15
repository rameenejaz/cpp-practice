#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;             // Name of student
    int totalSubjects;       // Number of subjects (max 4)
    string subjects[4];      // Names of subjects (max 4)
    double marks[4];         // Marks in each subject (max 4)
};

void getData(Student students[], int totalStudents) {
    for (int i = 0; i < totalStudents; i++) {
        cout << "\nFor student " << (i + 1) << ":\n";

        cin.ignore(); // Clear the input buffer before getline
        cout << "Enter name: ";
        getline(cin, students[i].name);

        do {
            cout << "Enter the number of subjects (1-4) for " << students[i].name << ": ";
            cin >> students[i].totalSubjects;

            if (students[i].totalSubjects <= 0 || students[i].totalSubjects > 4) {
                cout << "INVALID!! Number of subjects must be between 1 and 4. Please try again.\n";
            }
        } while (students[i].totalSubjects <= 0 || students[i].totalSubjects > 4);

        cin.ignore(); // Clear the input buffer before getline

        for (int j = 0; j < students[i].totalSubjects; j++) {
            cout << "Enter name of subject " << (j + 1) << ": ";
            getline(cin, students[i].subjects[j]);
            cout<<'\n';
            cout << "Enter marks for " << students[i].subjects[j] << ": ";
            cin >> students[i].marks[j];

            // No need for cin.ignore() here as there are no subsequent getline calls in this loop
        }
    }
}

void printRecords(Student students[], int totalStudents) {
    for (int i = 0; i < totalStudents; i++) {
        cout << "\nFor student " << (i + 1) << ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "--- Subjects and Marks ---\n";

        for (int j = 0; j < students[i].totalSubjects; j++) {
            cout << students[i].subjects[j] << ": " << students[i].marks[j] << "\n";
        }
    }
}

int main() {
    int totalStudents;
    Student students2[8]; // Max 8 students

    do {
        cout << "Enter the number of students (1-8): ";
        cin >> totalStudents;

        if (totalStudents <= 0 || totalStudents > 8) {
            cout << "INVALID!! Number of students must be between 1 and 8. Please try again.\n";
        }
    } while (totalStudents <= 0 || totalStudents > 8);

    getData(students2, totalStudents);
    printRecords(students2, totalStudents);

    return 0;
}
