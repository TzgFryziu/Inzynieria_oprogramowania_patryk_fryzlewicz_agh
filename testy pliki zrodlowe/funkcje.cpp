#include "funkcje.h"
#include <cmath>




float logarytm_naturalny(float a) {
	if (a <= 0) {
		return -1;
	}
	return log(a);
}



float exponent(float x) {
	return exp(x);
}


float odchylenie_standardowe(std::vector<float> arr) {
	float result{ 0 };
	float avg{ 0 };
	int n;
	n = arr.size();
	for (auto x : arr) {
		avg += x;

	}
	avg /= n;

	for (auto x : arr) {
		result += pow((x - avg), 2);
	}

	result /= n;
	result = sqrt(result);
	return result;



}


int fun(int x) {
	return pow(x, 2) + x - 3;
}