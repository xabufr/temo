#include "musicsubcore.h"

namespace temo
{
    MusicSubCore::MusicSubCore()
    {
    }


    temo::SubCoreType temo::MusicSubCore::type() const
    {
        return temo::SubCoreType::MUSIC;
    }
}
