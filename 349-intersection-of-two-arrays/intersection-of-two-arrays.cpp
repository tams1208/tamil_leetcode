class Solution {
public:
    void RemoveDublicate(vector<int> &NUM){
        if(NUM.size()==NULL || NUM.empty()) return ;

        int j = 1;
        for(int i = 1; i<NUM.size(); i++){
            if(NUM[i]!=NUM[i-1]){
                NUM[j] = NUM[i];
                j++;
            }
        }
        // Resize of vector till unique -> j gives total number of unqiue
        NUM.resize(j); 
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        // Sort both i/p
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        // Remove Dublicates
        RemoveDublicate(nums1);
        RemoveDublicate(nums2);
        // Check for matchs :
        int i=0,j=0;
        // i>=nums1.size() means checking of all in nums1 is done 
        // j>=nums2.size() means all nums2 no is match in nums1
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++,j++;
            }
            else if(nums1[i]>nums2[j])
            j++;
            else 
            i++;
        }
        return ans;
    }
};