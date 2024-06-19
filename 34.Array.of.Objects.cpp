#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    int marks;
};

int main(){
    int n;
    cin>>n; 
    Student a[n];                     //Static
    //Student* a = new Student[n];    //Dynamic
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
}

/* 
Input:
3
Shawon Hussain
21 91
Rakib Khan
22 92
Sakib Wala
23 93

Output:
Shawon Hussain 21 91
Rakib Khan 22 92
Sakib Wala 23 93

 */
