#include <iostream>

int main() {
    
    double A, B;
    std::cin >> A;
    std::cin >> B;
    double S = A/B;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << S << "\n";

    return 0;
}
