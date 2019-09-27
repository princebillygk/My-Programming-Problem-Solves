## A note in algorithm header file

# Operation in a single item list:

## Condition

```c++
bool all_of(start_iterator, end_iterator, return_bool_unary_func(x));
bool none_of(start_iterator, end_iterator, return_bool_unary_func(x));
bool any_of(start_iterator, end_iterator, return_bool_unary_func(x));
```

here the functions has to return bool and the functions has to be unary in fact, it will take only argument

here **all_of** returns true if the function returns true for all values in the range. **any of** returns true the function return true for only one value in the range. **none_of** if no function returns true.



to call same unary function for each element in the range ```start_iterator, end_iterator```

```c++
for_each(start_iterator, end_iterator, unary_func(x));
```

## Searching & Counting

find a value:

```c++
iterator find(start_iterator, end_iterator, value_to_find);
```

find the iterator of first value for which the function returns true:

```c++
iterator find_if(start_iterator, end_iterator, return_bool_unary_func(x));
```

find the iterator of first value for which the function returns false:

```c++
iterator find_if_not(start_iterator, end_iterator, return_bool_unary_function(x));
```

To find to consecutive  equal element in a range

```c++
iterator adjacent_find(start_iterator, end_iterator);
```

Count the number of value matched:

```c++
count(start_iterator, end_iterator);
```

Count the number of value satisfy a following condition:

```c++
count_if(start_iterator, end_iterator, return_bool_unary_functio1n);
```





# Operation in two item lists:

## Specific Find

**Returns an iterator to the first element** in the range `start_iterator_1, end_iterator_1` that matches **any of** the elements in the range `start_iterator_2, end_iterator_2`. If no such element is found, the function returns end_iterator_1.

```c++
rang1_iterator find_first_of(start_iterator_1, end_iterator_1, start_iterator_2, end_iterator_2);
```

**Returns an iterator to the first element** in the range `start_iterator_1, end_iterator_1` that meet conditions (**using a binary function returning bool**) with **any of** the elements in `start_iterator_2, end_iterator_2`. If no such element is found, the function returns end_iterator_1.

```c++
rang1_iterator find_first_of(start_iterator_1, end_iterator_1, start_iterator_2, end_iterator_2, bool_return_binary_function);
```

binary function means a function that takes two arguments.

same things  to find the last element in the range `start_iterator_1, end_iterator_1`:

```c++
rang1_iterator find.end(start_iterator1, end_iterator1, start_iterator2, end_iterator2);
rang1_iterator find.end(start_iterator1, end_iterator1, start_iterator2, end_iterator2, bool_return_binary_function);
```

find the first occurrence of whole range2 in range1

```c++
rang1_iterator search(start_iterator1, end_iterator1, start_iterator2, end_iterator2);
rang1_iterator search(start_iterator1, end_iterator1, start_iterator2, end_iterator2, bool_return_binary_function);
```

search for n time match

```c++
iterator search(start_iterator, end_iterator, n_times, val);
iterator search(start_iterator, end_iterator, n_times, val, bool_return_binary_function);
```



## Matching

check if all elements of range1 and range2 are equal

```c++
equal(start_iterator1, end_iterator1, start_iterator2);
equal(start_iterator, end_iterator, start_iterator2, bool_return_binary_function);
```

find the first mismatch between two item

```c++
return_pair mismatch(start_iterator1, end_iterator1, start_iterator2);
return_pair mismatch(start_iterator, end_iterator, start_iterator2, bool_return_binary_function);
//pair.first = iterator of first range
//pair.second = iterator of second range where the mismatch occurs
```

check if the 2nd range is a permutation of 1st range:

```c++
is_permutaion(start_iterator1, end_iterator1, start_iterator1, bool_return_binary_function)
```

## Copy in 2nd range

copy

```c++
copy(start_iterator, end_iterator, out_start_iterator);
```

copy_backward

```c++
copy(start_iterator, end_iterator, out_end_iterator2);
```

copy_n

```c++
copy(start_iterator, n, out_start_iterator)
```

copy_if

```
copy_if(start_iterator, end_iterator, out_start_iterator, return_bool_unary_function(x));
```

## MOVE

move

```c++
move(start_iterator, end_iterator, out_start_iterator);
```

move_backward

```c++
move_backward(start_iterator1, end_iterator, out_start_iterator);
```

## Transform

operation on a single range and store it to another range:

```c++
transform(start_iterator, end_iterator, out_start_iterator, return_val_unary_func(x));
```

operation on two ranges and store it to another range

```c++
transform(start_iterator1, end_iterator1, start_iterator2, return_val_binary_func(x));
```

## Replace

replace all value the matched with the old value to new value

```c++
replace(start_iterator, end_iterator, old_val, new_value)
```

replace if

```c++
replace_if(start_iterator, end_iterator, return_bool_unary_func(x), new_value)
```

don't replace the original create a copy of replaced values

```c++
replace_copy(start_iterator, end_iterator, out_iterator_start, old_val, new_value);
replace_copy_if(start_iterator, end_iterator, return_bool_unary_func(x), new_value);
```

## Swap two item

swap two same type of item

```c++
swap(same_type_var1, same_type_var2);
```

swap using range

```c++
swap_ranges(start_iterator1, end_iterator1, start_iterator2)
```

swap to value using pointer or iterator

```c++
iter_swap(iterator1, iterator2);
```

