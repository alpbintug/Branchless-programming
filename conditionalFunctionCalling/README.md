## Conditional Function Calling without branches

Imagine you are getting a integer input from the user and this value selects different options from a menu. Now instead of getting an input, simulate this process for first 10000 integers after 0;

if value % 5 == 0, select Option 1
if value % 5 == 1, select Option 2
if value % 5 == 2, select Option 3
else, select Exit

And print the selected function with a custom function which returns void.


#### Performances
- branched_functionCall mean execution time : 3.709 s
- branchless_functionCall mean execution time : 3.421 s
