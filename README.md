0x1B. C - Sorting algorithms & Big O
C           Algorithm                   Data structure

Learning Objectives
In this project I have learnt the following:

•	At least four different sorting algorithms
•	What is the Big O notation, and how to evaluate the time complexity of an algorithm
•	How to select the best sorting algorithm for a given input
•	What is a stable sorting algorithm

Data Structure and Functions used:
 print_array,  and  print_list functions:
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
data structure for doubly linked list:

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


Tasks
0. Bubble sort
A function that sorts an array of integers in ascending order using the Bubble sort algorithm
•	Prototype: void bubble_sort(int *array, size_t size);
•	print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

1. Insertion sort
A function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
•	Prototype: void insertion_sort_list(listint_t **list);
•	You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
•	You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

2. Selection sort
A function that sorts an array of integers in ascending order using the Selection sort algorithm
•	Prototype: void selection_sort(int *array, size_t size);
•	Print the array after each time you swap two elements (See example below)
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

3. Quick sort
A function that sorts an array of integers in ascending order using the Quick sort algorithm
•	Prototype: void quick_sort(int *array, size_t size);
•	You must implement the Lomuto partition scheme.
•	The pivot should always be the last element of the partition being sorted.
•	Print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case
4. Shell sort - Knuth Sequence
A function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence
•	Prototype: void shell_sort(int *array, size_t size);
•	You must use the following sequence of intervals (a.k.a the Knuth sequence):
o	n+1 = n * 3 + 1
o	1, 4, 13, 40, 121, ...
•	expected to print the array each time you decrease the interval (See example below).
No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

5. Cocktail shaker sort
A function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm
•	Prototype: void cocktail_sort_list(listint_t **list);
•	Not allowed to modify the integer n of a node. You have to swap the nodes themselves.
•	Expected to print the list after each time i swap two elements (See example below)
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

6. Counting sort
A function that sorts an array of integers in ascending order using the Counting sort algorithm
•	Prototype: void counting_sort(int *array, size_t size);
•	You can assume that array will contain only numbers >= 0
•	Allowed to use malloc and free for this task
•	Expected to print your counting array once it is set up (See example below)
o	This array is of size k + 1 where k is the largest number in array
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

7. Merge sort
A function that sorts an array of integers in ascending order using the Merge sort algorithm
•	Prototype: void merge_sort(int *array, size_t size);
•	Implements the top-down merge sort algorithm
o	When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
o	Sort the left array before the right array
•	Allowed to use printf
•	Allowed to use malloc and free only once (only one call)
•	Output: see example
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

8. Heap sort
A function that sorts an array of integers in ascending order using the Heap sort algorithm
•	Prototype: void heap_sort(int *array, size_t size);
•	Implements the sift-down heap sort algorithm
•	Expected to print the array after each time I swap two elements
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

9. Radix sort
A function that sorts an array of integers in ascending order using the Radix sort algorithm
•	Prototype: void radix_sort(int *array, size_t size);
•	Implements the LSD radix sort algorithm
•	Assumes that array will contain only numbers >= 0
•	Allowed to use malloc and free for this task
•	Expected to print the array each time you increase your significant digit 


10. Bitonic sort
A function that sorts an array of integers in ascending order using the Bitonic sort algorithm
•	Prototype: void bitonic_sort(int *array, size_t size);
•	Assumes that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
•	Allowed to use printf
•	Expected to print the array each time you swap two elements (See example below)
Write in the file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case


11. Quick Sort - Hoare Partition scheme
A function that sorts an array of integers in ascending order using the Quick sort algorithm
•	Prototype: void quick_sort_hoare(int *array, size_t size);
•	Implement the Hoare partition scheme.
•	The pivot is always the last element of the partition being sorted.
•	Expected to print the array after each time you swap two elements (See example below)
Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
•	in the best case
•	in the average case
•	in the worst case

12. Dealer
Write a function that sorts a deck of cards.
•	Prototype: void sort_deck(deck_node_t **deck);
•	Allowed to use the C standard library function qsort
•	data structures used :

typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;

