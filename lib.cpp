//
// Created by ireti on 06/12/2022.
//
#include "esercitazione 6.h"

bool f(char &a) {

    if ((a>=65 and a<=90) or (a >= 97 and a <=122)){

        if (a>= 65 and a<=90) {
            a+=32;
        } else {
            a-=32;

        }
        return true;
    } else {
        return false;
    }
}
