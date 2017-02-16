// Malika Drummond
// 1 February 2017
// Project 6.1
// Determine the slope, distance and midpoint of the ordered pairs

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(float, float, float, float);
const double infinity = 1e9;
double slope(float, float, float, float);
void mid(float, float, float, float);

double x, y;

int main ()
{
ifstream inFile;
ofstream outFile;
float x1, y1, x2, y2;
double total_Slope, total_Dist;
inFile.open("data1_for_slope.txt");


while (inFile.eof())
{
    inFile >> x1 >> y1 >> x2 >> y2;
    total_Slope = slope(x1, y1 ,x2 ,y2);
    total_Dist = distance(x1, y1, x2, y2);
    mid(x1, x2, y1, y2);

    ofstream outFile;
    outFile.open("outputReport.txt");
    outFile << "Slope: " << total_Slope << endl;
    outFile << "Distance: " << total_Dist << endl;
    outFile << "Mid: " << "(" << x << ", "<< y <<  ")" << endl;
}
// terminate the program
return 0;

}

// Determine the distance between two points
double distance(float x1, float y1, float x2, float y2)
{
    double dist;        // total distance of points that will be returned to main

    // Distance is determined
    dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1) * (y2 - y1));

    return dist;
}
// Determines the midpoint for x and y
void mid(float x1, float y1, float x2, float y2)
{
  x = (x1 + x2) / 2;
  y = (y1 + y2) / 2;
}

// Determine the slope of of the points
double slope (float x1, float y1, float x2, float y2)
{
    double slope_val;
    slope_val = (y2 - y1)/(x2 - x1);
    return slope_val;
}
