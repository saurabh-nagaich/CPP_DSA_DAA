### OutPut Of Sorting


## Wave Sort
```
    Array before sorting : 
    //////////////////////
    Array : 1 3 4 7 5 6 2
    //////////////////////

    Array after wave sorting :
    //////////////////////
    Array : 3 1 7 4 6 2 5
    //////////////////////

    ////////////////////////////////////////
    /// ****** WAVE PATTERN PRINT ****** /// 
    ////////////////////////////////////////

    3     7     6     5

       1     4     2

```

## Bubble Sort
```
    enter the size of an array : 6 
    enter the element 0 : 9 
    enter the element 1 : 7 
    enter the element 2 : 4 
    enter the element 3 : 6 
    enter the element 4 : 2 
    enter the element 5 : 3 
    your unSorted/given arr is :  9 7 4 6 2 3 
    your Sorted arr is :  2 3 4 6 7 9 
```

## Count Sort
```
    enter the length of an array : 6 
    enter the element of an array : 34 
    enter the element of an array : 2 
    enter the element of an array : 4 
    enter the element of an array : 2 
    enter the element of an array : 6 
    enter the element of an array : 2 
    array before sorting : 
    /////////////////////
    Array : 34 2 4 2 6 2
    /////////////////////

    array after sorting :
    /////////////////////
    Array : 2 2 2 4 6 34 
    /////////////////////
```

## DNF Sort / 0,1,2 Sorting
Approach:The problem is similar to our old post Segregate 0s and 1s in an array, and both of these problems are variation of famous Dutch national flag problem.
The problem was posed with three colours, here `0′, `1′ and `2′. The array is divided into four
sections: 
a[1..Lo-1] zeroes (red)
a[Lo..Mid-1] ones (white)
a[Mid..Hi] unknown
a[Hi+1..N] twos (blue)
If the ith element is 0 then swap the element to the low range, thus shrinking the unknown range.
Similarly, if the element is 1 then keep it as it is but shrink the unknown range.
If the element is 2 then swap it with an element in high range.
```
    enter the length of an array : 5 
    enter the element of an array : 1 
    enter the element of an array : 0 
    enter the element of an array : 0 
    enter the element of an array : 2 
    enter the element of an array : 2 
    array before sorting : 
    /////////////////////
    Array : 1 0 0 2 2
    /////////////////////

    array after sorting :
    /////////////////////
    Array : 0 0 1 2 2
    /////////////////////
```

## Insertion Sort
```
    enter the size of an array : 4 

    enter the element 0 : 3
    enter the element 1 : 2
    enter the element 2 : 1
    enter the element 3 : 5

    your Sorted arr is :  1 2 3 5
```

## Merge Sort 
```
    ------- UnSorted arr -------- 
    9 4 3 88 2 5 6 7 1 8 
    ------- Sorted arr ----------  
    1 2 3 4 5 6 7 8 9 88 
```  

## Quick Sort
```
    enter the size of an array : 6 

    enter the element of an array : 12
    enter the element of an array : 8
    enter the element of an array : 5
    enter the element of an array : 3
    enter the element of an array : 2
    enter the element of an array : 1

    array before : 
    /////////////////////
    Array : 12 8 5 3 2 1
    /////////////////////

    array after :
    /////////////////////
    Array : 1 2 3 5 8 12 
    /////////////////////
```

## Selection Sort
```
    enter the size of an array : 5 

    enter the element 1 : 12
    enter the element 2 : 56
    enter the element 3 : 3
    enter the element 4 : 4
    enter the element 5 : 1

    your Sorted arr is :  1 3 4 12 56
```
