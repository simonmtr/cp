# Pidgeonhole Principle

## Idea
"if you have more pidgeons than pidgeonholes, then you will always have one pidgeonhole with more than one pidgeon."
more general: "if you have m items and n containers, if m>n there is at least one container with ceil(m/n) items."


Assumption: If you have a group of n poeple, tehere are two people who have an identical number of friends within the group.
- n people
- each person = {1, ..., n-1} friends
-> ceil(n/n-1) = 2

## Examples:
### Pair of numbers
Let s = {1, 2, ..., 20}
if we pick 11 numbers we are guaranteed that the sum of two picked numbers is 21.
{1, 20}, {2, 19}, {3, 18}, {4, 17}, {5, 16}, {6, 15}, {7, 14}, {8, 13}, {9, 12}, {10, 11}
-> If we pick 10 numbers, we can pick one number from each pair. Once we have to pick the 11th number, we will be guaranteed to get a pait that adds up to 21.
Why? -> ceil(11/10) = 2

### How many dots in a square?
We have a square with 8cmx8cm sides. How many dots do you need, to be sure that two dots are within a distance of sqrt(8) of each other?
Steps using the pidgeonhole principle:
-> sqrt(8) = sqrt(2*2 + 2*2) -> sqrt(8) splits the 8x8 square in 2x2 parts
-> To get two points with the distance of sqrt(8), two dots have to be in one of the 2x2 parts of the square
-> 16 boxes, => ceil(n/16) = 2 => n = 17


## Strong Form
Let q1, q2, ..., qn be positive integers. If q1+q2+...+qn-n+1 objects are put into n boxes, then either the 1st box contains at least q1 objects, or the second box contains at least q2 objects, ..., or the nth box contains at least qn objects.

### Examples:
### Fruits
A basked ot fruit has apples, bananas and oranges. What is the smallest number of pieces of fruit that should be put in the basket in order to guarantee that either there are at least 8 apples or at least 6 bananas or at least 9 oranges?
-> 8+6+9 - 3 + 1 = 21

# Remember
ceil(n/n-1) = 2
