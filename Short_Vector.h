#include <string>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

class Short_Vector{
    public:
        int a, b, c, d;
        Short_Vector(int a, int b, int c, int d);
        ~Short_Vector();

        Short_Vector& operator=(const Short_Vector& obj);

        Short_Vector operator> (const Short_Vector& obj);
        Short_Vector operator< (const Short_Vector& obj);

        Short_Vector operator>= (const Short_Vector& obj);
        Short_Vector operator<= (const Short_Vector& obj);

        Short_Vector operator== (const Short_Vector& obj);
        Short_Vector operator!= (const Short_Vector& obj);

        Short_Vector operator+ (const Short_Vector& obj);
        Short_Vector operator- (const Short_Vector& obj);
        Short_Vector operator* (const Short_Vector& obj);
        Short_Vector operator/ (const Short_Vector& obj);

        friend ostream &operator<< (ostream &out, Short_Vector sv);
        friend istream &operator>> (istream &in, Short_Vector &sv);
};

    Short_Vector::Short_Vector(int a, int b, int c, int d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    };

    Short_Vector::~Short_Vector(){

    };

    Short_Vector& Short_Vector::operator=(const Short_Vector& obj){
        a = obj.a;
        b = obj.b;
        c = obj.c;
        d = obj.d;
        return *this;
    }


    Short_Vector Short_Vector::operator==(const Short_Vector& obj) {
        return Short_Vector(
            a == obj.a,
            b == obj.b,
            c == obj.c,
            d == obj.d
        );
    }


    Short_Vector Short_Vector::operator!=(const Short_Vector& obj){
        return Short_Vector(
            a != obj.a,
            b != obj.b,
            c != obj.c,
            d != obj.d
        );
    }

    Short_Vector Short_Vector::operator<(const Short_Vector& obj){
        return Short_Vector(
            a < obj.a,
            b < obj.b,
            c < obj.c,
            d < obj.d
        );
    }

    Short_Vector Short_Vector::operator<=(const Short_Vector& obj){
        return Short_Vector(
            a <= obj.a,
            b <= obj.b,
            c <= obj.c,
            d <= obj.d
        );
    }

    Short_Vector Short_Vector::operator>(const Short_Vector& obj){
        return Short_Vector(
            a > obj.a,
            b > obj.b,
            c > obj.c,
            d > obj.d
        );
    }

    Short_Vector Short_Vector::operator>=(const Short_Vector& obj){
        return Short_Vector(
            a >= obj.a,
            b >= obj.b,
            c >= obj.c,
            d >= obj.d
        );
    }

    Short_Vector Short_Vector::operator+(const Short_Vector& obj){
        int x, y, z, s;
        x = a + obj.a;
        y = b + obj.b;
        z = c + obj.c;
        s = d + obj.d;

        return Short_Vector(x, y, z, s);
    }

    Short_Vector Short_Vector::operator-(const Short_Vector& obj){
        int x, y, z, s;
        x = a - obj.a;
        y = b - obj.b;
        z = c - obj.c;
        s = d - obj.d;

        return Short_Vector(x, y, z, s);
    }

    Short_Vector Short_Vector::operator*(const Short_Vector& obj){
        int x, y, z, s;
        x = a * obj.a;
        y = b * obj.b;
        z = c * obj.c;
        s = d * obj.d;

        return Short_Vector(x, y, z, s);
    }

    Short_Vector Short_Vector::operator/(const Short_Vector& obj){
        int x, y, z, s;
        x = a / obj.a;
        y = b / obj.b;
        z = c / obj.c;
        s = d / obj.d;

        return Short_Vector(x, y, z, s);
    }

    ostream &operator<<(ostream &out, Short_Vector sv){
        out<<"["<<sv.a<<","<<sv.b<<","<<sv.c<<","<<sv.d<<"] \n";
        return out;
    }

    istream &operator >>(istream &in, Short_Vector &sv){
        bool valid1, valid2 = false;
        char str[256];

        cout<<"Enter vector: \n ";
        in.getline(str, 265);

        for(int i =0; str[i] != '\0'; i++){
            if(str[i] == '['){
                valid1 = true;
            }
            if(str[i] == ']'){
                valid2 = true;
            }
        }

        if(valid1 == true && valid2 == true){
            int comma_count =0;

            for(int i =0; str[i] != '\0'; i++){
                if(str[i] == ','){
                    comma_count++;
                }
                if(isalpha(str[i])== true){
                    cout<<"Not a valid input \n";
                    exit(0);
                }
            }

            if(comma_count == 3){
                //go ahead
                for(int i =0; str[i] != '\0'; i++){
                    //string to int
                    if(str[i] == ','){
                        comma_count++;
                    }
                    /*while(comma_count == 0){
                        string s;
                        s.append(str[i]);
                    }*/

                }
            }else{
                cout<<"Not a valid input \n";
                exit(0);
            }
        }else{
            cout<<"Not a valid input \n";
            exit(0);
        }
    }


