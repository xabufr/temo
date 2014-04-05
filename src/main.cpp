#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include "core/core.h"

struct testClass {
    testClass() {std::cout << "tear up" << std::endl;}
    ~testClass() {std::cout << "tear down" << std::endl;}
    temo::Core core;
};

BOOST_FIXTURE_TEST_CASE(CREATE_CORE_3_SUBCORE_CREATED, testClass)
{
    BOOST_ASSERT(core.subCores().size() == 3);
    BOOST_ASSERT(core.getSubCore(temo::SubCoreType::MUSIC).type() == temo::SubCoreType::MUSIC);
    BOOST_ASSERT(core.getSubCore(temo::SubCoreType::MOVIE).type() == temo::SubCoreType::MOVIE);
    BOOST_ASSERT(core.getSubCore(temo::SubCoreType::SERIE).type() == temo::SubCoreType::SERIE);
}
