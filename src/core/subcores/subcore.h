#ifndef SUBCORE_H
#define SUBCORE_H

#include "type.h"

namespace temo
{
    class SubCore
    {
        public:
            SubCore();
            virtual SubCoreType type() const = 0;
    };
}

#endif // SUBCORE_H
