#pragma once

#ifdef SUBSTRINGLIBRARY_EXPORTS
#define SUBSTRINGLIBRARY_API __declspec(dllexport)
#else
#define SUBSTRINGLIBRARY_API __declspec(dllimport)
#endif

extern "C" SUBSTRINGLIBRARY_API const char* strcon(const char* str1, const char* str2);