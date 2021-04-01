#include <iostream>
#include <vector>
#include <bitset>
#include <array>
#include <utility>
#include "block.h"

class Blockchain
{

    std::vector<Block> blockChain;

    std::vector<Transaction> currentTransactions;

    std::bitset<256> hashOfPreviousBlock;

    void addTransaction(const Transaction& newTransaction)
    {
        currentTransactions.push_back(newTransaction);

        if (currentTransactions.size() == Block::NUM_TRANSACTIONS)
        {
            std::array<Transaction, Block::NUM_TRANSACTIONS> transactionArray;
            std::move(currentTransactions.begin(), currentTransactions.end(), transactionArray.begin());

            // TODO
            const auto currentBlock = Block(hashOfPreviousBlock, transactionArray);

            hashOfPreviousBlock = hash(currentBlock); // hash the block, or something
        }
    }

    void addBlock(const Block& inputBlock)
    {

        if (proofOfWorkFound)

            blockChain.push_back(inputBlock);

    }

    /*
    * Pass in a value that has been hashed, to check if it is a valid proof-of-work solution.
    * Precondition: inputKey is a 256-length string of ones and zeros.
    */
    bool isValidKey(const std::bitset<256> inputKey)
    {
        // I don't know what our condition is
        // Let's just for now say that it has to start with 40 zeroes

        for (int i = 0; i < 40; ++i)
        {
            if (inputKey[i])
                return false;
        }

        return true;
    }
};

int main()
{

    std::cout << "I don't know why I made this file, do you?" << std::endl;

    return 0;
}