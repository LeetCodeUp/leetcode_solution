```
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> ss;
        for(auto v : paths){
            ss.insert(v[1]);
            ss.insert(v[0]);
        }
        for(auto v : paths){
            ss.erase(v[0]);
        }
        return *ss.begin();
    }
};
```
In a set, the value of an element also identifies it (the value is itself the key, of type T), and each value must be unique. The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.

## OP(ordered)
```
// set::begin/end
#include <iostream>
#include <set>
int main ()
{
  int myints[] = {75,23,65,42,13};
  std::set<int> myset (myints,myints+5);
  std::cout << "myset contains:";
  for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  return 0;
}
```
//set::insert
The single element versions (1) return a pair, with its member pair::first set to an iterator pointing to either the newly inserted element or to the equivalent element already in the set. The pair::second element in the pair is set to true if a new element was inserted or false if an equivalent element already existed.
```
// set::insert (C++98)
#include <iostream>
#include <set>

int main ()
{
  std::set<int> myset;
  std::set<int>::iterator it;
  std::pair<std::set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; ++i) myset.insert(i*10);    // set: 10 20 30 40 50

  ret = myset.insert(20);               // no new element inserted  return an iterator pointer to 20

  if (ret.second==false) it=ret.first;  // "it" now points to element 20

  myset.insert (it,25);                 // max efficiency inserting
  myset.insert (it,24);                 // max efficiency inserting
  myset.insert (it,26);                 // no max efficiency inserting

  int myints[]= {5,10,15};              // 10 already in set, not inserted
  myset.insert (myints,myints+3);

  std::cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;   //get the element using *
  std::cout << '\n';

  return 0;
}
```



