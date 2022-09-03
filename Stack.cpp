#include <iostream>

class Stack {
public:
    Stack() = default;
    Stack(int size) : arr_{new int[size]}, capacity_{size}, stack_position_{0}{}

    ~Stack() {
        delete[] arr_;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack is overflow - Program Terminated\n";
            exit(EXIT_FAILURE);
        }
    std::cout << "Inserting " << value << std::endl;
    arr_[++stack_position_] = value;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty - Program Terminated\n";
            exit(EXIT_FAILURE);
        }
    std::cout << "Removing " << top() << std::endl;
    return arr_[--stack_position_];
    }

    int top() {
        if (!isEmpty()) {
            return arr_[stack_position_];
        }
        else {
            exit(EXIT_FAILURE);
        }
    }

    int size() {
        return stack_position_;
    }

    bool isEmpty() {
        return size() == 0;
    }

    bool isFull() {
        return size() == capacity_;
    }


private:
    int* arr_;
    int stack_position_;
    int capacity_;

};


int main()
{
    Stack st(3);

    st.push(1);
    st.push(2);

    st.pop();
    st.pop();

    st.push(3);

    std::cout << "The top element is " << st.top() << std::endl;
    std::cout << "The stack size is " << st.size() << std::endl;

    st.pop();

    if (st.isEmpty()) {
        std::cout << "The stack is empty\n";
    }
    else {
        std::cout << "The stack is not empty\n";
    }

    return 0;
}
