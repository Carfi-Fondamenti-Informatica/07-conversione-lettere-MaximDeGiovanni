#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char n=0;
    cin>>n;
    if (funzione(n)== true) {
        cout<< n <<endl;
    } else {
        cout<<"errore"<<endl;
    }

    return  0;

}
