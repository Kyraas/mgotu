#include "CVehicle.h"
class CCar : public CVehicle
{
public:
 CCar() {};
 ~CCar() {};
 int getX() { return this->X; }
 int getY() { return this->Y; }
 int getPrise() { return this->price; }
 int getSpeed() { return this->speed; }
 int getYear() { return this->year; }
 void setX(int X) { this->X = X; }
 void setY(int Y) { this->Y = Y; }
 void setPrise(int price) { this->price = price; }
 void setSpeed(int speed) { this->speed = speed; }
 void setYear(int year) { this->year = year; }
};
