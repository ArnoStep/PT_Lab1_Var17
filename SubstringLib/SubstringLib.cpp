// dllmain.cpp : Определяет точку входа для приложения DLL.
#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <utility>
#include <limits.h>
#include "SubStringLib.h"

const char* strcon(const char* str1, const char* str2) {
	int max_len = 0;
	int len = 0;
	const char* left = str1;
	const char* p1 = str1;
	while (*p1 != '\0') {
		const char* p2 = str2;
		while (*p2 != '\0') {
			const char* t1 = p1;
			const char* t2 = p2;
			len = 0;
			while (*t1 != '\0' && *t2 != '\0' && *t1 == *t2) {
				t1++;
				t2++;
				len += 1;
			}
			if (len > max_len) {
				max_len = len;
				left = p1;
			}
			p2++;
		}
		p1++;
	}
	char* ans = (char*)malloc((len + 1) * sizeof(char));
	memcpy(ans, left, max_len);
	*(ans + max_len) = '\0';
	return ans;
}