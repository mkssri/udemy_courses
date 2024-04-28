 /**************************
  * author : murali sriram
  * date   : 04/26/2024
  * ***********************/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNumber;
    static int addNo;
    string name;

    Student(string n)
    {
        name = n;
        addNo++;
        rollNumber = addNo;
    }

    void display()
    {
        cout << "student name: " << name << " roll number: " << rollNumber << endl;
    }

};

int Student::addNo = 0;


int main()
{
    Student s1("murali");
    Student s2("krishna");
    Student s3("sai");

    s1.display(); 
    s2.display(); 
    s3.display(); 
    cout << "total admissions: " << Student::addNo << endl;

    return 0;
}
