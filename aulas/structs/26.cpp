#include <string>

using namespace std;

struct Student {
    string name;
    float average = 0.0;
    string enrollmentNumber;
};

Student max(Student V[], int n) {
    Student x = V[0];
    for (int i = 1; i < n; i++) {
        if (V[i].average > x.average) {
            x = V[i];
        }
    }
    return x;
}

int main() {
    Student student1;
    student1.name = "Pedro";
    student1.average = 9.8;
    student1.enrollmentNumber = "123456";

    Student student2;
    student2.name = "Maria";
    student2.average = 8.7;
    student2.enrollmentNumber = "654321";

    Student student3;
    student3.name = "Yuri";
    student3.average = 10;
    student3.enrollmentNumber = "987654";

    Student students[] = {student3, student2, student1};
    Student x = max(students, 3);
    printf("%s\n", x.name.c_str());
}
