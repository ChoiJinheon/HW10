// <class.h>
#include <iostream>
#include <fstream>
using namespace std;
class character {
public:
    character() {};
    character(int N1_i, int N2_i, float a_i, float b_i, float x0_i, float dx_i, int m_i);
    int N1, N2, m;
    float a, b, x0, dx;
    int* datafunc_1;
    float* datafunc_2;
    int num;

    int* func_1();
    float* func_2();
    void savefile(string ss);
};
