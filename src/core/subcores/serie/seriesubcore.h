#ifndef SERIESSUBCORE_H
#define SERIESSUBCORE_H
#include "../../subcore.h"

namespace temo
{
    class SerieSubCore: public SubCore
    {
        public:
            SerieSubCore();
            virtual SubCoreType type() const;
    };
}

#endif // SERIESSUBCORE_H
