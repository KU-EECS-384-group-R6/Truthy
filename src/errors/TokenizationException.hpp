// TokenizationError.hpp without inline definitions
#ifndef TOKENIZATION_EXCEPTION_HPP
#define TOKENIZATION_EXCEPTION_HPP

#include "ParseException.hpp"
#include "Span.hpp"

using namespace std;

class TokenizationException : public ParseException
{
private:
    char invalidByte;

public:
    TokenizationException(char invalidByte, Span span, string expression);
    string display() const;
};

#endif // ERROR_HPP
