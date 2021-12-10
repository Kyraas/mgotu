// Абстрактный класс CVehicle
class CVehicle
{
protected:
 virtual ~CVehicle() {}
int X, Y; // Координаты
 int price, speed, year; // Цена, скорость, год выпуска
 virtual int getX() = 0;
 virtual int getY() = 0;
 virtual int getPrise() = 0;
 virtual int getSpeed() = 0;
 virtual int getYear() = 0;
 // Чисто виртуальные функции:
 virtual void setX(int X) = 0;
 virtual void setY(int Y) = 0;
 virtual void setPrise(int price) = 0;
 virtual void setSpeed(int speed) = 0;
 virtual void setYear(int year) = 0;
};