#include "mongomovierepository.h"
#include "../../model/Movie.h"

temo::MongoMovieRepository::MongoMovieRepository()
{
}

std::vector<std::unique_ptr<temo::Movie> > temo::MongoMovieRepository::findAll() const
{
    return std::vector<std::unique_ptr<temo::Movie>>();
}
