/**************************
 * author : murali sriram
 * date   : 03/17/2024
 * ***********************/

#include <iostream>

using namespace std;

class Employee
{
private:
    int eid;
    string name;
public:
    Employee(int e, string n)
    {
        eid  = e;
        name = n;
    }
    int getEmployeeID(){ return eid; }
    string getName() {return name;}
};

class FulltimeEmployee : public Employee
{
private:
    int salary;
public:
    FulltimeEmployee(int e, string n, int sal):Employee(e,n)
    {
        salary = sal;
    }
    int getSalary() {return salary;}
};

class ParttimeEmployee : public Employee
{
private:
    int wage;
public:
    ParttimeEmployee(int e, string n, int w):Employee(e,n)
    {
        wage = w;
    }
    int getWage() {return wage;}
};

int main()
{
    FulltimeEmployee p1(1, "murali", 400);
    ParttimeEmployee p2(2, "krishna", 500);

    cout << "name: " << p1.getName() << ", employee id: " << p1.getEmployeeID() << " & salary: " << p1.getSalary() << endl;  
    cout << "name: " << p2.getName() << ", employee id: " << p2.getEmployeeID() << " & salary: " << p2.getWage() << endl;  

    return 0;
}
