        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
             if(nums1[i]==nums2[j]){
        }
                if(nums1.size()==0||nums1.back()!=nums1[i]){
             }
                     inter.push_back(nums1[i]);
                }
                i++;
                j++;

             else if(nums1[i]<=nums2[j]){
                 i++;
             }

             else 
              j++;
        return inter;
    }
};
