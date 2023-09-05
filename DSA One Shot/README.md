># DSA One Shot(SubinVai)
    Data Structure : Container
    Algorithm :Proven Procedure

>## <mark>Time Complexity : </mark>
    (i)Assignment Operation---->O(1)
    (ii)Comparision Operation---->O(1)
    (iii)Mathematical Operation---->O(1)
    (iv)Function call ...Time lage but amra count kori nah...
    (v)Functionality in function---->Depends...

```c
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
```

```c
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
```

```c
#include<stdio.h>
int main()
{
    int i, n, result;
    scanf("%d",&n);
    result = 0;//-------->>O(1)

    for (int i = 1; i <= n; i++)
    {
        result = result + i;//-------->> 1 to n pojonto cholbe ebong protibar 2 ta operation hobe...1 bar hole 2 , 2 bar hole 4 evabe n bar hole 2n operations ...So, Propotional...O(2n)---->2*O(n)---->O(n)....
    }
    
    printf("Result = %d\n",result);

    return 0;
}
```

```c
#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d", &n);

    count = 0;
    //Ekhane n = 1 hole 1, 2 hole 4, 3 hole 9, 10 hole 100...So, count = n^2...So, O(n^2)...
    //Erokom tokhn e hoi jokhn ekta loop er vitor arekta loop thake ebong 2 tai o to n pojonto chole ba n er somanupatic then eta O(n^2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = count + 1;
        }
        
    }
    printf("n = %d, count = %d\n",n,count);
    return 0;
}
```

```c
#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d",&n);

    count = 0;
    /*-------->> Ekhane jokhon n = 1 then count = 3
                            n = 2 then count = 6
                            n = 3 then count = 9
                            n = 4 thene count = 12 = 4*3 = 3*n
                        so, here O(3n)---->3*O(n)---->O(n)...
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count = count + 1;
        }
        
    }
    printf("n = %d, count = %d\n",n,count);

    return 0;
}
```
```c
#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d",&n);

    count = 0;
    //O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = count + 1;
        }
        
    }
    
    //O(n)
    /*-------->> Overall, O(n^2 + n)---->O(n^2)
                        If, O(n! + n^3  + n) then O(n!)
                        if, O(4n^4 + 2n^3 + 4n) then O(n^4)
    */
    for (int i = 0; i < n; i++)
    {
        count = count + 1;
    }
    
    printf("Count = %d\n", count);
    return 0;
}
```
>## <mark> Space-Complexity : </mark>

```c
//Space-time Trade of : jekhan time kom dorkar sekhane time kom lagaite gele space besi lage or vice versa...
#include<stdio.h>
int main()
{
    int n;
    //Time complexity O(1),,,space complexity O(1)...karon n er man jai hok ekatai variable....
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is an even number\n",n);
    }
    else
    {
        printf("%d is an odd number\n",n);
    }
    

    return 0;
}
```

```c
#include<stdio.h>
int main()
{
/*-------->> Ekahne amader 100 ta songkha jor naki bijor ber kora lagbe tai amra 101  ta nisi array size...So, n hoi then n+1 array size hobe ...Tai Space-Complexity = O(n)...
*/
    int n, even[101];

    for (int i = 0; i < 101; i++)
    {
        even[i] = 0;
    }

    for (int i = 0; i < 101; i+=2)
    {
        even[i] = 1;
    }

    scanf("%d", &n);

    if(even[n])
    {
        printf("%d is an even number\n",n);
    }
    else
    {
        printf("%d is an odd number\n",n);
    }
    
    
    return 0;
}
```
```c
#include<stdio.h>
int main()
{
    //Space-Complexity ----->O(n^2)...
    int n = 2;
    int matrix1[2][2] = {1, 0, 2, 4};
    int matrix2[2][2] = {1, 0, 2, 4};
    int matrixSum[2][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ",matrixSum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
```

>## <mark> Searching Algorithms : </mark>

### Linear Search : 

```c
void linear_search(int *array, int n, int s)
{
    //------> time compexity : O(n)...space O(1) karon sudhu i amra use korsi already array, n, s input hisebe asce...
    for (int i = 0; i < n; i++)
    {
        if(array[i]==s)
        {
            printf("%d is found at index %d",s,i);
            return;
        }
    }
    printf("%d is not found in this array !",s);
}
```

### Binary Search : 
    Must needed to be sorted...
```c
//O(log2basen)
void binary_search(int *array, int n, int s)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left<=right)
    {
        mid = (left+right)/2;
        if(array[mid]==s)
        {
            printf("%d is found at index %d",s,mid);
            return;
        }
        else if(array[mid]<s)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("%d is not found !",s);
}
```

>## <mark>Sorting Algorithms : </mark>

### Selection Sort Algorithm :

```c
/*
    Selection sort e 1st e min ber kore then oita 1st e bosai then 1st e je silo se min er jaigai asbe ... 
    then porer gular modhe min ber kora o then same kaj repeat...

        10 5 2 8 7

---->   2 5 10 8 7
---->   2 5 10 8 7
---->   2 5 7 8 10
---->   2 5 7 8 10

*/
void selection_sort(int *array, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(array[j]<array[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        if(indexOfMin != i)
        {
            int temp;
            temp = array[i];
            array[i] = array[indexOfMin];
            array[indexOfMin] = temp;
        }
    }
    
}
```

### Bubble Sort Algorithm :

```c
/*
    Bubble sort e first e 1st 2ta compare then porer 2 ta compare evabe ses pojonto cholbe...Outer loop hobe no of element - 1 ...Outer loop ekbar chola mane last theke ekata positon thik hoba...Inner loop first e n-1 bar then n-2 evabe kombe...Generally vitore loop n-i-1 bar cholbe... 

    Example : 
        10 5 2 8 7
pass01 :
        5 10 2 8 7
        5 2 10 8 7
        5 2 8 10 7
        5 2 8 7 10
pass02 :2 5 8 7 10
        2 5 8 7 10
        2 5 7 8 10
pass03 :2 5 7 8 10
        2 5 7 8 10
pass04 :2 5 7 8 10

*/

#include<stdio.h>

//Time : O(n^2), Space : O(1)
void bubble_sort(int *array, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
    }
    
}
```

### Insertion Sort Algorithm : 
```c
/*
    Insertion sort:
    ekhane pass hobe 1 to n-1 orthat pass = no. of element - 2;
    Prottek pass e a[i] , item e assign korbo, then item er upojukto stan khuja lagbe then a[j] ke j+1 e rakhbko then a[j+1] holo item er upojukto sthan and setai assign kore dibo item....Ekhane amra age dore nei left er gula sorted then try kori oder moddhe jaiga khojar...
    Example : 5 4 2 3 1 
    pass01: 4 5 2 3 1
    pass02: 2 4 5 3 1
    pass03: 2 3 4 5 1
    pass04: 1 2 3 4 5 



            
*/
//Insertion sort er Best time complexity : O(n)
//Jesob khetre onekgula sort kora thake kisu elomelo sekhetre insertion sort tokhn onek efficient...
//Insertion sort er Worst time complexity : O(n^2)
//Space : O(1)
#include<stdio.h>

void insertion_sort(int *array, int n)
{
    for (int i = 1; i < n; i++)
    {
        int item = array[i];
        int j = i - 1;
        while(j>=0 && array[j]>item) 
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = item;
    }
    
}
```