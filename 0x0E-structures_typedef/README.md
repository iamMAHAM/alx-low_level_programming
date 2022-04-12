 # 0x0E. C - Structures, typedef
## 0. Poppy

Define a new type struct dog with the following elements: 
* name, type = char *
* age, type = float
* owner, type = char *

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog
* Prototype: void print_dog(struct dog *d);
* Format: see example bellow
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.