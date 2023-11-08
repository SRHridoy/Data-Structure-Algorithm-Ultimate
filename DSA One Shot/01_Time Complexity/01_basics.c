#include<stdio.h>

int main()
{
    int n1, n2, result;
    
    n1 = 10;//-------->>O(1)
    n2 = 20;//-------->>O(1)
    result = n1 + n2;//-------->>here 1 assignment and one mathematical operation but it isn't O(2). It's O(1)

    //-------->>Overall, When the number of operations in program isn't depend on the input then it's constant time or O(1) ...Big O(1) / order of 1...

    return 0;
}