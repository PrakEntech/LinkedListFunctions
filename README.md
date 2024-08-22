# Linked List Functions

This repository contains C code for various linked list operations, including creation, traversal, insertion, deletion, and more. The code demonstrates how to work with singly linked lists and provides functions for common linked list manipulations.

## Features

- **Create Linked List**: Create a linked list from user input or from an array.
- **Traversal**: Print the elements of the linked list.
- **Insertion**: Insert elements at the beginning, end, or a specific position.
- **Deletion**: Remove elements from the beginning, end, a specific position, or by value.
- **Reversal**: Reverse the linked list.
- **Conversion**: Convert the linked list to an array and vice versa.
- **Count**: Get the number of elements in the linked list.

## Functions

### `void traversal(struct node *ptr)`

Prints the elements of the linked list.

### `struct node *insertFirst(struct node *head, int num)`

Inserts a new node at the beginning of the linked list.

### `void insertEnd(struct node *head, int num)`

Inserts a new node at the end of the linked list.

### `void insertBetween(struct node *head, int index, int num)`

Inserts a new node at a specific index in the linked list.

### `struct node *insertNext(struct node *head, int num)`

Inserts a new node after the given node.

### `struct node *arraytoLL(int a[], int count)`

Converts an array to a linked list.

### `struct node *delFirst(struct node *head)`

Deletes the first node of the linked list.

### `void delBetween(struct node *head, int index)`

Deletes a node at a specific index in the linked list.

### `void delitem(struct node *head, int num)`

Deletes the first occurrence of a node with a specific value.

### `void delEnd(struct node *head)`

Deletes the last node of the linked list.

### `struct node *insertBefore(struct node *head, int num)`

Inserts a new node before the given node.

### `struct node *reverseLL(struct node *head, char y)`

Reverses the linked list. Optionally keeps the original list.

### `struct node *deleteLL(struct node *head)`

Deletes all nodes in the linked list.

### `int countLL(struct node *head)`

Counts the number of elements in the linked list.

### `int *LLtoarray(struct node *head)`

Converts the linked list to an array.

## Usage

1. **Clone the repository**:

   ```bash
   git clone https://github.com/PrakEntech/LinkedListFunctions.git
   ```

2. **Compile the code**:

   ```bash
   gcc -o linkedlist linkedlist.c
   ```

3. **Run the executable**:

   ```bash
   ./linkedlist
   ```

4. **Follow the on-screen instructions** to interact with the linked list.

## Example

```
---------Linked-List-Functions----------
0. Linked List
1. Array-Linked List
 - 0
Create a Linked List -
Number of Items - 3
Element - 1
Element - 2
Element - 3
|1||2||3|
```
## Contact

For any inquiries, please contact me via:

- Instagram: [prak_entech983](https://www.instagram.com/prak_entech983/)
- YouTube: [Prak EnTech](https://www.youtube.com/c/PrakEnTech)
