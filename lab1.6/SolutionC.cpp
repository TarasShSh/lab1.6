#include "SolutionC.h"
#include<iostream>

#include <string>
#include<sstream>
using namespace std;

void SolutionC::Init(SolutionC::Liquid liquid, int  amount)
{
	setLiquid(liquid);
	setAmount(amount);
}
void SolutionC::Display() const
{
	cout << endl;
	cout << " Рідина" << endl;
	liquid.Display();
	cout << toString() << endl;
}
void SolutionC::Read()
{
	int amount;
	cout << "Рідина:" << endl;
	liquid.Read();
	cout << "Відносна к-сть речовини: "; cin >> amount;
	Init(liquid, amount);
}
string SolutionC::toString() const
{
	stringstream sout;

	sout << "Відносна к-сть речовини: " << amount << endl;
	return sout.str();
}

void SolutionC::Liquid::Init(string name, int  density)
{
	setName(name);
	setDensity(density);
}
void SolutionC::Liquid::Display() const
{
	cout << toString();
}
void SolutionC::Liquid::Read()
{
	string name;
	int  density;
	cout << "Введіть назву: "; cin >> name;
	cout << "Введіть густину: "; cin >> density;
	Init(name, density);
}
string SolutionC::Liquid::toString() const
{
	stringstream sout;           // створили об'єкт класу "літерний потік"
	sout << "Назва: " << name << endl;
	sout << "Густина: " << density << endl;
	return sout.str();
}