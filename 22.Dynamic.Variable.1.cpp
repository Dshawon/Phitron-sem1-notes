#include<bits/stdc++.h>
using namespace std;
int main(){

    int *a = new int;
    *a = 10;
    cout << *a << endl;
    delete a;
    cout << *a << endl;

    float *b = new float;
    *b = 1.5315;
    cout << *b <<endl;
}