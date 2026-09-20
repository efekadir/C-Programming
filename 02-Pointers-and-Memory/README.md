# 📍 Pointers and Memory

This section focuses on pointers, memory addresses, dynamic memory allocation, and working with data through memory in C.

The examples in this folder combine pointer concepts with previously learned topics such as arrays, structs, unions, and recursion.

## 📂 Programs

### 🔄 Swap With Pointers

Swaps the values of two integers by accessing them through pointers.

**Concepts practiced:**
- Pointer declaration
- Address operator (`&`)
- Dereferencing (`*`)
- Modifying values through pointers

### 👻 Ghost Struct & Union

A small example combining structs, unions, pointers, and dynamic memory allocation.

A `Ghost` stores information such as its name, ID, location, and loot. The name is dynamically allocated and modified through a pointer. The program also demonstrates how members of a union share the same memory.

**Concepts practiced:**
- Structs and unions
- `char *` pointers
- Dynamic memory allocation with `malloc()`
- Releasing memory with `free()`
- Passing pointers to functions
- Modifying strings through pointers
- Shared memory behavior of unions

### 🔢 One Counter

Generates a dynamic `10 × 10` matrix containing random `0`s and `1`s, then recursively counts the number of `1`s.

The matrix is dynamically allocated using a double pointer and accessed using pointer arithmetic.

**Concepts practiced:**
- Double pointers (`int **`)
- Dynamic 2D arrays
- Dynamic memory allocation
- Pointer arithmetic
- Dereferencing multiple levels of pointers
- Recursion
- `malloc()` and `free()`
- Random number generation

## 🧠 Concepts Covered

- Memory addresses
- Pointers
- Dereferencing
- Pointer arithmetic
- Pointers and arrays
- Double pointers
- Dynamic memory allocation
- `malloc()`
- `free()`
- Pointers with structs and unions
- Passing pointers to functions
- Dynamic 2D arrays

---

> These examples are part of my C programming learning journey and focus on understanding how pointers interact with memory and other C concepts.