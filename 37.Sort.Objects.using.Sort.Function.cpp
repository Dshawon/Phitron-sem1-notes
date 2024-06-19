#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b){
    return a.marks > b.marks;         // ">=" or "<=" Likhbona. Sorting only one condition
}

int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
}

/*
   Marks same হলে যার roll ছোট, সেটি আগে আসবে।

    bool cmp(Student a, Student b){
        if(a.marks > b.marks) return true;
        else if(a.marks < b.marks) return false;
        else return a.roll < b.roll;
    }

   Alternatively,

    bool cmp(Student a, Student b){
        if(a.marks == b.marks) return a.roll < b.roll;
        else return a.marks > b.marks;
    }


Input:
    3
    Shawon 23 92
    Rakib 22 92
    Sakib 21 93
*/