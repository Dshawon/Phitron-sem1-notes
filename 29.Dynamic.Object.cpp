#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int roll;
    int cls;
    float gpa;
    Student(int roll, int cls, float gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun(){
    Student *rahim = new Student(345, 5, 4.98);  //Dynamic_Object
    return rahim;
}

int main(){
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    delete ans; // কাজ শেষে Delete করে দিবো।
}

