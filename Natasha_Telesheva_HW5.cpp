#include <array>
#include <functional>
#include <iostream>
#include <optional>
#include <string>

struct MyStack {
    static constexpr size_t max{ 100 };
    size_t stack_position{ 0 };
    std::array<int, max> data;
};

void pop(MyStack& stack) {
    if (stack.stack_position == 0)
        return;
    stack.data[--stack.stack_position];
}

void push(MyStack& stack_, int data) {
    if (stack_.stack_position == MyStack::max)
        return;
    stack_.data[stack_.stack_position++] = data;
}

std::optional<int> top(MyStack& stack_) {
    if (stack_.stack_position == 0)
        return std::nullopt;
    return stack_.data[stack_.stack_position - 1];
}

bool empty(MyStack& stack_) { return stack_.stack_position == 0; }

size_t size(MyStack& stack_) { return MyStack::max; }

int main() {
    MyStack mSt{};
    push(mSt, 150);
    push(mSt, 175);
    push(mSt, 200);
    std::cout << MyStack::max << std::endl;
    std::cout << size(mSt) << std::endl;
    std::optional<int> myStackTop = top(mSt);
    if (myStackTop)
        std::cout << "Top :" << *myStackTop << std::endl;
    pop(mSt);
    myStackTop = top(mSt);
    if (myStackTop)
        std::cout << "Top :" << *myStackTop << std::endl;
}
