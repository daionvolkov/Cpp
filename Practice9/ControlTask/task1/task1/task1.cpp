// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Triangle {
    private:
        double a, b, c;

    public:
        Triangle(double a, double b, double c) {
            if (a <= 0 || b <= 0 || c <= 0) {
                throw std::invalid_argument("Invalid length");
            }
            if (a + b <= c || a + c <= b || b + c <= a) {
                throw std::invalid_argument("Invalid length");
            }
            this->a = a;
            this->b = b;
            this->c = c;
        }

        double calcArea() const {
            double s = (a + b + c) / 2;
            return std::sqrt(s * (s - a) * (s - b) * (s - c));
        }
};



int main()
{
    try {
        double a, b, c;
        std::cout << "Enter the three sides of the triangle: ";
        std::cin >> a >> b >> c;

        Triangle t(a, b, c);
        std::cout << "Area of triangle: " << t.calcArea() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

