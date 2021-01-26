#pragma once

#include <stack>
#include <string>
#include <map>

class Context {
    std::stack<double> stack;
    std::map<std::string, double> variables;
public:
    double getVariable(const std::string& variable) {
        return variables.at(variable);
    }

    double top() {
        return stack.top();
    }

    double pop() {
        double number = stack.top();
        stack.pop();
        return number;
    }

    void push(double number) {
        stack.push(number);
    }

    bool stackIsEmpty() {
        return stack.empty();
    }

    int stackSize() {
        return stack.size();
    }

    void addVariable(const std::string& key, double number) {
        variables[key] = number;
    }

    bool variableExists(const std::string& key) {
        return variables.find(key) != variables.end();
    }
};