# 0x1A. C - Hash tables

## 0. >>> ht = {}

Write a function that creates a hash table.

* Prototype: hash_table_t *hash_table_create(unsigned long int size);
  * where size is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return NULL

## 1. djb2

Write a hash function implementing the djb2 algorithm.

* Prototype: unsigned long int hash_djb2(const unsigned char *str)
* You are allowed to copy and paste the function from <a href="https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8">this page</a>

