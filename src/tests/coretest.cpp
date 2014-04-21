#include <boost/test/unit_test.hpp>
#include "../core/core.h"
#include "../core/repository/mongo/mongorepositoryfactory.h"
#include "../core/repository/movierepository.h"

struct CoreTest
{
    temo::Core core;
};

BOOST_FIXTURE_TEST_CASE(TEST_MONGO_REPOSITORY_FACTORY, CoreTest)
{
    BOOST_CHECK_NO_THROW(core.repositoryFactory());
    core.setRepositoryFactory(std::unique_ptr<temo::RepositoryFactory>(new temo::MongoRepositoryFactory));
    BOOST_CHECK(&core.repositoryFactory() != nullptr);
    BOOST_CHECK(core.repositoryFactory().movieRepository());
}
