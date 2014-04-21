#ifndef MOVIEREPOSITORY_H
#define MOVIEREPOSITORY_H

#include <memory>
#include <vector>

namespace temo
{
    class Movie;
    class MovieRepository
    {
        public:
            virtual std::vector<std::unique_ptr<Movie>> findAll() const = 0;
    };
}

#endif // MOVIEREPOSITORY_H
