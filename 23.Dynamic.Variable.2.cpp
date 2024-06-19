#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int *a = new int;
    cout << "Fun er: " << a << endl;
    *a = 100;
    return a;
}
int main(){
    int *p = fun();
    cout << "Main er: " << p << endl << *p ;
}

// 'a' hold kore - Heap Memory 
// 'a' nije holo static memory
// তাই 'a' return করার পর, 'a' delete হয়ে গেলেও 'a' এর value delete হবেনা।
// কারণ, 'a' এর value হলো Heap/Dynamic memory 