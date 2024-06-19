#include <bits/stdc++.h>
using namespace std;

class People{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    People(string name, int age, int marks1, int marks2){
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    int sumIt(){
        return marks1 + marks2;
    }
};

int main(){
    People obj("Shawon Hussain", 21, 50, 40);
    cout << obj.name << " " << obj.age << endl;
    cout << obj.sumIt() << endl;
}