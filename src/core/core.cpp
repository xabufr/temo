#include "core.h"
#include "subcores/subcore.h"
#include <exception>

#include "subcores/music/musicsubcore.h"
#include "subcores/serie/seriesubcore.h"
#include "subcores/movie/moviesubcore.h"

#include "repository/repositoryfactory.h"

namespace temo
{
    Core::Core()
    {
        m_subCores.push_back(std::unique_ptr<SubCore>(new MusicSubCore()));
        m_subCores.push_back(std::unique_ptr<SubCore>(new MovieSubCore()));
        m_subCores.push_back(std::unique_ptr<SubCore>(new SerieSubCore()));
    }

    Core::~Core()
    {

    }

    const std::vector<std::unique_ptr<SubCore> > &Core::subCores() const
    {
        return m_subCores;
    }

    SubCore &Core::getSubCore(temo::SubCoreType type) const
    {
        for(const auto &subCore : this->m_subCores) {
            if(subCore->type() == type) {
                return *subCore;
            }
        }
        throw std::exception();
    }

    MovieSubCore &Core::movieSubCore()
    {
        return static_cast<MovieSubCore&>(getSubCore(SubCoreType::MOVIE));
    }

    MusicSubCore &Core::musicSubCore()
    {
        return static_cast<MusicSubCore&>(getSubCore(SubCoreType::MUSIC));
    }

    SerieSubCore &Core::serieSubCore()
    {
        return static_cast<SerieSubCore&>(getSubCore(SubCoreType::SERIE));
    }

    RepositoryFactory &Core::repositoryFactory()
    {
        return *m_repositoryFactory;
    }

    void Core::setRepositoryFactory(std::unique_ptr<RepositoryFactory> &&factory)
    {
        m_repositoryFactory = std::move(factory);
    }
}
