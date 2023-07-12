#include <string>
#include "pch.h"
#include "HummingBird.h"

TEST(TestDataFrames, ExtractCSVandValue) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ(1, std::stod(df.getValue("Value", "Heat Transfer Coefficient")));
}