class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        int n = points.size();

        multimap<int,int> multi_mp;

        vector<vector<int>> answer;

        for(int i=0;i<n;i++){

            int x = points[i][0], y = points[i][1];

            multi_mp.insert({x*x + y*y, i});

        }

        int cnt = 0;

        for(auto it = multi_mp.begin();cnt<k;cnt++,it++){

            answer.push_back(points[it->second]);

        }

        return answer;
    }
};
