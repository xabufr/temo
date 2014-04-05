#ifndef CORE_H
#define CORE_H

#include <vector>
#include <memory>
#include "subcores/type.h"

namespace temo
{
    class MovieSubCore;
    class MusicSubCore;
    class SerieSubCore;
    class SubCore;
    class Core
    {
        public:
            Core();
            const std::vector<std::unique_ptr<SubCore>> &subCores() const;
            SubCore &getSubCore(temo::SubCoreType type) const;

            MovieSubCore &movieSubCore();
            MusicSubCore &musicSubCore();
            SerieSubCore &serieSubCore();

        private:
            std::vector<std::unique_ptr<SubCore>> m_subCores;
    };
}

#endif // CORE_H
