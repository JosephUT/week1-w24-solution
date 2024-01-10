#include <gtest/gtest.h>

#include "05_timestamp_sorting.hpp"

TEST(TimestampSorter, TestSort) {
  StringMessage message1{1, "message 1"};
  StringMessage message2{2, "message 2"};
  StringMessage message3{3, "message 3"};
  StringMessage message4{4, "message 4"};
  std::vector<StringMessage> messages{message3, message2, message4, message1};
  std::vector<StringMessage> ordered_messages{message1, message2, message3, message4};
  ASSERT_EQ(sort_by_timestamp(messages), ordered_messages);
}
