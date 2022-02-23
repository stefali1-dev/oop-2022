#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int convert(const char* s) {
	int numar = 0;
	int i = 0;
	for (int i = 0; s[i] && s[i] != '\n'; i++)
		numar = numar * 10 + (s[i] - '0');
	return numar;
}

int solve(int& rezultat) {
	FILE* fisier = fopen("Text.txt", "r");
	if (fisier == NULL) {
		printf("Nu exista fisierul");
		return false;
	}
	char sir[100];
	rezultat = 0;
	while (fgets(sir, sizeof(sir), fisier)) {
		rezultat += convert(sir);
	}
	return true;
}

int main()
{	
	int rezultat;
	if (solve(rezultat) == true)
		std::cout << rezultat;
	else
		std::cout << 0;
}
