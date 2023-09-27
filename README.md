# **0x1B. C - SORTING ALGORITHMS & BIG O**
`C` `Algorithm` `Data structure`

<!-- # Background Context -->

# Resources
- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)
- [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s) *(WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)*
- [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

<!-- man or help:
- `` -->

# Learning Objectives
<details>
<summary><h3>At least four different sorting algorithms</h3></summary>
</details>

<details>
<summary><h3>What is the Big O notation, and how to evaluate the time complexity of an algorithm</h3></summary>
</details>

<details>
<summary><h3>How to select the best sorting algorithm for a given input</h3></summary>
</details>

<details>
<summary><h3>What is a stable sorting algorithm</h3></summary>
</details>

# Requirements
<details>
<summary><h3>General</h3></summary>

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
</details>

<details>
<summary><h3>GitHub</h3></summary>

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**
</details>

# More Info
<details>
<summary><h3>Data Structure and Functions</h3></summary>

- For this project you are given the following `print_array`, and `print_list` functions:

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

```

```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

```

- Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
- Please use the following data structure for doubly linked list:

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

```
Please, note this format is used for Quiz and Task questions.

- `O(1)`
- `O(n)`
- `O(n!)`
- n square -> `O(n^2)`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- n + k -> `O(n+k)`
- …

Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.
</details>

<details>
<summary><h3>Tests</h3></summary>

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)
</details>

# Quiz questions
<details>
<summary><h3>Question 0</h3></summary>


</details>

<details>
<summary><h3>Question 1</h3></summary>


</details>

<details>
<summary><h3>Question 2</h3></summary>


</details>

<details>
<summary><h3>Question 3</h3></summary>


</details>

<details>
<summary><h3>Question 4</h3></summary>


</details>

<details>
<summary><h3>Question 5</h3></summary>


</details>

<details>
<summary><h3>Question 6</h3></summary>


</details>

<details>
<summary><h3>Question 7</h3></summary>


</details>

<details>
<summary><h3>Question 8</h3></summary>


</details>

<details>
<summary><h3>Question 9</h3></summary>


</details>

<details>
<summary><h3>Question 10</h3></summary>


</details>

<details>
<summary><h3>Question 11</h3></summary>


</details>

<details>
<summary><h3>Question 12</h3></summary>


</details>

<details>
<summary><h3>Question 13</h3></summary>


</details>

<details>
<summary><h3>Question 14</h3></summary>


</details>

<details>
<summary><h3>Question 15</h3></summary>


</details>

<details>
<summary><h3>Question 16</h3></summary>


</details>

<details>
<summary><h3>Question 17</h3></summary>


</details>

<details>
<summary><h3>Question 18</h3></summary>


</details>

<details>
<summary><h3>Question 19</h3></summary>


</details>

<details>
<summary><h3>Question 20</h3></summary>


</details>

<details>
<summary><h3>Question 21</h3></summary>


</details>

<details>
<summary><h3>Question 22</h3></summary>


</details>

<details>
<summary><h3>Question 23</h3></summary>


</details>

<details>
<summary><h3>Question 24</h3></summary>


</details>

<details>
<summary><h3>Question 25</h3></summary>


</details>

<details>
<summary><h3>Question 26</h3></summary>


</details>

<details>
<summary><h3>Question 27</h3></summary>


</details>

<details>
<summary><h3>Question 28</h3></summary>


</details>

<details>
<summary><h3>Question 29</h3></summary>


</details>

<details>
<summary><h3>Question 30</h3></summary>


</details>

<details>
<summary><h3>Question 31</h3></summary>


</details>

<details>
<summary><h3>Question 32</h3></summary>


</details>

<details>
<summary><h3>Question 33</h3></summary>


</details>

<details>
<summary><h3>Question 34</h3></summary>


</details>

<details>
<summary><h3>Question 35</h3></summary>


</details>

<details>
<summary><h3>Question 36</h3></summary>


</details>

<details>
<summary><h3>Question 37</h3></summary>


</details>

<details>
<summary><h3>Question 38</h3></summary>


</details>

<details>
<summary><h3>Question 39</h3></summary>


</details>

<details>
<summary><h3>Question 40</h3></summary>


</details>

<details>
<summary><h3>Question 41</h3></summary>


</details>

<details>
<summary><h3>Question 42</h3></summary>


</details>

# Tasks
<details>
<summary>

### 0. Bubble sort
`mandatory`

File: [0-bubble_sort.c](), [0-O]()
</summary>

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm

- Prototype: `void bubble_sort(int *array, size_t size);`
- You're expected to print the `array` after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

```c
alex@/tmp/sort$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```
</details>

<details>
<summary>

### 1. Insertion sort
`mandatory`

File: [1-insertion_sort_list.c](), [1-O]()
</summary>


</details>

<details>
<summary>

### 2. Selection sort
`mandatory`

File: [2-selection_sort.c](), [2-O]()
</summary>


</details>

<details>
<summary>

### 3. Quick sort
`mandatory`

File: [3-quick_sort.c](), [3-O]()
</summary>


</details>

<details>
<summary>

### 4. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 5. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 6. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 7. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 8. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 9. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 10. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 11. 
`#advanced`

File: []()
</summary>


</details>

<details>
<summary>

### 12. 
`#advanced`

File: []()
</summary>


</details>

