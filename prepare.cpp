#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float score;
};

int main() {
    Student s[3];

    // Input for 3 students
    for(int i = 0; i < 3; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> s[i].id;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Score: ";
        cin >> s[i].score;
    }

    // Sorting (Descending order based on score)
    for(int i = 0; i < 2; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(s[i].score < s[j].score) {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Output
    cout << "\n--- Students Sorted by Score (Highest First) ---\n";
    for(int i = 0; i < 3; i++) {
        cout << "ID: " << s[i].id
             << ", Name: " << s[i].name
             << ", Score: " << s[i].score << endl;
    }

    return 0;
}



