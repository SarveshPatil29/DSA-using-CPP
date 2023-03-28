// https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution
{
public:
  vector<string> uncommonFromSentences(string s1, string s2)
  {
    unordered_map<string, int> count;
    istringstream iss(s1 + " " + s2);
    while (iss >> s1)
      count[s1]++;
    vector<string> res;
    for (auto w : count)
      if (w.second == 1)
        res.push_back(w.first);
    return res;
  }
};

// class Solution
// {
// public:
//   vector<string> uncommonFromSentences(string s1, string s2)
//   {
//     unordered_map<string, int> map1;
//     unordered_map<string, int> map2;

//     string temp = "";
//     for (int i = 0; i < s1.length(); i++)
//     {
//       if (s1[i] == ' ')
//       {
//         map1[temp]++;
//         temp = "";
//       }
//       else
//       {
//         temp += (s1[i]);
//       }
//     }

//     map1[temp]++;
//     temp = "";

//     for (int i = 0; i < s2.length(); i++)
//     {
//       if (s2[i] == ' ')
//       {
//         map2[temp]++;
//         temp = "";
//       }
//       else
//       {
//         temp += (s2[i]);
//       }
//     }

//     map2[temp]++;
//     temp = "";

//     vector<string> ans;

//     for (int i = 0; i < s1.length(); i++)
//     {
//       if (s1[i] == ' ')
//       {
//         if ((map1[temp] == 1) && (map2.find(temp) == map2.end()))
//         {
//           ans.push_back(temp);
//         }
//         temp = "";
//       }
//       else
//       {
//         temp += (s1[i]);
//       }
//     }
//     if ((map1[temp] == 1) && (map2.find(temp) == map2.end()))
//     {
//       ans.push_back(temp);
//     }

//     temp = "";

//     for (int i = 0; i < s2.length(); i++)
//     {
//       if (s2[i] == ' ')
//       {
//         if ((map2[temp] == 1) && (map1.find(temp) == map1.end()))
//         {
//           ans.push_back(temp);
//         }
//         temp = "";
//       }
//       else
//       {
//         temp += (s2[i]);
//       }
//     }
//     if ((map2[temp] == 1) && (map1.find(temp) == map1.end()))
//     {
//       ans.push_back(temp);
//     }

//     return ans;
//   }
// };