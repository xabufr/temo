#include "mongorepositoryfactory.h"
#include "mongomovierepository.h"

temo::MongoRepositoryFactory::MongoRepositoryFactory()
{
}


std::unique_ptr<temo::MovieRepository> temo::MongoRepositoryFactory::movieRepository() const
{
    return std::unique_ptr<temo::MovieRepository>(new temo::MongoMovieRepository());
}
