class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
        int length_s = s.length();
        int length_p = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> frequency_p(26,0);
        vector<int> window(26,0);
        
        for(int i=0;i<length_p;i++){
            frequency_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> result;
        if(frequency_p == window) result.push_back(0);
        
        for(int i=length_p;i<length_s;i++){
            window[s[i-length_p] - 'a']--;
            window[s[i] - 'a']++;
            
            if(frequency_p == window) result.push_back(i-length_p+1);
        }
        return result;
    }
};
