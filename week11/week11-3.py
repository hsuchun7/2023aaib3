# week11-3.py
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0 #�̤j�� total ��ثe�� total
        counter = Counter()
        for i in range(k): # ���X�e��K�ӼƦr
            num = nums[i]
            counter[num] += 1
            total += num #��{�b���ơA�[�� total ��
        if(len(counter)==k): ans = max(ans, total)
        for i in range(k, len(nums)):
            left, right = nums[i-k], nums[i]
            counter[left] -= 1
            counter[right] += 1
            total = total - left +right  #�[���� ��k��
            if counter[left]== 0: del counter[left]
            if(len(counter)==k): ans = max(ans, total)
        return ans
