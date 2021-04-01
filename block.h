#pragma once

#include <array>
#include <bitset>
#include "transaction.h"

class Block
{

public:

    const static int NUM_TRANSACTIONS = 256;

    /**
    * Called when the proof-of-work has been found for a finished block
    * A finished block has a complete list of NUM_TRANSACTIONS transactions
    **/

    Block(const std::bitset<256> previousBlockHash, std::array<Transaction, NUM_TRANSACTIONS> listOfTransactionsToAdd, std::bitset<256> proofOfWork)
    : precedingBlockHash(previousBlockHash), transactionList(listOfTransactionsToAdd), blockKey(proofOfWork)
    {}

private:

    const std::bitset<256> precedingBlockHash;

    std::array<Transaction, NUM_TRANSACTIONS> transactionList;

    std::bitset<256> blockKey; // When the proof-of-work is found, store it in the blockKey.

};