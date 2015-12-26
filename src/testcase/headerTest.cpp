#include "../../header/entity.h"

#include <fstream>
//#include <utility>
#include <iostream>
int main () {
    std::ofstream logs("logs.txt");
    logs << "test log";
    return 0;
}
