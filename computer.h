#pragma once
#include <iostream>
using namespace std;
struct computer {
	char name[100];
	int ram = 4;
	float price = 0;
	
	void showinfo() {
		cout << "Name: " << name << endl;
		cout << "RAM: " << ram << endl;
		cout << "Price: " << price << endl;
	}
};