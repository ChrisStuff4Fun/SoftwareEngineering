#pragma once

//Data type declarations
struct Rect_t {
    float width;
    float height;
    double area;
};

//Function declarations
Rect_t CreateRect(float w, float h);
void setWidth(Rect_t& ref, int w);
void setHeight(Rect_t& ref, int h);
double getArea(Rect_t& ref);
void display(Rect_t& ref);
