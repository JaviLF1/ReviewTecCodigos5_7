


#include <iostream>

using namespace std;


void intercambiar1(int a, int b) {
    int c;

    c = a;

    a = b;

    b = c;

    cout << a << " , " << b << endl;





}// por valor
void intercambiar2(int* a, int* b) {


    int* z;

    z = a;

    a = b;

    b = z;

    cout << *a << " , " << *b << endl;




}    // por puntero
void intercambiar3(int& a, int& b) {


    int& z = a;


    a = b;

    b = z;



    cout << a << " , " << b << endl;



}

int main() {


    int x = 1;
    int y = 2;

    int* px = &x;

    int* py = &y;

    intercambiar1(x, y);

    intercambiar2(px, py);

    intercambiar3(x, y);



}