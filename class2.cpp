// <class.cpp>

#include "class.h"

int* character::func_1() {
	int n = N2 - N1 + 1;
	num = n;
	int* result;
	result = new int[n];
	int sum = 0;
	for (int i = 0; i <= N1; i++) {
		sum = sum + i;
	}
	result[0] = sum;
	for (int j = N1 + 1; j <= N2; j++) {
		sum = sum + j;
		result[j - N1] = sum;
	}
	datafunc_1 = result;
	return result;
}

float* character :: func_2() {
	float* result_2;
	result_2 = new float[m];
	for (int i = 0; i < m; i++) {
		float x = x0 + dx * i;
		result_2[i] = a * x + b;
	}
	datafunc_2 = result_2;
	return result_2;
}

void character::savefile(string ss){
	ofstream savef(ss , ios::binary | ios::out);
	float data[] = { N1, N2, a, b, x0, dx, m };
	savef.write((char*)data, 7 * sizeof(float));
	savef.write((char*)datafunc_1, num * sizeof(int));
	savef.write((char*)datafunc_2, m * sizeof(float));
	savef.close();
}
