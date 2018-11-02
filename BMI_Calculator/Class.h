#pragma once
#include <string>
using namespace std;

class BMI
{
private:
	string name;
	double height;
	double weight;
	const double bmi_Value = 703.0;
public:
	BMI(string, double, double);
	~BMI();
	double getBMI();
	string getName();
};

