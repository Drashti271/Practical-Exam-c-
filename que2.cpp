#include<iostream>
using namespace std;

class Student{
public:
    string name;

    void getDemo()
    {
        cout<<"Student name: ";
        cin>>name;
    }
};

class Marks : public Student{
public:
    int marks,sub1,sub2,sub3;
     void getData1(){
        cout<<"Sub1 Marks: ";
        cin>>sub1;
        cout<<"Sub2 Marks: ";
        cin>>sub2;
        cout<<"Sub3 Marks: ";
        cin>>sub3;
    }
};

class Result : public Marks{
public:
    int total,sub1,sub2,sub3;
    void getData2()
    {
        
        cout<<"Total: ";
        cin>>total;

        total = sub1 + sub2 + sub3;
    }
};

int main()
{
    Student s;
    s.getDemo();

    Marks m;
    m.getData1();

    Result r;
    r.getData2();

    return 0;
}