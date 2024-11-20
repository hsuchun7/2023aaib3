# week11-3.py
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0 #最大的 total 跟目前的 total
        counter = Counter()
        for i in range(k): # 取出前面K個數字
            num = nums[i]
            counter[num] += 1
            total += num #把現在的數，加到 total 裡
        if(len(counter)==k): ans = max(ans, total)
        for i in range(k, len(nums)):
            left, right = nums[i-k], nums[i]
            counter[left] -= 1
            counter[right] += 1
            total = total - left +right  #加左邊 減右邊
            if counter[left]== 0: del counter[left]
            if(len(counter)==k): ans = max(ans, total)
        return ans
