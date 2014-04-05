#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include "core/core.h"
#include "core/subcores/movie/moviesubcore.h"
#include "core/subcores/music/musicsubcore.h"
#include "core/subcores/serie/seriesubcore.h"

struct testClass {
    testClass() {std::cout << "tear up" << std::endl;}
    ~testClass() {std::cout << "tear down" << std::endl;}
    temo::Core core;
};

BOOST_FIXTURE_TEST_CASE(CREATE_CORE_3_SUBCORE_CREATED, testClass)
{
    BOOST_CHECK_EQUAL(core.subCores().size(), 3);
    BOOST_CHECK_EQUAL((int) core.getSubCore(temo::SubCoreType::MUSIC).type(), (int)temo::SubCoreType::MUSIC);
    BOOST_CHECK_EQUAL((int) core.getSubCore(temo::SubCoreType::MOVIE).type(), (int) temo::SubCoreType::MOVIE);
    BOOST_CHECK_EQUAL((int) core.getSubCore(temo::SubCoreType::SERIE).type(), (int) temo::SubCoreType::SERIE);

    BOOST_CHECK_EQUAL((int)core.movieSubCore().type(), (int) temo::SubCoreType::MOVIE);
    BOOST_CHECK_EQUAL((int)core.musicSubCore().type(), (int) temo::SubCoreType::MUSIC);
    BOOST_CHECK_EQUAL((int)core.serieSubCore().type(), (int) temo::SubCoreType::SERIE);
}
