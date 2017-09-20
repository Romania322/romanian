// Duim c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a, mm, metr, arsh;
	cin >> a;
	mm = a * 25.4;//перевели дюймы в миллиметры
	metr = mm / 1000;//перевели дюймы>мм>метр
	arsh = (metr * 100) / 71.1;//перевели метры в см, а см в аршины
	cout << metr << "-metr's" << endl;
	cout << arsh << "-arsh's" << endl;
	
	


}

