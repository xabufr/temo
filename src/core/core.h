#ifndef CORE_H
#define CORE_H

#include <vector>
#include <memory>
#include "subcore.h"

namespace temo
{
    class Core
    {
        public:
            Core();
            const std::vector<std::unique_ptr<SubCore>> &subCores() const;
            SubCore &getSubCore(temo::SubCoreType type) const;

        private:
            std::vector<std::unique_ptr<SubCore>> m_subCores;
    };
}

#endif // CORE_H
