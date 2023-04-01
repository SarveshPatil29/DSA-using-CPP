// https://leetcode.com/problems/insert-delete-getrandom-o1/

class RandomizedSet
{
public:
  set<int> mySet;
  RandomizedSet()
  {
  }

  bool insert(int val)
  {
    if (mySet.count(val))
    {
      return false;
    }
    mySet.insert(val);
    return true;
  }

  bool remove(int val)
  {
    if (mySet.count(val))
    {
      mySet.erase(val);
      return true;
    }
    return false;
  }

  int getRandom()
  {
    // for(auto i:mySet) {
    //     return i;
    // }
    // return -1;

    auto it = mySet.begin();
    int random = rand() % mySet.size();
    std::advance(it, random);

    return *it;
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */