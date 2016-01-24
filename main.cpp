#include <iostream>
#include "Short_Vector.h"

using namespace std;

int main(){

    Short_Vector a(4,54,8,97);
    Short_Vector b(67,12,64,82);
    Short_Vector c = a / b;
    cout<<c;

    return 0;
}
