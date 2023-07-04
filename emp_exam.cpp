#include <iostream>
using namespace std;

class Employee {
public:
  string name;
  long int number;

  void getData() {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee number: ";
    cin >> number;
  }

  void putData() {
    cout << "Employee name: " << name << endl;
    cout << "Employee number: " << number << endl;
  }
};

int main() {
  Employee employees[100];
  for (int i = 0; i < 100; i++) {
    employees[i].getData();
  }

  for (int i = 0; i < 100; i++) {
    employees[i].putData();
  }

  return 0;
}
