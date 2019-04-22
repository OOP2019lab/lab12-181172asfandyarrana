#include "shape.h"


shape::shape(string c)
{
	color=c;
}


shape::~shape(void)
{
	cout<<"destructor called shape"<<endl;
}
