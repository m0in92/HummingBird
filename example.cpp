#include <iostream>
#include "HummingBird.h"

int main() {
    std::string filePath = "..\\cities.csv";  // filePath is relative to the cmake-build directory
    HB::DataFrames df = HB::read_csv(filePath);

    df.display_dataframes();
}
