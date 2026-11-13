#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;
    students[101] = "Asha";
    students[102] = "Ravi";

    int id = 102;
    auto student = students.find(id);
    if (student != students.end()) {
        cout << "Student " << id << ": " << student->second << '\n';
    } else {
        cout << "Student not found\n";
    }
}
