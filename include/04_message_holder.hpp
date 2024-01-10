#ifndef WEEK1_W24_SOLUTION_MESSAGE_HOLDER_HPP
#define WEEK1_W24_SOLUTION_MESSAGE_HOLDER_HPP

#include <messages.hpp>
#include <queue>
#include <utility>

/**
 * Message holder to store messages and pass them in the same order they were stored.
 */
class MessageHolder {
 public:
  /**
   * Store a StringMessage in the message holder.
   * @param message The message to store.
   */
  void storeMessage(const StringMessage& message) {
    // TODO: Implement this function.
    // Begin solution code.
    string_messages.push(message);
    // End solution code.
  }

  /**
   * Store a BoolMessage in the message holder.
   * @param message The message to store.
   */
  void storeMessage(const BoolMessage& message) {
    // TODO: Implement this function.
    // Begin solution code.
    bool_messages.push(message);
    // End solution code.
  }

  /**
   * Remove and pass the first StringMessage that was stored and has not yet been removed.
   * @return A pair of StringMessage and a boolean, true if there was a message to return, false otherwise.
   */
  std::pair<StringMessage, bool> passStringMessage() {
    // TODO: Implement this function. You may remove the line below.
    // return {StringMessage{}, false};
    // Begin solution code.
    if (string_messages.empty()) return {StringMessage{}, false};
    std::pair<StringMessage, bool> return_pair{string_messages.front(), true};
    string_messages.pop();
    return return_pair;
    // End solution code.
  }

  /**
   * Remove and pass the first BoolMessage that was stored and has not yet been removed.
   * @return A pair of BoolMessage and a boolean, true if there was a message to return, false otherwise.
   */
  std::pair<BoolMessage, bool> passBoolMessage() {
    // TODO: Implement this function. You may remove the line below.
    // return {BoolMessage{}, false};
    // Begin solution code.
    if (bool_messages.empty()) return {BoolMessage{}, false};
    std::pair<BoolMessage, bool> return_pair{bool_messages.front(), true};
    bool_messages.pop();
    return return_pair;
    // End solution code.
  }

 private:
  /**
   * Queue for holding StringMessages
   */
  std::queue<StringMessage> string_messages;

  /**
   * Queue for holding BoolMessages
   */
  std::queue<BoolMessage> bool_messages;
};

#endif  // WEEK1_W24_SOLUTION_MESSAGE_HOLDER_HPP
