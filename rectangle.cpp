#include "rectangle.h"


rectangle::rectangle(float w, float l, string c): shape(c)
{
	width=w;
	length=l;
	
}


rectangle::~rectangle(void)
{
	cout<<"destructor called rectangle"<<endl;
}
