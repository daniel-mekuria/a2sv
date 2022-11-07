class Solution {
public:
    int chalkReplacer(vector<int>& a, int k) {
        int length = a.size(), i;
        long long sum = 0;
        for(auto x: a) sum += x;
        if(k%sum == 0) return 0;
        long long r = (k > sum ? k%sum : k);
        for(i=0; i<length; ++i) {
            r -= a[i];
            if(r < 0) break;
        }
        return i;
    }
};
