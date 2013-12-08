/// \author James Hughes
/// \date   November 2013

#include <cmc-optional/optional.hpp>
#include <gtest/gtest.h>

TEST(CPP11Optional, Basic)
{
  xstd::optional<std::string> os1;
  EXPECT_EQ(true, !os1);
  os1 = "test";
  EXPECT_EQ("test", *os1);
}

TEST(CPP11Optional, Move)
{
  xstd::optional<std::string> os1("test");
  EXPECT_EQ("test", *os1);

  xstd::optional<std::string> os2 = std::move(os1);
  EXPECT_EQ("test", *os2);
}

