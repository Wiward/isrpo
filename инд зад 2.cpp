#include <iostream>
using namespace std;
int main()
{
float x, y; // координаты 

cout << "Enter coordinates to check ( x and y): ";
cin >> x >> y;
if( (x*x+y*y <= 1*1 and x >= 0 and y <= 0) or ( x*x+y*y >= 1*1 and x <= -0.4 and y >= 0) )
	cout<<"True";
else
	cout<<"False";
return 0;
}
