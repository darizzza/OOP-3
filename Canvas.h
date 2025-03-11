#ifndef CANVAS_H
#define CANVAS_H

class Canvas {
private:
    int width, height;
    char** matrix; // 2D array for canvas representation

public:
    Canvas(int width, int height);
    ~Canvas(); // Destructor to free allocated memory

    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // Displays the canvas
    void Clear(); // Clears the canvas
};

#endif // CANVAS_H
