#ifndef MONGOREPOSITORYFACTORY_H
#define MONGOREPOSITORYFACTORY_H

#include "../repositoryfactory.h"
namespace temo
{
    class MongoRepositoryFactory : public RepositoryFactory
    {
        public:
            MongoRepositoryFactory();

            virtual std::unique_ptr<MovieRepository> movieRepository() const override;
    };
}

#endif // MONGOREPOSITORYFACTORY_H
