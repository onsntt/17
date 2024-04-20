#include <iostream>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    std::cout << "Now first value is " << *p1 << ", second value is " << *p2 << "\n";
}
int main()
{
    std::cout << "Enter two integer values:\n";
    int a, b;
    std::cin >> a >> b;
    std::cout << "Your first value is " << a << ", srcond value is " << b << "\n"
              << "\n";
    int *pa = &a;
    int *pb = &b;
    swap(pa, pb);
}