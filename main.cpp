#include <iostream>
#include <fstream>
#include <cmath>
#include "class.h"
using namespace std;


void main() {
   // akili
   character akali;
   akali = character();
   akali.N1 = 5; akali.N2 = 10; akali.a = 2; akali.b = 3; akali.x0 = -5; akali.dx = 0.1; akali.m = 10;
   int* akali_func1 = akali.func_1();
   float* akali_func2 = akali.func_2();
   float akali_data[] = {5, 10, 2, 3, -5, 0.1, 10};
   ofstream file_akali;
   file_akali.open("akali.dat", ios::binary | ios::out);
   file_akali.write((char*)akali_data, 7 * sizeof(float));
   file_akali.write((char*)akali_func1, 6 * sizeof(int));
   file_akali.write((char*)akali_func2, akali.m * sizeof(float));
   file_akali.close();

   // amumu
   character amumu;
   amumu = character();
   amumu.N1 = 7; amumu.N2 = 100; amumu.a = -3.5; amumu.b = 4; amumu.x0 = 100; amumu.dx = 10; amumu.m = 15;
   int* amumu_func1 = amumu.func_1();
   float* amumu_func2 = amumu.func_2();
   float amumu_data[] = { 7, 100, -3.5, 4, 100, 10, 15 };
   ofstream file_amumu;
   file_amumu.open("amumu.dat", ios::binary | ios::out);
   file_amumu.write((char*)amumu_data, 7 * sizeof(float));
   file_amumu.write((char*)amumu_func1, 94 * sizeof(int));
   file_amumu.write((char*)amumu_func2, amumu.m * sizeof(float));
   file_amumu.close();

   // annie
   character annie;
   annie = character();
   annie.N1 = 7; annie.N2 = 100; annie.a = -3.5; annie.b = 4; annie.x0 = 100; annie.dx = 10; annie.m = 15;
   int* annie_func1 = annie.func_1();
   float* annie_func2 = annie.func_2();
   float annie_data[] = { 12, 17, 0.01, 0.2, 1.5, 0.08, 20 };
   ofstream file_annie;
   file_annie.open("annie.dat", ios::binary | ios::out);
   file_annie.write((char*)annie_data, 7 * sizeof(float));
   file_annie.write((char*)annie_func1, 6 * sizeof(int));
   file_annie.write((char*)annie_func2, annie.m * sizeof(float));
   file_annie.close();

   // ashe
   character ashe;
   ashe = character();
   ashe.N1 = 10; ashe.N2 = 20; ashe.a = 4.2; ashe.b = -5.3; ashe.x0 = 2.1; ashe.dx = 0.2; ashe.m = 5;
   int* ashe_func1 = ashe.func_1();
   float* ashe_func2 = ashe.func_2();
   float ashe_data[] = { 10, 20, 4.2, -5.3, 2.1, 0.2, 5 };
   ofstream file_ashe;
   file_ashe.open("ashe.dat", ios::binary | ios::out);
   file_ashe.write((char*)ashe_data, 7 * sizeof(float));
   file_ashe.write((char*)ashe_func1, 11 * sizeof(int));
   file_ashe.write((char*)ashe_func2, ashe.m * sizeof(float));
   file_ashe.close();
}
