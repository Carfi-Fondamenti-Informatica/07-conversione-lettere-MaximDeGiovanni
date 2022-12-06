#include <iostream>
#include "lib.h"
using namespace std;
int main(){ char a;
    cin>>a;
    f(a);
    if (f(a)==1) {
        cout<<a<<endl;
    } else {
        cout<<"errore"<<endl;
    }
  return 0;
}
