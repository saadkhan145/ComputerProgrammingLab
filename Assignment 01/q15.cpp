
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numSubjects;

    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    double totalWeightedPoints = 0.0;  // sum of (grade_point * credit_hours)
    double totalCreditHours    = 0.0;  // sum of all credit hours

    for (int i = 1; i <= numSubjects; i++) {
        string subjectName;
        double creditHours, gradePoint;
        char   grade;
        cout << "\nSubject " << i << " name: ";
        cin >> subjectName;
        cout << "Credit hours for " << subjectName << ": ";
        cin >> creditHours;
        cout << "Grade received (A/B/C/D/F): ";
        cin >> grade;
        // Convert letter grade to grade points
        switch (grade) {
            case 'A': gradePoint = 4.0; break;
            case 'B': gradePoint = 3.0; break;
            case 'C': gradePoint = 2.0; break;
            case 'D': gradePoint = 1.0; break;
            case 'F': gradePoint = 0.0; break;
            default: 
                cout << "Invalid grade entered. Assuming F (0 points)." << endl;
                gradePoint = 0.0;
        }
        totalWeightedPoints += gradePoint * creditHours;  // accumulate weighted points
        totalCreditHours    += creditHours;               // accumulate credit hours
    }
    // Final GPA = total weighted points / total credit hours
    double semesterGPA = totalWeightedPoints / totalCreditHours;
    cout << "\n--- Result ---" << endl;
    cout << "Total Credit Hours : " << totalCreditHours << endl;
    cout << "Semester GPA       : " << semesterGPA << endl;
    return 0;
}