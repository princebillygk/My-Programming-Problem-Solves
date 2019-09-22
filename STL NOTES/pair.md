# Pair

## pair is a collection of two element

Declaration:

```c++
pair< typename, typename >mypair;
pair< typename, typename >mypair(another_pair);
pair< typename, typename >mypair(item1, item2); //items can be of different datatype
```

## Assign rule:

```c++
mypair = {item1, item2};
mypair = another_pair;
mypair = make_pair(item1, item2);
```

## Comparison operator overload:

We can compare two pair using == != <= >= . It checks the first elements if it are true for the condition then checks the second elements. if the first elements are false for the condition then it don't compare the second elements.

# Swap two pair

```c++
mypair.swap(another_pair)
```

