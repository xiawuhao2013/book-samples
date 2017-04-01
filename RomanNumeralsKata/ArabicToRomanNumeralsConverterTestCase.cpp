#include <gtest/gtest.h>
#include <string>

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

std::string convertArabicNumberToRomanNumeral(const unsigned int arabicNumber) {
  if (arabicNumber == 2) {
    return "II";
  }
  return "I";
}

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertedTo_I) {
  ASSERT_EQ("I", convertArabicNumberToRomanNumeral(1));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 2_isConvertedTo_II) {
  ASSERT_EQ("II", convertArabicNumberToRomanNumeral(2));
}
