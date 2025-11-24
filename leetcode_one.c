// Last updated: 2025-11-24T09:43:27+05:00
// Last updated: 2025-11-24T09:42:27+05:00
// Last updated: 2025-11-24T09:41:58+05:00
// Last updated: 2025-11-24T09:34:25+05:00
// Last updated: 2025-11-24T09:26:08+05:00
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ans = malloc(2 * sizeof(int));
    *returnSize = 2;
    int i,j;
    int found = 0;

    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                ans[0]=i;
                ans[1]=j;
                found=1;
                break;
            }
        }
        break; 
    }

    if(found==0){
        ans[0]=-1;
        ans[1]=-1;
    }

    return ans;
} 