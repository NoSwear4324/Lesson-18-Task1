#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "computer.h"
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");
    int n = 5;
    computer* arr = new computer[n]{
        {"Asus", 8, 15'000},
        {"Dell", 16, 20'000},
        {"HP", 4, 10'000},
        {"Lenovo", 32, 30'000},
        {"Acer", 12, 25'000}
    }
}