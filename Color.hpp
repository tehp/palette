#include <iostream>

namespace Palette {
    class Color {
        public:
            Color(int r, int g, int b);
            ~Color();
            std::string getRGB();
        
        private:
            int r;
            int g;
            int b;
    };
}