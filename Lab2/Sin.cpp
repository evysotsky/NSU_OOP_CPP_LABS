#include "cmath"
#include "Operation.h"
#include "OperationMaker.h"
#include "Exceptions.h"

#define PI 3.14159265

class Sin : public Operation {
public :
    void run(std::list<std::string>& args, Context& context) override {
        if (context.stackIsEmpty()) {
            throw badArgsException("No operand for 'Sin'");
        }
        if (!args.empty()) {
            throw badArgsException("Too much arguments for 'Sin'");
        }
        context.push(sin(context.pop() * PI / 180));
    }
};

ADD_OPERATION(Sin, SIN)