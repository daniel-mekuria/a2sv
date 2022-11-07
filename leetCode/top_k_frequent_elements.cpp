class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        priority_queue<pair<int,int>> pq;
        vector<int> answer;
        for(int& i:nums){
            frequency[i]++;
        }
        for(auto& it : frequency){
            pq.push(make_pair(it.second, it.first));
            if(pq.size() > frequency.size() - k){
                answer.push_back(pq.top().second); pq.pop();
            }
        }
        return answer;
    }
};
