#include<iostream>
using namespace std;


class Circle
{
    double R;
    const double PI = 3.14;
public:
    Circle()
    {
        R = 0;
    }
    Circle(double r) :R(r)
    {
    }
    void Print()
    {
        cout << "R: " << R << endl;
    }

    bool operator==(Circle& b)
    {
        if (R == b.R)
        {
            return true;
        }
        return false;
    }

    bool operator>(Circle& b)
    {
        if (2 * PI * R > 2 * PI * b.R)
        {
            return true;
        }
        return false;
    }

    Circle& operator +=(int a)
    {
        R += a;
        return *this;
    }
    Circle& operator -=(int a)
    {
        R -= a;
        return *this;
    }
};

int main()
{
    srand(unsigned(time(0)));
    Circle a(10);
    Circle b(20);
    if (a == b)
    {
        cout << "";
    }

    

}

/*class Point
{
    int x;
    int y;
public:
    Point()  // construct by default
    {
        cout << "Construct\n";
        x = y = 0;
    }
    Point(int x1, int y1)   // Construct by 2 param
    {
        cout << "Construct by 2 param\n";
        x = x1;
        y = y1;
    }
    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
    }
    void Init(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    // перегрузка бинарных операции

    Point operator+(Point& b)
    {
        Point temp;
        temp.x = this->x + b.x;
        temp.y = this->y + b.y;
        return temp;
    }
    Point operator+(int a)
    {
        Point temp(x + a, y + a);
        return temp;
    }

    //перегрузка логических операций
    bool operator>(Point& b)
    {
        if (x > b.x && y > b.y)
        {
            return true;
        }
        return false;
    }
    bool operator<(Point& b)
    {
        if (x < b.x && y < b.y)
        {
            return true;
        }
        return false;
    }
    bool operator==(Point& b)
    {
        if (x == b.x && y == b.y)
        {
            return true;
        }
        return false;
    }
    bool operator!=(Point& b)
    {
        if (*this == b)
        {
            return false;
        }
        return true;
    }

    //перегрузка сокращеных
    Point& operator +=(int a)
    {
        x += a;
        y += a;
        return *this;
    }
    Point& operator -=(int a)
    {
        x -= a;
        y -= a;
        return *this;
    }
    Point& operator *=(int a)
    {
        x *= a;
        y *= a;
        return *this;
    }
    Point& operator /=(int a)
    {
        x /= a;
        y /= a;
        return *this;
    }
};

int main()
{
    srand(unsigned(time(0)));

    Point a(1, 2);
    Point b(3, 4);
    a += 10;
    a -= 10;
    a.Output();


    /*if (a < b)
    {
        cout << "a<b";
    }
    else
    {
        cout << "b<a";
    }*/
}*/