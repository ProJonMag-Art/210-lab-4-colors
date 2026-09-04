
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
const int minVecCount = 25;
const int maxVecCount = 50;

int genRandNum(int min, int max);
void populateVec(vector<Color>& savedColors, int amunt, int minSize, int maxSize);

int main()
{
    // Seed rng
    srand(time(0));


    savedColors.push_back(Color(256, -1, 255));
    cout << savedColors[0].r << " " << savedColors[0].g << " " << savedColors[0].b << endl;
    return 0;
}

int genRandNum(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void populateVec(vector<Color>& savedColors, int amount, int minSize, int maxSize)
{
    for(int i = 0; i < amount; i++)
    {
        Color tempCol = Color(genRandNum(minSize, maxSize), genRandNum(minSize, maxSize), genRandNum(minSize, maxSize));
        savedColors.push_back(tempCol);
    }
}