#include  <vector>
#include  <unordered_map>
#include  <iostream>

using  MyMapType = std::unordered_map<int, bool>;  // ad hoc map type
using  std::vector;

bool canSumWithMap(int goal, const vector<int>& vec, MyMapType& myMap)
{
    if (goal < 0)   return false;
    if (goal == 0)  return true;

    if (myMap[goal])
        return myMap[goal];

    for (auto& ell : vec)
    {
        if (canSumWithMap(goal-ell, vec, myMap)) 
        {
            myMap.insert({goal, true});
            return true;
        }
    }
    myMap.insert({goal, false});
    return false;
}

bool canSum(int goal, const vector<int>& vec)
{
    MyMapType  myMap;  // new map object initialized as empty

    bool rc = canSumWithMap(goal, vec, myMap);

    return rc;
    // myMap automagically deallocated here
}


using  std::cout;
using  std::endl;


int main()
{
    cout << std::boolalpha;  // want to print true or false rather than 0 or 1
    cout << canSum(7, {2,3})      << endl;
    cout << canSum(7, {5,3,4,7})  << endl;
    cout << canSum(7, {2,4})      << endl;  // no, can only do multiples of 2
    cout << canSum(8, {2,3,5})    << endl;
    cout << canSum(300, {7,14})   << endl;  // no, can only do multiples of 7

    return 0;
}
