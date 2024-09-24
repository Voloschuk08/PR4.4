#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
    double x, xp, xk, dx, y;
    double R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "y" << "    |" << endl;
    cout << "----------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -6 - R)
            y = 0;
        if (-6 - R < x && x <= -6)
            y = -sqrt(R * R - pow(x + 6, 2));
        if (-6 < x && x <= -R)
            y = -R + ((R * (x + 6)) / (-R + 6));
        if (-R < x && x <= 0)
            y = (2 * R / 6) * (x + 6) - R;
        if (0 < x && x <= 3)
            y = R - ((R * x) / 3);
        if (3 < x)
            y = (R * (x - 3)) / 6.0;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}