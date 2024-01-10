#ifndef WEEK1_W24_SOLUTION_TIMESTAMP_SORTING_HPP
#define WEEK1_W24_SOLUTION_TIMESTAMP_SORTING_HPP

#include <queue>

#include "messages.hpp"

/**
 * Comparator for StringMessages to support the sort_by_timestamp() function.
 */
struct StringMessageCompare {
  // TODO: Define a function that allows this struct to be used as a comparator with your priority queue.
  // Begin solution code.
  bool operator()(const StringMessage &lhs, const StringMessage &rhs) { return lhs.utime > rhs.utime; }
  // End solution code.
};

/**
 * Sort a list of messages in order of increasing timestamp.
 * @param messages A vector of messages.
 * @return A vector of messages with timestamps in ascending order.
 */
std::vector<StringMessage> sort_by_timestamp(const std::vector<StringMessage> &messages) {
  // TODO: Implement this function using a priority queue and the StringMessageCompare struct. You may remove the line
  // below. return {}; Begin solution code.
  std::priority_queue<StringMessage, std::vector<StringMessage>, StringMessageCompare> message_queue(messages.begin(),
                                                                                                     messages.end());
  std::vector<StringMessage> sorted_messages;
  sorted_messages.reserve(message_queue.size());
  while (!message_queue.empty()) {
    sorted_messages.emplace_back(message_queue.top());
    message_queue.pop();
  }
  return sorted_messages;
  // End solution code.
}

#endif  // WEEK1_W24_SOLUTION_TIMESTAMP_SORTING_HPP
