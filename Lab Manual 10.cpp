// Task 1
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	
//    vector<int> myVector = {1, 2, 3, 4};
//
//    cout << "Elements in the vector: ";
//    for (vector<int>iterator it = myVector.begin(); it != myVector.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout <<endl;
//
//    myVector.push_back(5);
//
//    cout << "Elements after pushing 5: ";
//    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout <<endl;
//
//    if (!myVector.empty() && myVector.size() > 2) {
//        myVector.erase(myVector.begin() + 2);
//    }
//
//    cout << "Elements after removing element at position 2: ";
//    for (const auto& element : myVector) {
//        cout << element << " ";
//    }
//
//    return 0;
//}

// Task 2

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <iomanip>
//
//using namespace std;
//
//double calculateMean(const vector<int>& grades) {
//    if (grades.empty()) {
//        return 0.0;
//    }
//
//    int sum = 0;
//    for (int grade : grades) {
//        sum += grade;
//    }
//
//    return static_cast<double>(sum) / grades.size();
//}
//
//double calculateMedian(const vector<int>& grades) {
//    if (grades.empty()) {
//        return 0.0;
//    }
//
//    vector<int> sortedGrades = grades;
//    sort(sortedGrades.begin(), sortedGrades.end());
//
//    size_t size = sortedGrades.size();
//    if (size % 2 == 0) {
//        
//        return (sortedGrades[size / 2 - 1] + sortedGrades[size / 2]) / 2.0;
//    } else {
//
//        return sortedGrades[size / 2];
//    }
//}
//
//vector<int> calculateMode(const vector<int>& grades) {
//    vector<int> mode;
//    map<int, int> frequencyMap;
//
//    for (int grade : grades) {
//        frequencyMap[grade]++;
//    }
//
//    int maxFrequency = 0;
//    for (const auto& entry : frequencyMap) {
//        if (entry.second > maxFrequency) {
//            maxFrequency = entry.second;
//            mode.clear();
//            mode.push_back(entry.first);
//        } else if (entry.second == maxFrequency) {
//            mode.push_back(entry.first);
//        }
//    }
//
//    return mode;
//}
//
//int main() {
//    int numPairs;
//    cout << "Enter the number of name/grade pairs: ";
//    cin >> numPairs;
//
//    vector<string> names;
//    vector<int> grades;
//
//    for (int i = 0; i < numPairs; ++i) {
//        string name;
//        int grade;
//
//        cout << "Enter name #" << i + 1 << ": ";
//        cin >> name;
//
//        cout << "Enter grade #" << i + 1 << ": ";
//        cin >> grade;
//
//        names.push_back(name);
//        grades.push_back(grade);
//    }
//
//    double mean = calculateMean(grades);
//    cout << "Mean of the grades: " << fixed << setprecision(2) << mean << endl;
//
//    double median = calculateMedian(grades);
//    cout << "Median of the grades: " << fixed << setprecision(2) << median << endl;
//
//    vector<int> mode = calculateMode(grades);
//    cout << "Mode of the grades: ";
//    for (int value : mode) {
//        cout << value << " ";
//    }
//    cout << endl;
//
//    cout << "Names of students with the mode as their grade: ";
//    for (size_t i = 0; i < grades.size(); ++i) {
//        if (find(mode.begin(), mode.end(), grades[i]) != mode.end()) {
//            cout << names[i] << " ";
//        }
//    }
//
//    return 0;
//}

// Task 3

#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculatePerimeter() const {
        return side1 + side2 + side3;
    }
    
    double calculateArea() const {
        double s = calculatePerimeter() / 2; 
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void printDetails() const {
        cout << "Triangle with sides: " << side1 << " m, " << side2 << " m, " << side3 << " m" <<endl;
        cout << "Perimeter: " << calculatePerimeter() << " m" <<endl;
        cout << "Area: " << calculateArea() << " square meters" <<endl;
    }
};

int main() {
    Triangle triangle(3.0, 4.0, 5.0);

    triangle.printDetails();

    return 0;
}

// Task 4

#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    double salary;
    int hoursWorkedPerDay;
};

void adjustSalary(Employee &employee) {
    if (employee.hoursWorkedPerDay >= 12) {
        employee.salary += 150.0;
    } else if (employee.hoursWorkedPerDay >= 10) {
        employee.salary += 100.0;
    } else if (employee.hoursWorkedPerDay >= 8) {
        employee.salary += 50.0;
    }
}

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;

        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;

        cout << "Enter hours worked per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursWorkedPerDay;

        adjustSalary(employees[i]);
    }

    cout << "\nEmployee details after salary adjustment:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Name: " << employees[i].name << ", Final Salary: $" << employees[i].salary << endl;
    }

    return 0;
}





