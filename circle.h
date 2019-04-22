#pragma once
#include "shape.h"
#include <string>
using namespace std;
#include <iostream>
class circle:public shape
{
	float radius;
	
public:
	
	float area()
	{
		float area=3.14*radius*radius;
		return  area;
	}
	circle(float , string);
	~circle(void);
};

