#include "Color.hpp"

using namespace Palette;

Color::Color(int r, int g, int b) {
    r = r;
    g = g;
    b = b;
}

Color::~Color() {}

std::string Color::getRGB() {
    return "" + r + g + b;
}