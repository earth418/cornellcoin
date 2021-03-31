#include <iostream>
#include "block.h"

class Blockchain
{
    Transaction* currentTransactions;
    int numTransactions;
    Block currentBlock;

    void addTransaction(const Transaction& newTransaction)
    {
        *(currentTransactions + numTransactions) = newTransaction;
        ++numTransactions;

        if (numTransactions == Block::NUM_TRANSACTIONS)
        {
            // TODO
        }
    }

    /*
    * Pass in a value that has been hashed, to check if it is a valid proof-of-work solution.
    * Precondition: inputKey is a 256-length string of ones and zeros. Can be passed as a bool pointer, or even one char. 0 < inputKey < 0xff
    */
    bool isValidKey(const char* inputKey)
    {
        // I don't know what our condition is
        // Let's just for now say that it has to start with 40 zeroes

        for (int i = 0; i < 40; ++i)
        {
            if (*(inputKey + i) == 1)
                return false;
        }

        return true;
    }
}

int main()
{

    std::cout << "I don't know why I made this file, do you?" << std::endl;

    return 0;
}