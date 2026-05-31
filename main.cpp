#include <iostream>

int main() {
    int x;  // ❌ uninitialized variable (BAD)
    std::cout << x << std::endl;  // ❌ using garbage value
    return 0;
}