//Bradley Lor
//Rectangle Area

#include <iostream>
#include <conio.h>

using namespace std;

float GetLegnthFromUser(float length);
float GetWidthFromUser(float width);
float CalculateArea(float area, float length, float width);
float DisplayArea(float display);


float GetLegnthFromUser(float length)
{
    cout << "Enter the width of the rectangle: ";
    cin >> length;
    if (length <= 0) {
        cout << "Positive numbers only!";
        cin >> length;
    }
}


float GetWidthFromUser(float width)
{
    cout << "Enter the length of a postive number for the rectangle: ";
    cin >> width;
    if (width <= 0) {
        cout << "Positive numbers only!";
        cin >> width;
    }
}


float CalculateArea(float area, float length, float width)
{
    float area = length * width;
    return area;
}



float DisplayArea(float display)
{
    return display;
}



int main()
{
    float length, width, area;





    float display = area;

    cout << "Area of the Rectangle is: " << area;


    return 0;


}



