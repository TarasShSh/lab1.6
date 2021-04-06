#pragma once
#include <string>

using namespace std;
class SolutionC
{
private:
	int amount; // Відносна к-сть речовини
	class Liquid
	{
	private:
		string name; // Назва рідини
		int density; // Густина

	public:
		string getName() const { return name; };
		int getDensity() const { return density; };

		void setName(string value) { name = value; };
		void setDensity(int value) { density = value; };

		void Init(string name, int  density);
		void Display() const;
		void Read();
		string toString() const;
	};
	Liquid liquid;
public:
	SolutionC::Liquid getLiquid() const { return liquid; };
	int getAmount() const { return amount; };

	void setLiquid(SolutionC::Liquid value) { liquid = value; };
	void setAmount(int value) { amount = value; };

	void Init(SolutionC::Liquid liquid, int  amount);
	void Display() const;
	void Read();
	string toString() const;
};

