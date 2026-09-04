
// COMSC-210 | Lab 3 | Jonvianney Maglasang
// Started on September 1, 2026 at 7:44
// Completed on Spetember 1, 2026 at 9:53

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct Color
{
    int r;
    int b;
    int g;
    Color(int r, int b, int g)
    {
        
        this->r = r;
        this->b = b;
        this->g = g;
    }

    int checkIntSize(int &col)
    {
        if(col < 0)
        {
            return 0;
        } else
        if(col > 255)
        {
            return 255;
        }
    }
};

int main()
{

    return 0;
}