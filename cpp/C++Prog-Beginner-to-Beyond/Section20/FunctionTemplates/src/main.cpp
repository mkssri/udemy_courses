// Section 20

#include<iostream>
#include<string>

template <typename T>
T min(T a, T b){
    return (a<b)?a:b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct Person{
    std::string name;
    int age;
    bool operator<(const Person &rhs)const{
        return this->age<rhs.age;
    }
};

int main(){

    Person p1;
    Person p2;

    p1.name = "abc";
    p1.age = 50;

    p2.name = "def";
    p2.age = 30;


    Person p3 = min(p1,p2);

    std::cout<< p3.name << " is younger" << std::endl;

    func(p1,p2);


    std::cout << min<int>(2,3) << std::endl;
    std::cout << min(2,3) << std::endl;
    std::cout << min('A','B')<<std::endl;
    std::cout << min(12.5, 9.2) << std::endl;
    std::cout << min(5+2*2, 7+40) << std::endl;

    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A',24);
    func('A',24);
    func(1000,"Testing");
    func(2000,std::string("Frank"));



}