#include<bits/stdc++.h>
using namespace std;

class People{
public:
    string name;
    int age;
    People(string name, int age){
        this->name=name;
        this->age=age;
    }
};

int main(){
    People* obj = new People("Shawon Hussain", 21);
    People* obj2 = new People("Kamal Hassan", 34);

    *obj = *obj2;
    delete obj2;
    cout << obj->name << " " << obj->age;
}

/* 
    obj = obj2;
    delete obj2;
    cout << obj->name << " " << obj->age;

    এটা ভুল পদ্ধতি। কারণ, "obj" and "obj2" is Dynamic Object or Pointer. 
    তাই "obj = obj2" লিখার মানে হলো, obj পয়েন্ট করবে obj2 কে। 
    So, obj2 Delete করলে obj নিজেও Delete হবে।

    তাই, Dereference করে value copy করে রাখবো।
 */

