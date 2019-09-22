# A note on Iterator

## Types of iterator:

**1) output iterator (least powerful) :**

can only used to output the value its point to.

**2) input iterator:**

can be used to change and output the value its point to/

**3) Forward Iterator:**

can be incremented and have the functions of input and output the value its point to. 

**4) Bi-directional iterator:**

have the features of forward iterator with the ability to decrement.

**5) Random access iterator:**

Have all functionalities of a pointer

## Containers and their iterator

| container | iterator type | container type |
| --------- | ------------- | -------------- |
| vector    | random        | sequential     |
| deque     | random        | sequential     |
| list      | bidirectional | sequential     |
| set       | bidirectional | associative    |
| multiset  | bidirectional | associative    |
| map       | bidirectional | associative    |
| multimap  | bidirectional | associative    |

**Some iterator functions:**

**header file: iterator**

```c++
advance(start_it, num) //shifts the iterator itself
distance(start_it, end_it) //count the number of indecies between two iterator
next(start_it, num) //returns a iterator
```

