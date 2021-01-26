#include "Operation.h"
#include "OperationMaker.h"
#include "Exceptions.h"

class Div : public Operation {
public:
    void run(std::list<std::string>& args, Context& context) override {
        if (context.stackSize() < 2) {
            throw badArgsException("Not enough operands for '/'");
        }
        if (!args.empty()) {
            throw badArgsException("Too much arguments for '/'");
        }
        double number1 = context.pop();
        double number2 = context.pop();
        if (number1 == 0) {
            std::string errorStr = std::to_string(number2) + "/" + std::to_string(number1);
            throw divisionByZeroException("Division by zero: " + std::to_string(number2) + "/" + std::to_string(number1));
        }
        context.push(number2 / number1);
    }
};

ADD_OPERATION(Div, / )