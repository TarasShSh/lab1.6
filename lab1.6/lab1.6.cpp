// Варіант 23
#include <iostream>
#include<iomanip>
#include <locale>
#include "windows.h"

#include "SolutionC.h" 

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SolutionC s;
    s.Read();
    s.Display();
}