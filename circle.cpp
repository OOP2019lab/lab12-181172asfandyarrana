#include "circle.h"


circle::circle(float r, string c): shape(c)
{
	radius=r;
}


circle::~circle(void)
{
	cout<<"destructor called circle"<<endl;
}
