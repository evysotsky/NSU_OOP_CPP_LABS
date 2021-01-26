#pragma once

#include <exception>
#include <utility>

class CalcException : public std::exception {
private:
    std::string errorString;
public:
    explicit CalcException(std::string errStr) {
        errorString = std::move(errStr);
    }

    [[nodiscard]] const char* what() const noexcept override {
        return errorString.c_str();
    }
};


class inputException : public CalcException {
public:
    explicit inputException(std::string errStr) : CalcException(std::move(errStr)) {}
};

class badArgsException : public inputException {
public:
    explicit badArgsException(std::string errStr) : inputException(std::move(errStr)) {}
};

class badOperationException : public inputException {
public:
    explicit badOperationException(std::string errStr) : inputException(std::move(errStr)) {}
};

class runtimeException : public CalcException {
public:
    explicit runtimeException(std::string errStr) : CalcException(std::move(errStr)) {}
};

class divisionByZeroException : public runtimeException {
public:
    explicit divisionByZeroException(std::string errStr) : runtimeException(std::move(errStr)) {}
};

class emptyStackException : public runtimeException {
public:
    explicit emptyStackException(std::string errStr) : runtimeException(std::move(errStr)) {}
};

