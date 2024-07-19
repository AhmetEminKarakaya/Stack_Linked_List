# Stack Data Structure Using Linked List

This repository contains the implementation of a stack data structure using a linked list in C. Stacks are LIFO (Last-In-First-Out) data structures, commonly used in various algorithms and system functions.

## Features

- **Dynamic Size:** Grows and shrinks as elements are added and removed.
- **LIFO Order:** Ensures last-in-first-out order of processing elements.
- **Efficient Operations:** Provides efficient push and pop operations.

# API Reference

- **HndStack initstack();**
- **int push(HndStack hnd, int val);**
- **int pop(HndStack hnd);**
- **int isEmpty(HndStack hnd);**
- **int getSize(HndStack hnd);**
- **void makeEmpty(HndStack hnd);**
- **void destroy(HndStack hnd);**
