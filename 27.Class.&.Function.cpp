#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int roll;
    int cls;
    float gpa;
    Student(int roll, int cls, float gpa){
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

Student fun(){
    Student rahim(345, 5, 4.99);
    return rahim;
}

int main(){
    Student ans = fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
}