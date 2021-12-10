using namespace std;
#include <vector>
#include "CVehicle.h"
#include "CCar.h"
#include "CPlane.h"
#include "CShip.h"

vector <CCar*> car;
vector <CPlane*> plane;
vector <CShip*> ship;

void Menu() {
 cout << "Текущее количество...\n";
 cout << "\tмашин = " << car.size() << endl;
 cout << "\tсамолетов = " << plane.size() << endl;
 cout << "\tкораблей = " << ship.size() << "\n\n";
 cout << "1. Создать новый объект\n";
 cout << "2. Выполнить метод объекта\n";
 cout << "0. Выход\n";
}
void Objects() {
 cout << "\n=== Выберите объект ===\n";
 cout << "1. Машина\n";
 cout << "2. Самолет\n";
 cout << "3. Корабль\n";
 cout << "0. Отмена\n";
}
void Methods() {
 cout << "\n=== Выберите метод ===\n";
 cout << "1. Получить информацию об объекте\n";
 cout << "2. Задать координаты\n";
 cout << "3. Задать цену\n";
 cout << "4. Задать скорость\n";
 cout << "5. Задать год выпуска\n";
}
void MainMenu(bool exit = 0) {
 while (exit != 1) {
  int  v, n, o, m, c, p, s, a, x, y, z;
  Menu();
  cin >> v;
  system("cls");
  switch (v) { // Создание нового объекта
  case 1: {
   Objects();
   cin >> o;
   system("cls");
   switch (o) {
   case 1: {
    cout << "=== Создание машины ===" << endl;
    car.push_back(new CCar);
    n = car.size() - 1;
    cout << "Введите координаты x и y:";
    cin >> x >> y;
    car.at(n)->setX(x);
    car.at(n)->setY(y);
    cout << "Введите цену:";
    cin >> a;
    car.at(n)->setPrise(a);
    cout << "Введите скорость: ";
    cin >> a;
    car.at(n)->setSpeed(a);
    cout << "Введите год выпуска: ";
    cin >> a;
    car.at(n)->setYear(a);
    system("cls");
   }
     break;
   case 2: {
    cout << "=== Создание самолёта ===" << endl;
    plane.push_back(new CPlane);
    n = plane.size() - 1;
    cout << "Введите координаты x, y и z:";
    cin >> x >> y >> z;
    plane.at(n)->setX(x);
    plane.at(n)->setY(y);
    plane.at(n)->setZ(z);
    cout << "Введите цену:";
    cin >> a;
    plane.at(n)->setPrise(a);
    cout << "Введите скорость: ";
    cin >> a;
    plane.at(n)->setSpeed(a);
    cout << "Введите год выпуска: ";
    cin >> a;
    plane.at(n)->setYear(a);
    cout << "Введите кол-во пассажиров: ";
    cin >> a;
    plane.at(n)->setPassengers(a);
    system("cls");
   }
     break;
   case 3: {
    cout << "=== Создание корабля ===" << endl;
    ship.push_back(new CShip);
    n = ship.size() - 1;
    cout << "Введите координаты x и y:";
    cin >> x >> y;
    ship.at(n)->setX(x);
    ship.at(n)->setY(y);
    cout << "Введите цену:";
    cin >> a;
    ship.at(n)->setPrise(a);
    cout << "Введите скорость: ";
    cin >> a;
    ship.at(n)->setSpeed(a);
    cout << "Введите год выпуска: ";
    cin >> a;
    ship.at(n)->setYear(a);
    cout << "Введите кол-во пассажиров: ";
    cin >> a;
    ship.at(n)->setPassengers(a);
    cout << "Введите порт приписки: ";
    cin >> a;
    ship.at(n)->setPort(a);
    system("cls");
   }
     break;
   case 0: system("cls"); break; break;
   default: cout << "Такой команды нет!\n"; system("pause"); system("cls");
   }
   break;
  }
  case 2: {// Выбор метода
   if (car.size() + plane.size() + ship.size() == 0) {
    cout << "\nНет существующих объектов!\n";
    system("pause");
    system("cls");
    break;
   }
   Objects();
   cin >> c;
   system("cls");
   switch (c) {
    //машина
   case 1: {
    if (car.size() == 0) {
     cout << "\nМашин нет!\n";
     system("pause");
     system("cls");
     break;
    }
    do {
     cout << "\nВыберите машину из " << car.size() << ":";
     cin >> n;
     if (n > car.size() || n <= 0) {
      cout << "\nТакой машины нет!";
      system("pause");
      system("cls");
     }
    } while (n > car.size() || n <= 0);
    n--;
    Methods();
    cout << "0. Отмена\n";
    cin >> m;
    system("cls");
    switch (m) {
    case 1:
     cout << "Текущие координаты машины x=" << car.at(n)->getX() << " y=" << car.at(n)->getY()
      << "\nСтоимость:" << car.at(n)->getPrise() << "\nСкорость:" << car.at(n)->getSpeed()
      << "\nГод выпуска:" << car.at(n)->getYear() << endl;
     system("pause");
     system("cls");
     break;
    case 2:
     cout << "Введите новые координаты x и y:";
     cin >> x >> y;
     car.at(n)->setX(x);
     car.at(n)->setY(y);
     system("cls");
     break;
    case 3:
     cout << "Введите новую цену:";
     cin >> a;
     car.at(n)->setPrise(a);
     system("cls");
     break;
    case 4:
     cout << "Введите новую скорость: ";
     cin >> a;
     car.at(n)->setSpeed(a);
     system("cls");
     break;
    case 5:
     cout << "Введите новый год выпуска: ";
     cin >> a;
     car.at(n)->setYear(a);
     system("cls");
     break;
    case 0: system("cls"); break; break;
    default:
     cout << "Такой команды нет!\n";
     system("pause");
     system("cls");
    } break; }
   case 2: { //самолет
    if (plane.size() == 0) {
     cout << "\nСамолётов нет!\n";
     system("pause");
     system("cls");
     break; }
    do {
    cout << "\nВыберите cамолет из " << plane.size() << ":";
     cin >> n;
     if (n > plane.size() || n <= 0) {
      cout << "\nТакого самолёта нет!";
      system("pause");
      system("cls");
     }
    } while (n > plane.size() || n <= 0);
    n--;
    Methods();
    cout << "6.Задать кол-во пассажиров\n0. Отмена\n";
    cin >> p;
    system("cls");
    switch (p) {
    case 1:
     cout << "Текущие координаты самолёта xyz: (" << plane.at(n)->getX() << ";" << plane.at(n)->getY()
      << ";" << plane.at(n)->getZ() << ")" << endl;
     cout << "Стоимость:" << plane.at(n)->getPrise() << "\nСкорость:" << plane.at(n)->getSpeed()
      << "\nГод выпуска:" << plane.at(n)->getYear() << "\nКол-во пассажиров:" << plane.at(n)->getPassengers();
     system("pause");
     system("cls");
     break;
    case 2:
     cout << "Введите новые координаты x, y и z:";
     cin >> x >> y >> z;
     plane.at(n)->setX(x);
     plane.at(n)->setY(y);
     plane.at(n)->setZ(z);
     system("cls");
     break;
    case 3:
     cout << "Введите новую цену:";
     cin >> a;
     plane.at(n)->setPrise(a);
     system("cls");
     break;
    case 4:
     cout << "Введите новую скорость: ";
     cin >> a;
     plane.at(n)->setSpeed(a);
     system("cls");
     break;
    case 5:
     cout << "Введите новый год выпуска: ";
     cin >> a;
     plane.at(n)->setYear(a);
     system("cls");
     break;
    case 6:
     cout << "Введите новое кол-во пассажиров: ";
     cin >> a;
     plane.at(n)->setPassengers(a);
     system("cls");
     break;
    case 0: system("cls"); break; break;
    default: cout << "Такой команды нет!\n"; system("pause"); system("cls");}
    break;
   } 
   case 3: { //корабль
    if (ship.size() == 0) {
     cout << "\nКораблей нет!\n";
     system("pause");
     system("cls");
     break;
    }
    do {
     cout << "\nВыберите корабль из " << ship.size() << ":";
     cin >> n;
     if (n > ship.size() || n <= 0) {
      cout << "\nТакого корабля нет!";
      system("pause");
      system("cls");
     }
    } while (n > ship.size() || n <= 0);
    n--;
    Methods();
    cout << "6.Задать кол-во пассажиров\n7.Задать порт приписки\n0. Отмена\n";
    cin >> s;
    system("cls");
    switch (s) {
    case 1:
     cout << "Текущие координаты корабля x и y: (" << ship.at(n)->getX() << ";" << ship.at(n)->getY() << ")" << endl;
     cout << "Стоимость:" << ship.at(n)->getPrise() << "\nСкорость:" << ship.at(n)->getSpeed()
      << "\nГод выпуска:" << ship.at(n)->getYear() << "\nКол-во пассажиров:" << ship.at(n)->getPassengers()
      << "\nПорт приписки:" << ship.at(n)->getPort();
     system("pause");
     system("cls");
     break;
    case 2:
     cout << "Введите новые координаты x и y:";
     cin >> x >> y;
     ship.at(n)->setX(x);
     ship.at(n)->setY(y);
     system("cls");
     break;
    case 3:
     cout << "Введите новую цену:";
     cin >> a;
     ship.at(n)->setPrise(a);
     system("cls");
     break;
    case 4:
     cout << "Введите новую скорость: ";
     cin >> a;
     ship.at(n)->setSpeed(a);
     system("cls");
     break;
    case 5:
     cout << "Введите новый год выпуска: ";
     cin >> a;
     ship.at(n)->setYear(a);
     system("cls");
     break;
    case 6:
     cout << "Введите новое кол-во пассажиров: ";
     cin >> a;
     ship.at(n)->setPassengers(a);
     system("cls");
     break;
    case 7:
     cout << "Введите новый порт приписки: ";
     cin >> a;
     ship.at(n)->setPort(a);
     system("cls");
     break;
    case 0: system("cls"); break; break;
    default: cout << "Такой команды нет!\n"; system("pause"); system("cls");
    } break;
   }
   case 0: break; break;
   default: cout << "Такой команды нет!\n"; system("pause"); system("cls");}break;
  }
  case 0: exit = 1; break;
  default: cout << "Такой команды нет!\n"; system("pause"); system("cls");
  }
 }
}
