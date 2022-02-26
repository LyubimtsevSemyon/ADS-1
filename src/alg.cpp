// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
      if(value <= 1)
        return 0;

     for (uint64_t i = 2 ; i <= sqrt(value) ; i++)
          if (value % i == 0)
            return false;

     return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
   uint64_t count = 0;
    uint64_t i = 0;
    for (uint64_t j = 2 ; j <= LONG_MAX ; j++) {
        if (checkPrime(j)) {
            i += 1;
            if (i == n) {
                count = j;
                break;

            }

        }

    }
return count;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
   uint64_t count=0;
    uint64_t i=0;
     for (uint64_t k = value + 1 ; k <= LONG_MAX ; k++) {
        if (checkPrime(k)) {
            count = k;
            break;
        }
    }
    return count;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
      uint64_t sum=0;
    for (uint64_t m = 2 ; m < hbound ; m++) {
        if (checkPrime(m)) {
             {
                sum += m;
            }
        }
    }
    return sum;
}
