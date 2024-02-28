#include <iostream>
#include "fourgolnic.h"
#include "paralelogram.h"
#include "Pryamougolnik.h"
#include "romb.h"
#include "Kvadrat.h"
#include "Tringle.h"
#include "PryaTringle.h"
#include "RavBedTringle.h"
#include "RavSTringle.h"

void razriv() {
	for (int i = 0; i < 60; i++) {
		std::cout << '-';
	}std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	fourgolnic objA(3, 4, 5, 7, 50, 60, 40, 60);
	objA.print();
	razriv();
	paralelogram objB(4, 5, 60, 120);
	objB.print();
	razriv();
	romb objC(10, 86, 94);
	objC.print();
	razriv();
	Pryamougolnik objD(5, 7);
	objD.print();
	razriv();
	Kvadrat objE(15);
	objE.print();
	razriv();
	Tringle obj1(4, 5, 6, 45, 65, 85);
	obj1.print();
	razriv();
	PryaTringle obj2(3, 4, 5, 60, 30);
	obj2.print();
	razriv();
	RavBedTringle obj3(4, 6, 50, 65);
	obj3.print();
	razriv();
	RavSTringle obj4(10);
	obj4.print();
}
