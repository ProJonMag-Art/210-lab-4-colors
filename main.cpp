
// COMSC-210 | Lab 3 | Jonvianney Maglasang
// Started on September 3, 2026 at 9:30
// Completed on Spetember 3, 2026 at

#include <iostream>
#include <random>
#include <ctime>
#include <vector>

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

vector<Color> savedColors;

int main()
{
    savedColors.push_back(Color(256, -1, 255));
    cout << savedColors[0].r << " " << savedColors[0].g << " " << savedColors[0].b << endl;
    return 0;
}