class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_value = 0 
        for i in accounts:
            employee_wealth= sum(i)
            max_value = max(max_value,employee_wealth)
        return max_value