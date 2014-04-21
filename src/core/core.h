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
    class RepositoryFactory;
    class Core
    {
        public:
            Core();
            ~Core();
            const std::vector<std::unique_ptr<SubCore>> &subCores() const;
            SubCore &getSubCore(temo::SubCoreType type) const;

            MovieSubCore &movieSubCore();
            MusicSubCore &musicSubCore();
            SerieSubCore &serieSubCore();
            RepositoryFactory &repositoryFactory();
            void setRepositoryFactory(std::unique_ptr<RepositoryFactory> &&factory);

        private:
            std::vector<std::unique_ptr<SubCore>> m_subCores;
            std::unique_ptr<RepositoryFactory> m_repositoryFactory;
    };
}

#endif // CORE_H
