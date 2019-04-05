// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The Bittorium developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITTORIUM_INVALID_OUTPOINTS_JSON_H
#define BITTORIUM_INVALID_OUTPOINTS_JSON_H
#include <string>

std::string LoadInvalidOutPoints()
{
    std::string str = "[\n"
            "]";
    return str;
}

#endif //BITTORIUM_INVALID_OUTPOINTS_JSON_H
