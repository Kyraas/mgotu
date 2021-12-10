#include "CVehicle.h"
class CShip : public CVehicle
{
private:
 int pas, port; // Пассажиры и порт
public:
 CShip() {};
 ~CShip() {};
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

 void setPort(int port) { this->port = port; };
 void setPassengers(int pas) { this->pas = pas; };

 int getPort() { return this->port; };
 int getPassengers() { return this->pas; };
};
