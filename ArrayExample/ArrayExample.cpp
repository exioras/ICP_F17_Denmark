// ArrayExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double values[5] = {1, 2, 3, 4, 5};

	for (int n = 0; n < 5; n++) cout << values[n] << endl;

	system("pause");
    return 0;
}

