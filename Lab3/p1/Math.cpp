#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <stdlib.h>

int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return a + b;
}

int Math::Add(double a, double b, double c) {
	return a + b + c;
}

int Math::Mul(int a, int b) {
	return a * b;
}

int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return a * b;
}

int Math::Mul(double a, double b, double c) {
	return a * b * c;
}

int Math::Add(int count, ...) {
	va_list args;
	int sum = 0;
	va_start(args, count);
	for (int i = 0; i < count; i++) {
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}

char* Math::Add(const char* a, const char* b) {
	int len_a = strlen(a);
	int len_b = strlen(b);
	int i;
	char* str;
	str = (char*)malloc(len_a + len_b + 1);
	for (i = 0; a[i]; i++) {
		str[i] = a[i];
	}
	for (i = 0; b[i]; i++) {
		str[len_a + i] = b[i];
	}
	str[len_a + len_b] = '\0';

	return str;
}