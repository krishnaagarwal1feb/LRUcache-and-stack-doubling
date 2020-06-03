# LRUcache-and-stack-doubling
implemented LRU cache .stack doubling concept here with dynamic memory allocation

## Stack doubling 

Allocating array size as 1 using malloc 
doubling the size every time the stack is full using realloc
Thus we do not need to copy all the elements again as we just attach more memory at the end of the stack/array!
