#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

void swapStrings(char* s1, char* s2) {
	char aux_str[100];
	strcpy(aux_str, s1);
	strcpy(s1, s2);
	strcpy(s2, aux_str);
}

void ex3() {
	char s[100];
	scanf("%[^\n]s", s);

	char* p;
	p = strtok(s, " ");
	char words[50][100];
	int len_arr[50];

	int k = 0;

	while (p) {
		strcpy(words[k], p);
		len_arr[k] = strlen(p);
		k++;
		p = strtok(NULL, " ");
	}

	for(int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++) {
			if (len_arr[i] < len_arr[j]) {
				std::swap(len_arr[i], len_arr[j]);
				swapStrings(words[i], words[j]);
			}
			else if (len_arr[i] == len_arr[j]) {
				if (strcmp(words[i], words[j]) > 0) {
					std::swap(len_arr[i], len_arr[j]);
					swapStrings(words[i], words[j]);
				}
			}
		}
	for (int i = 0; i < k; i++) {
		printf("%s\n", words[i]);
	}
}

int main()
{	
	ex3();
}
