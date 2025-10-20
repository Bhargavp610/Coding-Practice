# Approach: Loop through each character in the answer key string.
# If the answer is 'A', replace it with 'B'; otherwise, replace it with 'A'.
# This ensures every answer is intentionally incorrect.

# Write any import statements here

def getWrongAnswers(N: int, C: str) -> str:
  # Initialize empty string to store wrong answers
  result = ""
  
  for char in C:
    if char == 'A':
      result += 'B'
    else:
      result += 'A'
      
  return result
