#pragma once

#include <string>

class Transaction
{
    const std::string addressFrom; // The private address of the sender
    const std::string addressTo;   // The public address of the recipient

    const double amountTransferred;

public:

    Transaction(const std::string fromAddress = "", const std::string toAddress = "", const double& transferAmount = 0.0)
        : addressFrom(fromAddress), addressTo(toAddress), amountTransferred(transferAmount)
    {}
};