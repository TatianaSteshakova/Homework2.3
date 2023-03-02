#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    long int login = 0;
    long int pass = 0;

    cout << "Введите логин и пароль: " << endl;
    cin >> login >> pass;

    if ((login == 10000 && pass == 20000) || (login == 55555 && pass == 66666) || (login == 12345 && pass == 67890))
        cout << "Добро пожаловать!";
    else
        cout << "Неверный логин или пароль!";
}