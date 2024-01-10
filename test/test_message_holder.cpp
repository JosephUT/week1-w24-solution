#include <gtest/gtest.h>

#include "04_message_holder.hpp"

TEST(MessageHolder, TestStorePass) {
  MessageHolder message_holder{};
  StringMessage string_message1{1, "message1"};
  StringMessage string_message2{2, "message2"};
  message_holder.storeMessage(string_message1);
  message_holder.storeMessage(string_message2);

  BoolMessage bool_message1{1, true};
  BoolMessage bool_message2{2, false};
  message_holder.storeMessage(bool_message1);
  message_holder.storeMessage(bool_message2);

  std::pair<StringMessage, bool> string_message_correct1{string_message1, true};
  std::pair<StringMessage, bool> string_message_correct2{string_message2, true};
  std::pair<BoolMessage, bool> bool_message_correct1{bool_message1, true};
  std::pair<BoolMessage, bool> bool_message_correct2{bool_message2, true};

  ASSERT_EQ(message_holder.passStringMessage(), string_message_correct1);
  ASSERT_EQ(message_holder.passStringMessage(), string_message_correct2);
  ASSERT_EQ(message_holder.passBoolMessage(), bool_message_correct1);
  ASSERT_EQ(message_holder.passBoolMessage(), bool_message_correct2);
}

TEST(MessageHolder, TestEmpty) {
  MessageHolder message_holder{};
  std::pair<StringMessage, bool> string_message_correct{StringMessage(), false};
  std::pair<BoolMessage, bool> bool_message_correct{BoolMessage(), false};
  ASSERT_EQ(message_holder.passStringMessage(), string_message_correct);
  ASSERT_EQ(message_holder.passBoolMessage(), bool_message_correct);
}
