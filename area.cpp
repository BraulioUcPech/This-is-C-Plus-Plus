#include <iostream>
using namespace std;

int main()
{

    float altura, base, area;

    cout <<"Eltura del triangulo: ";
    cin >> altura;

    cout <<"Base del triangulo: ";
    cin >> base;

    area = base * altura / 2;

    cout<< "El area del triangulo es\n: " << area;

    return 0;
}