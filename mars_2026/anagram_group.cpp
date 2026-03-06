class Solution {
private:
    string bucketSort(string s)
    {
        int map[26]={0};
        for(const char &c : s)
        {
            map[c - 'a']++;
        }
        string res;
        for(int i=0; i<26;i++)
        {
            res += string(map[i], i + 'a');
        }
        return res;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> map;
      vector<vector<string>> res;

      for(string s: strs)
      {
        /*string sSorted = s;
        sort(sSorted.begin(), sSorted.end());
        map[sSorted].push_back(s);*/
        map[bucketSort(s)].push_back(s);
      }  
      for(auto &x : map)
      {
        res.push_back(move(x.second));
      }

      return res;
    }
};
