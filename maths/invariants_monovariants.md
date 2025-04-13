# Invariants/Monovariants

## Idea

## Example

### Chess Board

We have a 8x8 Chess board and 2x1 dominos (horizontal and vertical).
Can we cover the chess board with these dominos without overlapping? -> yes
Now if we remove opposite edges on the corner of the chess board (two white ones or two black ones), is this still the case?
- One domino will always cover one black and one white square
- Removing two white squares for example, we will have Black: 32 and White: 30 squares. Every time we place a domino, these numbers go down by one.
-> B-W = 2
-> therefore it is impossible to cover the chess board.

### Numbers on the wall

1, 2, ..., 100 are written on a wall. At any step, Erase a b ; Add a+b-1. After 99 steps, what number remains?
- 1 2 3 4 5 
    a     b
- 1 3 4 6
  a   b  
- 3 4 6
    a b
- 3 9
-> 11

=> Answer is always 11 for this sequence

Solution to above (100 numbers) problem:
- create a sum of list
Sum of list     number in the list
s=1+2+...+100   100
s-1             99
(s-1)-1=s-2     98
...             ...
s-99            1

### Infinite strip of squares

Finite number stones placed on infinite in both directions strip of squares
- at any step: pick up 2 stones at the same location (if possible)
- move one left one right
Question: Can we return to the original configuration after a finite number of steps?
Steps:
- label one square as 0 and left negative and right positive
- label each stone with a weight ni^2 = i^2 (squaring to keep track of distance)
-> Monovariant: X=SUM(ni^2)
When shifting a stone the change is from 2*(i^2) (two stones, each i^2) which then changes to (i-1)^2 + (i+1)^2 = 2*i^2+2
therefore, after each step X will increase by 2 each step. => We can not go back to the initial X because X is always increasing so the initial X can not be same as the ending X.

### Numbers on a board
All numbers from 1 to 1000000 are listed on the board. For each number in this board, we replace that number with its som of digits while resulting number is bigger than 9. At the end, all numbers will be in range of [1, 9]. Determine which is bigger in the new sequence, number of 1's or number of 2's?

Example: Number 1234 -> f(1234) = f(1+2+3+4) = f(10) = f(1) = 1 which is 1234 modulo 9.
The invariant in modulo 9 is S(n)-n. This is always 0, where S(n) = Sum of digits of n.
Finally, the sequence will be like this: 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, ...., 1, 2, 3, 4, 5, 6, 7, 8, 9, 1. -> Number of 1's is one greater that number of 9's.


## Conclusion
Invariant = quantity that does not change
Monovariant = quantity that changes monotically (non-decreasing or non-increasing)
