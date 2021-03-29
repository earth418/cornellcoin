#pragma once

#include "transaction.h"

class Block
{

    const char* previousBlockHash;

    const Transaction* transactionList;

}