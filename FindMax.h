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

struct Student
{
    std::string name;
    std::string surname;
    Student& operator=(const Student& s)
    {
        name = s.name;
        surname = s.surname;
    }
};

template<typename T, typename Less>
bool FindMax(std::vector<T> const& arr, T& maxValue, Less const& less)
{
    if (arr.empty())
    {
        return false;
    }

    auto max = arr.begin();

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        if (less(*max, *it))
        {
            max = it;
        }
    }
    maxValue = *max;
    return true;
}

#endif //FINDMAX_FINDMAX_H
