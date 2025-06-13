class Solution {
public:

    static bool mycomp(string a, string b) {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snum;

        for(auto i : nums) {
            snum.push_back(to_string(i));
        }

        sort(snum.begin(), snum.end(), mycomp);

        if(snum[0] == "0") return "0";

        string ans = "";

        for(auto s : snum) {
            ans += s;
        }
        return ans;
    }
};