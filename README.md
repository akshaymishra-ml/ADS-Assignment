# ADS-Assignment
Optimal Insertion Sequence in an AVL Tree

PROBLEM STATEMENT - 
AVL Trees are vastly used for searching purposes because of their self-balancing nature. This self-balancing property comes due to rotations performed after mismatch in height og subsequent left and right subtrees.
If the number of rotations increase in an AVL Tree, searching time and insertion time will also get affected. So, we can devise a way in which if we know the keys to be inserted, we can arrange them in such a way that there are no rotations required.
### APPROACH:
1. Sort the given arrray of keys.
2. Create a balanced search tree from the given keys.
3. Do **LEVEL ORDER TRAVERSAL** of the formed tree, which is your answer.

### LOGIC for balances search tree using sorted array:
  *find the middle element of the array and then set it as root.
  *recursively call the left sub-tree and the right-sub tree.
##  TIME COMPLEXITY OF THE SOLUTION IS - O(nlogn)
output is shown in the output folder.
