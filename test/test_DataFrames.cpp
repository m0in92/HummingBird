#include <string>
#include "pch.h"
#include "HummingBird.h"

// Test Getters (or Acessor Functions)
TEST(TestDataFrames, TestGetColumnName) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ("Value", df.getColNames()[0]);
	EXPECT_EQ("Unit", df.getColNames()[1]);
	EXPECT_EQ("Reference", df.getColNames()[2]);
}

TEST(TestDataFrames, TestGetIndexName) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ("Density", df.getIndex()[0]);
	EXPECT_EQ("Volume", df.getIndex()[1]);
	EXPECT_EQ("Specific Heat", df.getIndex()[2]);
	EXPECT_EQ("Heat Transfer Coefficient", df.getIndex()[3]);
	EXPECT_EQ("Surface Area", df.getIndex()[4]);
	EXPECT_EQ("Capacity", df.getIndex()[5]);
	EXPECT_EQ("Maximum Potential Cut-off", df.getIndex()[6]);
	EXPECT_EQ("Minimum Potential Cut-off", df.getIndex()[7]);
}

TEST(TestDataFrames, TestGetData) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	// test the first column
	EXPECT_EQ("1626", df.getData()[0][0]);
	EXPECT_EQ("3.38E-05", df.getData()[1][0]);
	EXPECT_EQ("750", df.getData()[2][0]);
	EXPECT_EQ("1", df.getData()[3][0]);
	EXPECT_EQ("0.085", df.getData()[4][0]);
	EXPECT_EQ("1.65", df.getData()[5][0]);
	EXPECT_EQ("4.2", df.getData()[6][0]);
	EXPECT_EQ("2.5", df.getData()[7][0]);
	// test the second column
	EXPECT_EQ("kg m^-3", df.getData()[0][1]);
	EXPECT_EQ("m^3", df.getData()[1][1]);
	EXPECT_EQ("J K^-1 kg^-1", df.getData()[2][1]);
	EXPECT_EQ("J s^-1 K^-1", df.getData()[3][1]);
	EXPECT_EQ("m^2", df.getData()[4][1]);
	EXPECT_EQ("A hr", df.getData()[5][1]);
	EXPECT_EQ("V", df.getData()[6][1]);
	EXPECT_EQ("V", df.getData()[7][1]);
	// test the third column
	EXPECT_EQ("Guo et al.", df.getData()[0][2]);
	EXPECT_EQ("Guo et al.", df.getData()[1][2]);
	EXPECT_EQ("Guo et al.", df.getData()[2][2]);
	EXPECT_EQ("Guo et al.", df.getData()[3][2]);
	EXPECT_EQ("Guo et al.", df.getData()[4][2]);
	EXPECT_EQ("Guo et al.", df.getData()[5][2]);
	EXPECT_EQ("Guo et al.", df.getData()[6][2]);
	EXPECT_EQ("Guo et al.", df.getData()[7][2]);
}

TEST(TestDataFrames, TestGetColIndex) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ(0, df.getColIndex("Value"));
	EXPECT_EQ(1, df.getColIndex("Unit"));
	EXPECT_EQ(2, df.getColIndex("Reference"));
}

TEST(TestDataFrames, TestIndexIndex) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ(0, df.getIndexIndex("Density"));
	EXPECT_EQ(1, df.getIndexIndex("Volume"));
	EXPECT_EQ(2, df.getIndexIndex("Specific Heat"));
	EXPECT_EQ(3, df.getIndexIndex("Heat Transfer Coefficient"));
	EXPECT_EQ(4, df.getIndexIndex("Surface Area"));
	EXPECT_EQ(5, df.getIndexIndex("Capacity"));
	EXPECT_EQ(6, df.getIndexIndex("Maximum Potential Cut-off"));
	EXPECT_EQ(7, df.getIndexIndex("Minimum Potential Cut-off"));
}

TEST(TestDataFrames, TestColValues) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	HB::DataFrames dfNew = df.getColValues("Reference");
	EXPECT_EQ("Guo et al.", dfNew.getData()[0][0]);
	EXPECT_EQ("Guo et al.", dfNew.getData()[5][0]);
}

TEST(TestDataFrames, TestIndexValues) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	HB::DataFrames dfNew = df.getIndexValues("Density");
	EXPECT_EQ("1626", dfNew.getData()[0][0]);
	EXPECT_EQ("kg m^-3", dfNew.getData()[1][0]);
	EXPECT_EQ("Guo et al.", dfNew.getData()[2][0]);
}
TEST(TestDataFrames, TestGetValue) {
	std::string filePath = "C:/dev/HummingBird/HummingBirdTest/test_csv.csv";
	HB::DataFrames df = HB::read_csv(filePath);
	EXPECT_EQ("1626", df.getValue("Value", "Density"));
	EXPECT_EQ("3.38E-05", df.getValue("Value", "Volume"));
	EXPECT_EQ("750", df.getValue("Value", "Specific Heat"));
	EXPECT_EQ("1", df.getValue("Value", "Heat Transfer Coefficient"));
	EXPECT_EQ("0.085", df.getValue("Value", "Surface Area"));
	EXPECT_EQ("1.65", df.getValue("Value", "Capacity"));
	EXPECT_EQ("4.2", df.getValue("Value", "Maximum Potential Cut-off"));
	EXPECT_EQ("2.5", df.getValue("Value", "Minimum Potential Cut-off"));
}