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
Student* fun(){
    Student rahim(345, 5, 4.98);
    Student* ptr = &rahim;
    return ptr;
}
int main(){
    Student* ans = fun();
    cout<< ans->roll <<" "<< ans->cls <<" "<< ans->gpa;
}

/*NB:  এই কোডটি Wrong Output দিবে। কারণ,
       "ptr" বা "&rahim" return করার পর Function Delete হয়ে যাবে। তাই,
       Garbage value print হবে। তাই Pointer এর ক্ষেত্রে Dynamic Object দিয়ে করবো।
       Example: পরবর্তী কোড দেখুন।
*/