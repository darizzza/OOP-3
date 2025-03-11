#include <iostream>
#include "Canvas.h"

int main() {
    Canvas canvas(40, 20); // Create a canvas of size 40x20

    // Drawing various shapes
    canvas.DrawLine(2, 2, 30, 10, '*');
    canvas.DrawCircle(10, 10, 5, 'o');
    canvas.FillCircle(25, 15, 3, '#');
    canvas.DrawRect(5, 5, 15, 12, '+');
    canvas.FillRect(20, 5, 35, 12, '@');
    canvas.SetPoint(39, 19, 'X');

    // Printing the canvas
    std::cout << "Canvas Output:\n";
    canvas.Print();

    return 0;
}
