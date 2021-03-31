#pragma once

#include "transaction.h"

class Block
{

    const static int NUM_TRANSACTIONS = 256;

    const char* precedingBlockHash;

    Transaction* transactionList = (Transaction*) malloc(sizeof(Transaction) * NUM_TRANSACTIONS); // just in case we actually wanna do C for some reason

    char* blockKey; // When the proof-of-work is found, store it in the blockKey.

public:

    /** 
    * Called when the proof-of-work has been found for a finished block
    * A finished block has a complete list of NUM_TRANSACTIONS transactions
    **/
   
    Block(const char* previousBlockHash, Transaction* listOfTransactionsToAdd, char* proofOfWork)
    : precedingBlockHash(previousBlockHash), transactionList(listOfTransactionsToAdd), blockKey(proofOfWork)
    {}

};