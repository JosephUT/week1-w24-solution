#include <gtest/gtest.h>

#include "06_message_table.hpp"

/**
 * Testing fixture for adding messages to the message table.
 */
class MessageTableTest : public testing::Test {
 protected:
  /**
   * SetUp function called before each test to set up data.
   */
  void SetUp() override {
    message_table_.addMessage({1, "ping node1"});
    message_table_.addMessage({2, "ping node2"});
    message_table_.addMessage({3, "ping node3"});
    message_table_.addMessage({4, "ping node2"});
    message_table_.addMessage({5, "ping node3"});
    message_table_.addMessage({6, "ping node4"});
    message_table_.addMessage({7, "ping node3"});
  }

  /**
   * Message data values of each message after setup.
   */
  const std::string kNode1Data_ = "ping node1";
  const std::string kNode2Data_ = "ping node2";
  const std::string kNode3Data_ = "ping node3";
  const std::string kNode4Data_ = "ping node4";
  const std::string kNode5Data_ = "ping node5";

  /**
   * Values for number of instances of each message value after setup.
   */
  const int kNode1Count_ = 1;
  const int kNode2Count_ = 2;
  const int kNode3Count_ = 3;
  const int kNode4Count_ = 1;
  const int kNode5Count_ = 0;

  /**
   * Values for most recent timestamp of each message after setup.
   */
  const int kNode1MostRecentTimestamp_ = 1;
  const int kNode2MostRecentTimestamp_ = 4;
  const int kNode3MostRecentTimestamp_ = 7;
  const int kNode4MostRecentTimestamp_ = 6;

  /**
   * Default message to be passed to function.
   */
  const StringMessage kDefaultMessage_{-1, "no ping"};

  /**
   * The MessageTable to test.
   */
  MessageTable message_table_;
};

TEST_F(MessageTableTest, AddAndCountBasic) {
  ASSERT_EQ(message_table_.countByData(kNode1Data_), kNode1Count_);
  ASSERT_EQ(message_table_.countByData(kNode2Data_), kNode2Count_);
  ASSERT_EQ(message_table_.countByData(kNode3Data_), kNode3Count_);
  ASSERT_EQ(message_table_.countByData(kNode4Data_), kNode4Count_);
  ASSERT_EQ(message_table_.countByData(kNode5Data_), kNode5Count_);
}

TEST_F(MessageTableTest, AddAndLookupBasic) {
  ASSERT_EQ(message_table_.lookupDataWithDefault(kNode1Data_, kDefaultMessage_).utime, kNode1MostRecentTimestamp_);
  ASSERT_EQ(message_table_.lookupDataWithDefault(kNode2Data_, kDefaultMessage_).utime, kNode2MostRecentTimestamp_);
  ASSERT_EQ(message_table_.lookupDataWithDefault(kNode3Data_, kDefaultMessage_).utime, kNode3MostRecentTimestamp_);
  ASSERT_EQ(message_table_.lookupDataWithDefault(kNode4Data_, kDefaultMessage_).utime, kNode4MostRecentTimestamp_);
}

TEST_F(MessageTableTest, AddLookupDefaultReturn) {
  ASSERT_EQ(message_table_.lookupDataWithDefault(kNode5Data_, kDefaultMessage_).utime, kDefaultMessage_.utime);
}
