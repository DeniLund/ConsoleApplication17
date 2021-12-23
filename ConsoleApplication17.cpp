#include <iostream>
#include <locale>
#include <cmath>

class Vector
{
public:
    Vector()
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)   
    {
        double dVectorLength(0.0);
        dVectorLength = sqrt(x * x + y * y + z * z);
    }
    void Show()
    {
        setlocale(LC_CTYPE, "rus");
        std::cout << '\n' << x << ' ' << y << ' ' << z;
        std::cout << "\n Длина вектора: " << sqrt(x * x + y * y + z * z) << " \n\n\a";
    }
    
private:
    double x = 110;
    double y = 90;
    double z = 1;
};

int main()
{
    Vector v;
    v.Show();
}
