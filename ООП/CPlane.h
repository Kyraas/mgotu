#include "CVehicle.h"
class CPlane : public CVehicle
{
 int Z, pas; // Доп. координата (высота) и пассажиры
public:
 CPlane() {};
 ~CPlane() {};
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

 void setZ(int Z) { this->Z = Z; };
 void setPassengers(int pas) { this->pas = pas; };
 int getZ() { return this->Z; };
 int getPassengers() { return this->pas; };

};
