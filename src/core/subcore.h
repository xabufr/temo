#ifndef SUBCORE_H
#define SUBCORE_H

namespace temo
{
    enum class SubCoreType
    {
        MUSIC,
        SERIE,
        MOVIE
    };

    class SubCore
    {
        public:
            SubCore();
            virtual SubCoreType type() const = 0;
    };
}

#endif // SUBCORE_H
