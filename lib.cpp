#include "esercitazione 6.h"

bool f(char &a)
{

    
        if (a>= 65 and a<=90)
        {
            a+=32;
            return true;
        }
       else if (a >= 97 and a <=122)
       {
            a-=32;
        return true;
        } 
        else
        {
        return false;
        }
}
