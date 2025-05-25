class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) 
    {
        int result = 0, start = values[0];
        for(int i = 1; i < values.size(); i++)
        {
            result = max(result, values[i] - i + start);
            start = max(start, values[i] + i);
        }
        return result;
    }
};