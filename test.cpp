#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265358979323846;

    // Example 1: Setting precision to 3
    std::cout << "Example 1: Precision 3: " << std::setprecision(3) << pi << std::endl;

    // Example 2: Setting precision to 6 with fixed notation
    std::cout << "Example 2: Precision 6 with fixed notation: " << std::fixed << std::setprecision(6) << pi << std::endl;

    // Example 3: Setting precision to 4 with scientific notation
    std::cout << "Example 3: Precision 4 with scientific notation: " << std::scientific << std::setprecision(4) << pi << std::endl;

    return 0;
}
