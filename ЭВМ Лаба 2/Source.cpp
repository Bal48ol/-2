#include <iostream>
#include <vector>
#include <iterator>
#include <string>

// №1
int MinIndex(const std::vector <int> & vec) // функция использует индексацию для доступа к элементам массива
{
    if (vec.empty()) 
    {
        return 0;
    }
    
    int index = 0; 
    int value = vec[0]; 

    for (int i = 1; i < vec.size(); ++i) 
    {
        if (value > vec[i]) 
        {
            index = i;
            value = vec[i];
        }
    }
    return index;
}

int MinIndex_iterator(const std::vector<int> & container) // функция использует итератор для доступа к элементам массива
{
    auto iter = container.begin();
    
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (*iter > *it) 
        {
            iter = it;
        }
    }
    return iter - container.begin();
}

// №3
bool palindrom(const std::vector <int> mass)
{
    if (mass.empty())
    {
        return true;
    }

    int leftBorder_index = 0;
    int rightBorder_index = mass.size() - 1;

    while (leftBorder_index <= rightBorder_index)
    {
        if (mass[leftBorder_index] != mass[rightBorder_index])
        {
            return false;
        }
        ++leftBorder_index;
        --rightBorder_index;
    }
    return true;
}

bool palindrom_iterator(const std::vector <int> mass_it)
{
    auto iter = mass_it.begin();
    auto riter = mass_it.rbegin();

    for (; iter != mass_it.end(); ++iter, ++riter)
    {
        if (*iter != *riter)
        {
            return false;
        }
    }
    return true;
}

//№2
std::vector<int> Array(int N)
{
    if (N <= 0)
    {
        return std::vector<int>();
    }

    std::vector<int> vec;
    
    for (int i = 1; i <= N; ++i)
    {
        int sum = 0;
        for (int j = 0; j <= i; ++j)
        {
            sum += pow(i + j, 2);
        }
        vec.push_back(sum);
    }
    return vec;
}

void printArray(const std::vector <int> & vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
}

//№4
std::vector <int> dna(const std::string DNA)
{
    std::vector <int> vec;
    int count = 0;

    for (int i = 0; i < DNA.size(); ++i)
    {
        vec.push_back(count);
        if (DNA[i] == 'C')
        {
            --count;
        }
        else if (DNA[i] == 'G')
        {
            ++count;
        }

    } return vec;
}