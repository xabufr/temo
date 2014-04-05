#ifndef MUSICSUBCORE_H
#define MUSICSUBCORE_H

#include "../subcore.h"

namespace temo
{

    class MusicSubCore: public SubCore
    {
        public:
            MusicSubCore();
            virtual temo::SubCoreType type() const;
    };
}

#endif // MUSICSUBCORE_H
