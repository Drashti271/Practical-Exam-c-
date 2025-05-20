#include<iostream>
using namespace std;

class Student1{
public:
    string name;

    void getData1()
    {
        cout<<"Student1 Name: ";
        cin>>name;
        cout<<"Student2 Name: ";
        cin>>name;
        cout<<"Student3 Name: ";
        cin>>name;
        cout<<"Student4 Name: ";
        cin>>name;
        cout<<"Student5 Name: ";
        cin>>name;
    }
};

class Student2 : public Student1{
public:
    string name;

    void getData2(){

    }
};

int main()
{
    Student1 s;
    s.getData1();

    Student2 s1;
    s1.getData2();

    return 0;
}