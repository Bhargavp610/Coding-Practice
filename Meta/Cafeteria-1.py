from typing import List
# Write any import statements here

def getMaxAdditionalDinersCount(N: int, K: int, M: int, S: List[int]) -> int:
  # Write your code here
  out = 0
  S.sort()
  left = 1
  
  for s in S:
    right = s - (K + 1)
    out += 1 + (right-left) // (K+1)
    left = s+ K+1
  out += 1 + (N-left) // (K+1)
    
  return out
