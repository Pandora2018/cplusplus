


#ifndef __FUNCTOR_H__
#define __FUNCTOR_H__

class Fun
{
private:
	int i;

public:
	Fun(int j = 10): i(j) {}

	double operator()(double k)
	{
		return i * k;
	}

};


#endif
