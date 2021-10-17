#include <iostream>
#include "SubStringLib.h"

using namespace std;

int main()
{
    const char* data = strcon("#Gate#El. Psy. Congro.#Gate#", "El. Psy. Congro.123");
    printf("%s", data);
    delete[] data;
}