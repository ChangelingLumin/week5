#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;


int main ()
{
    int x;
    int y;
    cout << "please write two numbers..." << endl; 
    cin >> x >> y;
    int xy = pow(x,2) + pow(y,2);
    auto ans = sqrt(xy);
    cout << "your answer is..." << ans << 
    "...please open the txt file" << endl;
    ofstream myfile;
    myfile.open ("squarerootlab5.txt");
    myfile << "Your triangle has 3 sides that are[" << x << 
    "cm] long and [" << y << 
    "cm] wide with the longest side being [" << ans << 
    "cm] long" << endl;
    return 0;
}
