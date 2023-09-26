# Lab 19: Linked List Filter

In this lab we will start with a singly-linked list implementation and add two enhancements to it:

* A method that prints all elements to `cout`
* A method that copies all elements from one list to another, filtering by some predicate

Begin by studying the `SLinkedList` class in `list_filter.h`. It is almost identical to the implementation provided in section 3.2 of the textbook. Then move on to parts 1 and 2 below.

## Part 1: Print

In `list_filter.h`, a `print` method has been added, but it is empty. Write an implementation of this method that prints all elements of the list to `cout`, each on a line by itself.

Test the `print` method in `main`. Make sure it works properly before moving on.

## Part 2: Filter By Predicate

Next, write a function called `addWithPredicate` that adds all elements of some other list to the current instance. To help guide you, an empty version of this function has been added to the linked list class for you to fill in.

Instead of copying all elements, they should be filtered by a predicate. A "predicate" is a function that returns true or false based on whether the input to the function meets some condition. For example, if the predicate returns true only for strings that have vowels in them, then strings with no vowels should _not_ be copied.

## Part 3: Test Case

Finally, write a test case for the `addWithPredicate` in `list_filter_tests.cpp` and make sure it passes.
