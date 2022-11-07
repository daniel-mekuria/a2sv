class Solution{
public:
    void sortColors(vector<int>& colors) {
        int start=0,mid=0,end=colors.size()-1;
        while(mid<=end)
        {
            if(colors[mid]==1) mid++;
            else if(colors[mid]==0) 
            {
                swap(colors[mid],colors[start]);
                start++;mid++;
            }
            else 
            {
                swap(colors[mid],colors[end]);
                end--;           
            } 
        }
    }
};
