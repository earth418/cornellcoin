#pragma once

class Transaction
{
    const char* addressFrom;
    const char* addressTo;

    const double amountTransferred;

public:
    
    Transaction(const char* fromAddress = "", const char* toAddress = "", const double& transferAmount = 0.0)
        : addressFrom(fromAddress), addressTo(toAddress), amountTransferred(transferAmount)
    {}
}