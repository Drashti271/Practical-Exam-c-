#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> students;
    int choice;
    string name;
    int index;

    while(true)
    {
        cout<<endl<<"Menu:"<<endl;
        cout<<"1. Add student"<<endl;
        cout<<"2. View all students"<<endl;
        cout<<"3. Delete student by index"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter student's name: ";
                cin.ignore(); 
                getline(cin, name);
                students.push_back(name);
                cout<<"Student added."<<endl;
                break;

            case 2:
                if(students.empty()) 
                {
                    cout<<"No students to display."<<endl;
                }
                else 
                {
                    cout<<"List of students: "<<endl;
                    for (int i = 0; i < students.size(); i++) 
                    {
                        cout<<i<<". "<<students[i]<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter index of student to delete (0 to "<<students.size() - 1 << "): ";
                cin>>index;

                if(index >= 0 && index < students.size()) 
                {
                    students.erase(students.begin() + index);
                    cout << "Student deleted."<<endl;
                } 
                else 
                {
                    cout << "Invalid index."<<endl;
                }
                break;

            case 4:
                cout<<"Exiting program."<<endl;
                return 0;

            default:
                cout<<"Invalid choice!!!"<<endl;
        }
    }

    return 0;
}

