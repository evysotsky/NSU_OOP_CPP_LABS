#ifndef LAB0B_STATISTICS_H
#define LAB0B_STATISTICS_H

#include <string>
#include <map>
#include <iostream>
#include <vector>

using std::map;
using std::multimap;
using std::string;

class Statistics {
    map<string, int> wordMap;

    int wordCounter = 0;

public:
    Statistics();

    void openFile(const std::string& fileName);

    void createCSV(const std::string& fileName);
};


#endif //LAB0B_STATISTICS_H
