#include <string>
#include "pch.h"
#include "HummingBird.h"

TEST(TestDataFrames, TestIndexOperator) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	HB::DataFrames dfNew = df["Reference"];
	EXPECT_EQ("Guo et al.", dfNew.getData()[0][0]);
	EXPECT_EQ("Guo et al.", dfNew.getData()[5][0]);
}