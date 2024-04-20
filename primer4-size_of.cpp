#include <iostream>

int main() {

int a =5;

int* pa =&a;

double b = 444444444222222.255555555555;

double* pb = &b;


std::cout << sizeof(a) << " " << sizeof(pa) << "\n";

std::cout << sizeof(b) << " " << sizeof(pb) << "\n";

std::cout << &a << " " << &b << "\n";
}