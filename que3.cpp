#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> v1 = {"Banana = 30"};
    vector<string> v2 = {"Grapes = 50"};
    vector<string> v3 = {"Pineapple = 40"};
    vector<string> v4 = {"Lichi = 50"};
    vector<string> v5 = {"Jambu = 60"};

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<"-----Product List-----"<<endl;
        cout<<v1[i]<<endl;
    }

    for(int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<endl;
    }

    for(int i = 0; i < v3.size(); i++)
    {
        cout<<v3[i]<<endl;
    }

    for(int i = 0; i < v4.size(); i++)
    {
        cout<<v4[i]<<endl;
    }

      for(int i = 0; i < v5.size(); i++)
    {
        cout<<v5[i]<<endl;
    }
    
    return 0;
}

