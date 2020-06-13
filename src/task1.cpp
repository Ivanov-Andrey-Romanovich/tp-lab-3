#include "Circle.h"
#include "task1.h"

double calcDelta() {
    Circle earth = Circle();
    Circle rope = Circle();
    earth.setRadius(6378.1);
    rope.setFerence(earth.getFerence() + 0.001);
    double difference = (rope.getRadius() - earth.getRadius()) * 1000;
    return difference ;
}
double calcCost() {
    Circle pool = Circle(3);
    Circle road = Circle(4);
    return (road.getArea() - pool.getArea()) * 1000 + road.getFerence() * 2000.0;
}