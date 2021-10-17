// dllmain.cpp : Определяет точку входа для приложения DLL.
#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <utility>
#include <limits.h>
#include "SubStringLib.h"

const char* strcon(const char* str1, const char* str2) {
    const char* p1 = str1, * p2 = str2, * iterator = nullptr;
    unsigned int s1 = strlen(str1), s2 = strlen(str2), s3;
    while (!iterator) {
        if (p1 == str1 + s1) {
            return iterator;
        }
        else if (*p1 == *p2) {
            iterator = p1;
            for (s3 = 0; s3 < s2; ++s3) {
                if (*p1 == *p2) {
                    ++p1, ++p2;
                    continue;
                }
                else break;
            }
        }
        else p1++;
    }
    char* substr = new char[s3 + 1];
    strncpy(substr, iterator, s3);
    substr[s3] = '\0';
    return const_cast <const char*> (substr);
}