#include "fourgolnic.h"
#include <iostream>
#include <string>
using namespace std;

fourgolnic::fourgolnic(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) {
        a = _a; b = _b; c = _c; d = _d;
        A = _A; B = _B; C = _C; D = _D;
    }
  void fourgolnic::print() {
        cout << name << endl;
        info();
    }
 void fourgolnic::info()  {
        cout << "������� a = " << a << " ������� b = " << b << " ������� c = " << c << " ������� d = " << d << endl;
        cout << "���� A = " << A << " ���� B = " << B << " ���� C = " << C << " ���� D = " << D << endl;
    }
    
