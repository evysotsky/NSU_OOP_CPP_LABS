#include "Statistics.h"

int main(int argCounter, char* argVar[]) {
    if (argCounter > 2) {
        Statistics wordStatistic;
        for (int i = 1; i < argCounter - 1; ++i) {
            wordStatistic.openFile(argVar[i]);
        }
        wordStatistic.createCSV(argVar[argCounter - 1]);
    }
    else {
        std::cout << "Enter two arguments at least" << std::endl;
    }
}
