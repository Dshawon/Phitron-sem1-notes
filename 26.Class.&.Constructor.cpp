#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int roll;
    int cls;
    float gpa;
    Student(int roll, int cls, float gpa){
        this -> roll = roll;
        this -> cls = cls; 
        this -> gpa = gpa;
    }
};

int main(){
    Student rahim(10, 20, 30.01), karim(40, 50, 60.01);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
}

/* 
    Student(int roll, int cls, float gpa)
    {
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;        
    }

    Student(int r, int c, float g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
 */