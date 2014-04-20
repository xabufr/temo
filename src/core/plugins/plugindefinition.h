#ifndef PLUGINDEFINITION_H
#define PLUGINDEFINITION_H

#include <string>
#include <vector>

struct PluginDefinition
{
    struct Version
    {
        int major, minor;
    };
    struct VersionRequirements
    {

    };

    std::string name;
    Version version;

    std::vector<std::pair<std::string, VersionRequirements>> dependencies;
};

#endif // PLUGINDEFINITION_H
