
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
    int g;
    int b;

    // Constructor Function
    Color(int r, int g, int b)
    {
        checkIntSize(r);
        checkIntSize(g);
        checkIntSize(b);

        this->r = r;
        this->g = g;
        this->b = b;
    }

    // Checks if an inputted number is within the valid range for rgb format (0 - 255)
    // If the number is less than 0, it turns that number into zero
    // If the number is bigger than 255, it turns that number into 255
    void checkIntSize(int &col)
    {
        if(col < 0)
        {
            col = 0;
        } else if(col > 255)
        {
            col = 255;
        }
    }
};

int main()
{
    Color purple = Color(256, -1, 255);
    cout << purple.r << " " << purple.g << " " << purple.b << endl;
    return 0;
}