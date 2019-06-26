#include "marked/aggregator.h"
#include "marked/fingerprint.h"
#include "marked/entropy.h"

bool 
aggregator::add_fingerprint(fingerprint fp)
{

}


bool 
aggregator::reset()
{
    fingerprints.clear();
    entropy.flush();
}
