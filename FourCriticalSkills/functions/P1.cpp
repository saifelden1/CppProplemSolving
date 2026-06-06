#include <iostream>

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int max(int a, int b, int c, int d)
{
    if (max(a, b, c) > d)
    {
        return max(a, b, c);
    }
    else
    {
        return d;
    }
}

int max(int a, int b, int c, int d, int e)
{
    if (max(a, b, c, d) > e)
    {
        return max(a, b, c, d);
    }
    else
    {
        return e;
    }
}

int max(int a, int b, int c, int d, int e, int f)
{
    if (max(a, b, c, d, e) > f)
    {
        return max(a, b, c, d, e);
    }
    else
    {
        return f;
    }
}

int main()
{

    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << max(a, b, c, d, e, f) << std::endl;
    return 0;
}