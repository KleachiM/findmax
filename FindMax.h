#ifndef FINDMAX_FINDMAX_H
#define FINDMAX_FINDMAX_H

#include <vector>
#include <string>

struct Athlete
{
    std::string name;
    double height;
    double weight;
};

template<class T>
class Less
{
public:
    bool operator()(T const& first, T const& second) const
    {
        return first < second;
    }
};

class AthleteWeightComparator
{
public:
    bool operator()(Athlete const& first, Athlete const& second) const
    {
        return first.weight < second.weight;
    }
};

class AthleteHeightComparator
{
public:
    bool operator()(Athlete const& first, Athlete const& second) const
    {
        return first.height < second.height;
    }
};

template<typename T, typename Less>
bool FindMax(std::vector<T> const& arr, T& maxValue, Less const& less)
{
    if (arr.empty())
    {
        return false;
    }
    auto max = std::max_element(arr.begin(), arr.end(), less);
    maxValue = *max;
    return true;
}

#endif //FINDMAX_FINDMAX_H
