#include <iostream>
#include "Color.hpp"

using namespace std;
using namespace Palette;

int main() {
    std::cout << "palette" << std::endl;
    Color *red = new Color(255, 0, 0);
    // std::cout << red->getRGB() << std::endl;
    return 0;
}