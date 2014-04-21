#ifndef MONGOMOVIEREPOSITORY_H
#define MONGOMOVIEREPOSITORY_H

#include "../movierepository.h"

namespace temo
{
    class MongoMovieRepository : public MovieRepository
    {
        public:
            MongoMovieRepository();
            virtual std::vector<std::unique_ptr<Movie>> findAll() const override;
    };
}

#endif // MONGOMOVIEREPOSITORY_H
