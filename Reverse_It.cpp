#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    string section;
    int id;
};

int main() {

    int n;
    cin>>n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(students[i].section, students[j].section);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}
