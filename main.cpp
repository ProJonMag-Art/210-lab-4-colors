
// COMSC-210 | Lab 3 | Jonvianney Maglasang
// Started on September 3, 2026 at 9:30 PM
// Completed on Spetember 3, 2026 at 10:39 PM

#include <iostream>
#include <iomanip>
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
const int MinVecCount = 25;
const int MaxVecCount = 50;
const int MinColSize = 0;
const int MaxColSize = 255;

// Returns a random number between min and max
int getRandNum(int min, int max);

// Populates a vector<Color> int amount of objects, with 3 random numbers between int minSize and int maxSize
void populateVec(vector<Color>& savedColors, int amount, int minSize, int maxSize);

// Prints out a vector<Color>'s data in a formatted way using setw()
void outputVecData(vector<Color>& savedColors);

int main()
{
    // Seed rng
    srand(time(0));
    int colAmount = getRandNum(MinVecCount, MaxVecCount);

    populateVec(savedColors, colAmount, MinColSize, MaxColSize);
    outputVecData(savedColors);
    return 0;
}

// Returns a random number between min and max
int getRandNum(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// Populates a vector<Color> int amount of objects, with 3 random numbers between int minSize and int maxSize
void populateVec(vector<Color>& savedColors, int amount, int minSize, int maxSize)
{
    for(int i = 0; i < amount; i++)
    {
        Color tempCol = Color(getRandNum(minSize, maxSize), getRandNum(minSize, maxSize), getRandNum(minSize, maxSize));
        savedColors.push_back(tempCol);
    }
}

// Prints out a vector<Color>'s data in a formatted way using setw()
void outputVecData(vector<Color> &savedColors)
{
    int firstSpacer = 9;
    int secondSpacer = 10;
    cout << "\nColor #" << setw(firstSpacer) << "RValue" << setw(firstSpacer) << "GValue" << setw(firstSpacer) << "BValue" << endl;
    cout << "-------" << setw(firstSpacer) << "------" << setw(firstSpacer) << "------" << setw(firstSpacer) << "------" << endl;
    for(int i = 0; i < savedColors.size(); i++)
    {
        cout << "   " << i << setw(secondSpacer) << savedColors[i].r << setw(secondSpacer) << savedColors[i].g << setw(secondSpacer) << savedColors[i].b << endl;
    }
}