# include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry,
                       float marksSocialScience, float marksBiology) {
    float total = marksEnglish + marksMaths + marksChemistry +
                  marksSocialScience + marksBiology;
    return total / 5;
}
string calculateGrade(float average) {
    if (average >= 90)      return "A+";
    else if (average >= 80) return "A";
    else if (average >= 70) return "B+";
    else if (average >= 60) return "B";
    else if (average >= 50) return "C";
    else if (average >= 40) return "D";
    else                    return "F";
}

int main() {
    string name;
    float english, maths, chemistry, socialScience, biology;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Social Science: ";
    cin >> socialScience;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    float percentage = calculateAverage(english, maths, chemistry, socialScience, biology);
    float total = english + maths + chemistry + socialScience + biology;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << calculateGrade(percentage) << endl;
    return 0;
}