// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The Bittorium developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITTORIUM_ACCUMULATORCHECKPOINTS_JSON_H
#define BITTORIUM_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //BITTORIUM_ACCUMULATORCHECKPOINTS_JSON_H
