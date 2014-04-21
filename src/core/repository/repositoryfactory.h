#ifndef REPOSITORYFACTORY_H
#define REPOSITORYFACTORY_H
#include <memory>

namespace temo
{
    class MovieRepository;
    class RepositoryFactory
    {
        public:
            virtual std::unique_ptr<MovieRepository> movieRepository() const = 0;
    };
}

#endif // REPOSITORYFACTORY_H
