# Approach: Count how many cells in the grid contain a battleship (1),
# then divide that count by the total number of cells (R * C) to get probability.

from typing import List
# Write any import statements here

def getHitProbability(R: int, C: int, G: List[List[int]]) -> float:
  # Count battleship cells
  ones = 0
  for i in range(R):
    for j in range(C):
      if G[i][j] == 1:
        ones += 1
  
  # Calculate probability of hitting a battleship
  prob = ones / (R * C)
  return prob
