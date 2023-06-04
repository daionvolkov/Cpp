#include <iostream>




class Point {
    public:
        Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

        double distanceToCenter() const {
            return std::sqrt(x * x + y * y);
        }

        friend bool operator<(const Point& p1, const Point& p2) {
            return p1.distanceToCenter() < p2.distanceToCenter();
        }

        friend std::ostream& operator<<(std::ostream& os, const Point& point) {
            os << "(" << point.x << ", " << point.y << ")";
            return os;
        }

    private:
        double x;
        double y;
};
