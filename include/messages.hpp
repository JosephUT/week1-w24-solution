#ifndef WEEK1_W24_SOLUTION_MESSAGE_HPP
#define WEEK1_W24_SOLUTION_MESSAGE_HPP

#include <string>

/**
 * Message struct to hold string data.
 */
struct StringMessage {
  /**
   * Timestamp in microseconds.
   */
  int utime;

  /**
   * Message data.
   */
  std::string data;
};

/**
 * Check if two StringMessages are equivalent.
 * @param lhs First StringMessage to compare.
 * @param rhs Second StringMessage to compare.
 * @return True if the messages are the same, false otherwise.
 */
bool operator==(const StringMessage& lhs, const StringMessage& rhs) {
  return lhs.utime == rhs.utime && lhs.data == rhs.data;
}

/**
 * Message struct to hold boolean data.
 */
struct BoolMessage {
  /**
   * Timestamp in microseconds.
   */
  int utime;

  /**
   * Message data.
   */
  bool data;
};

/**
 * Check if two BoolMessages are equivalent.
 * @param lhs First BoolMessage to compare.
 * @param rhs Second BoolMessage to compare.
 * @return True if the messages are the same, false otherwise.
 */
bool operator==(const BoolMessage& lhs, const BoolMessage& rhs) {
  return lhs.utime == rhs.utime && lhs.data == rhs.data;
}

#endif  // WEEK1_W24_SOLUTION_MESSAGE_HPP
