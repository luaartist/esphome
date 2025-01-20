#include "nextion_component.h"

// Implement the methods defined in the header file
void NextionComponent::setup() {
  // This will be called by App.setup()
}

void NextionComponent::loop() {
  // This will be called by App.loop()
}

void NextionComponent::add_button(const std::string &name, std::function<void(bool)> callback) {
  // Add button handling code here
}

void NextionComponent::add_text(const std::string &name, std::function<void(const std::string &)> callback) {
  // Add text handling code here
}

void NextionComponent::add_number(const std::string &name, std::function<void(float)> callback) {
  // Add number handling code here
}

void NextionComponent::add_page(const std::string &name, std::function<void()> callback) {
  // Add page handling code here
}
