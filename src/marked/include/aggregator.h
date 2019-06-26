#ifndef AGGREGATOR_H_INCLUDED
#define AGGREGATOR_H_INCLUDED
#pragma once

#include <memory>
#include <vector>


class entropy;
class fingerprint;

class aggregator {

public:
    bool add_fingerprint(fingerprint fp);
    bool reset();

private:
    std::vector<fingerprint> fingerprints;
    std::unique_ptr<entropy> entropies = nullptr;
};


#endif // !AGGREGATOR_H_INCLUDED
