#include "pch.h"
#include "Class.h"
#include <string>


BMI::BMI(string userName, double userHeight, double userWeight)
{
	name = userName;
	height = userHeight;
	weight = userWeight;
}


BMI::~BMI()
{
}

double BMI::getBMI()
{
	return bmi_Value * weight / (height*height);
}

string BMI::getName()
{
	return name;
}