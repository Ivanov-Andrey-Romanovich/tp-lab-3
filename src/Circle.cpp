#include <math.h>
#include "Circle.h"

#define PI 3.14

Circle::Circle() {
    setRadius(0);
}

Circle::Circle(double rad) {
    setRadius(rad);
}

Circle::~Circle() {}

void Circle::setRadius(double rad) {
    if (rad >= 0) {
        this->radius = rad;
        this->area = PI * rad * rad;
        this->ference = 2 * PI * rad;
    }
}

void Circle::setFerence(double fer) {
    if (ference >= 0) {
        this->ference = fer;
        this->radius = fer / (2 * PI);
        this->area = PI * radius * radius;
    }
}

void Circle::setArea(double area) {
    if (area >= 0) {
        this->area = area;
        this->radius = sqrt(area / PI);
        this->ference = 2 * PI * this->radius;
    }
}

double Circle::getArea() {
    return this->area;
}

double Circle::getFerence() {
    return this->ference;
}

double Circle::getRadius() {
    return this->radius;
}