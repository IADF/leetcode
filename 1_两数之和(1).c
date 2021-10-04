/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int return_num[2];

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    typedef struct{
        int id;
        int key;
    }hash_type;
    int judge_num;
    *returnSize = 2;
    hash_type  hash_num[numsSize];
    for(int i=0;i<numsSize;i++){
    	judge_num=target-nums[i];
        for(int j=0; j<i; j++){
            if(judge_num==hash_num[j].key) {
                return_num[0]=hash_num[j].id;
                return_num[1]=i;
                return (int*)return_num;
            }
        }
        hash_num[i].id=i;
        hash_num[i].key=nums[i];
    }
    return_num[0]=0;
    return_num[1]=1;
    return 0;
}

