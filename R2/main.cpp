

#include <iostream>


bool state = true;

/*int main() {
    int a = 2147483647;          // el mayor int de 32 bits
    std::cout << a + 1 << '\n';

    unsigned int u = 1;
    int i = -1;
    std::cout << (i < u) << '\n';
}*/

int main() {
    /*std::cout << sizeof(char) << ' '
        << sizeof(short) << ' '
        << sizeof(int) << ' '
        << sizeof(long) << ' '
        << sizeof(double) << '\n';
        */

    std::cout << 7 / 2 << '\n';                       // 3
    std::cout << 7 / 2.0 << '\n';                     // 3.5
    std::cout << 7 % 2 << '\n';                       // 1
    std::cout << static_cast<int>(3.99) << '\n';      // 4
    std::cout << (1 == 1.0) << '\n';                  // 0
    unsigned int u = 3;                                //
    std::cout << u - 5 << '\n';                         //error, se intenta representar un signo con un unsigned
}

