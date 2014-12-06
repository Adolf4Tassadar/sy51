//
//  main.cpp
//  sy51
//
//  Created by wang on 14-12-2.
//  Copyright (c) 2014年 wang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Fan
{
private:
    double speed;
    bool on;
    double radius;
    string color;
public:
    void getSpeed();
    void setSpeed(double);
    void getOn();
    void setOn(bool);
    void getRadius();
    void setRadius(double);
    void getColor();
    void setColor(string);
    Fan(double newSpeed, bool newOn, double newRadius, string newColor);
    void display();
};
int main()
{
    Fan fan1(3, true, 10, "yellow");
    Fan fan2(2, true, 5, "blue");
    fan1.display();
    fan2.display();
    
    return 0;
}

Fan::Fan(double newSpeed, bool newOn, double newRadius, string newColor)
{
    this->speed = newSpeed;
    this->on = newOn;
    this->radius = newRadius;
    this->color = newColor;
}
void Fan::getSpeed()
{
    cout << "Speed : " << this->speed << endl;
}
void Fan::setSpeed(double newSpeed)
{
    this->speed = newSpeed;
}
void Fan::getOn()
{
    cout << "On : " << this->on << endl;
}
void Fan::setOn(bool newOn)
{
    this->on = newOn;
}
void Fan::getRadius()
{
    cout << "Radius : " << this->radius << endl;
}
void Fan::setRadius(double newRadius)
{
    this->radius = newRadius;
}
void Fan::getColor()
{
    cout << "Color : " << this->color << endl;
}
void Fan::setColor(string newColor)
{
    this->color = newColor;
}
void Fan::display()
{
    this->getSpeed();
    this->getOn();
    this->getRadius();
    this->getColor();
}
