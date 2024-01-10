#include <gtest/gtest.h>

#include "03_bracket_checking.hpp"

TEST(BracketChecking, TestValidInputBasic) {
  ASSERT_EQ(check_brackets("{}"), true);
  ASSERT_EQ(check_brackets("((({[{()}()]})))"), true);
  ASSERT_EQ(check_brackets("({}{}[][])()"), true);
}

TEST(BracketChecking, TestInvalidInputBasic) {
  ASSERT_EQ(check_brackets("}{"), false);
  ASSERT_EQ(check_brackets("{}{({)}[]](])"), false);
  ASSERT_EQ(check_brackets("]"), false);
}

TEST(BracketChecking, TestCharactersIgnored) {
  ASSERT_EQ(check_brackets("string()"), true);
  ASSERT_EQ(check_brackets("{(hello)how}are you"), true);
  ASSERT_EQ(check_brackets("characters{}[(in])the]way"), false);
}

TEST(BracketChecking, TestNoBrackets) { ASSERT_EQ(check_brackets("no brackets is a valid ordering"), true); }
