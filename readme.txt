Prob1 :
Taking example given in problem exercise : 4 3 2 1 0 5 6 7 8 9
Counting from 0-10, pushing 0 in a stack and then comparing 0 to the first value of the sequence, if it is equal to the number, then push the first number of the sequence in a new array and if it is not equal, then push next number i.e. 1 in the stack and check it with the first element of the sequence and it continues till 9. If the number pushed in the stack matches with the sequence, then the number in the sequence push in the new array and the stack is poped till it not matches.

Prob2 :
In this question i am using simplistic approach just like we play game in real world. First I encountered the position of that children and then remove that position and reduced the number of children by 1, by reducing array by 1. To get the position to remove that particular child I check a condition that if the random number is greater than the number of children then n=n%M, by this I got the value of position to remove the children, and the same procedure continues i.e. remove the children shrink the array.






