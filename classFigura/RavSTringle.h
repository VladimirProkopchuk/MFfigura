#pragma once
#include "Tringle.h"
#include <string>
class RavSTringle :public Tringle
{
private:
	std::string name = "�������������� �����������";
	    int a ;
	public:
		RavSTringle(int _a);
		void print();
};

