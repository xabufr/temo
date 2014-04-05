#ifndef MOVIESUBCORE_H
#define MOVIESUBCORE_H
#include "../../subcore.h"

namespace temo
{
    class MovieSubCore: public SubCore
    {
        public:
            MovieSubCore();

            virtual SubCoreType type() const;
    };
}

#endif // MOVIESUBCORE_H
