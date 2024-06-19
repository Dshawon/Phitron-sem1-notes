//Scope Resolution Operator (::)
//Namespace এর ভিতর variable, function, class রাখা যায়।
#include<bits/stdc++.h>
using namespace std;

namespace Shawon{
    int age1 = 21;
    void disp1(){
        cout<<"Shawon er Block"<<endl;
    }
}

namespace Sakib{
    int age2 = 34;
    void disp2(){
        cout<<"Sakib er Block"<<endl;
    }
}

using namespace Shawon;
using namespace Sakib;
int main(){
    cout << age1 << endl;
    disp1();
    cout << age2 << endl;
    disp2();
}


/* Alternatively,

int main(){
    cout << Shawon::age << endl;
    Shawon::disp();

    cout << Sakib::age << endl;
    Sakib::disp();
}
 */
