# A Note about Map

## FEATURE:

1. Map contains value as pair. where the first value is used as key and the other one is used as second.
2. Map doesn't allow duplicate values.  
3. Map is always sorted  
4. Items once inserted in a set can't be modified but it can be removed.  
5. Typically implemented as a binary search tree  

All of the functions are same to set just assume pair instead of item. and pass "key" in function instead of "val"

## ITERATOR:

iterator of set is bidirectional.

some function to get iterator of specific location:

**get the address of first element of vector** : begin(), cbegin()

**get the address of last element in the vector:** rbegin(), crbegin()

**get the address of right** ***before*** **the first element of vector:** rend(), crend()

**get the  address of right** ***after*** **the last element of vector:** end(), cend()

//cbegin, cend(), c..., ... will return constant_iterator value cannot be changed using constant_iterator

## DECLARATION

```c++
map<typename, typename>mymap(start_iterator, end_iterator);
map<typename, typename>mymap(another_map);
map<typename, typename>mymap(pair1, pair2, pair3, .....); //or
//map<typename, typename>mymap({item1-f, item1-s}, {item2-f, item2-s},.....});
```

## ASSIGN

```
myset = {item1-f, item1-s}, {item2-f, item2-s},.....}
myset = another_map;
```

## Get the value of an item

```c++
getval = myset[key];
getval = myset.at(key);
```



## Modify the value of an item

```
myset[key] = assigned_value;
```



## INSERT

```
var.insert (pair);
var.iterator insert (iterator_hint, pair);
var.insert({pair1, pair2, ...})
var.insert (InputIterator first, InputIterator last);
```

## ERASE

```
var.erase (iterator);
var.erase (key);
var.erase (const_iterator first, const_iterator last);
```

## FIND

```
var.find(key); //get the iterator
```

if the item is not found() the it return var.end()

## COUNT

```
var.count(key); //get the number of occurence
```

Since set doesn't allow duplicate items so it will be either 0(if not exist) or 1(if exist)

## LOWER AND UPPER BOUND:

```
var.lower_bound(key);
```

if the "val" is exists in the set then it returns the "val"'s iterator_position else it return var.end();

```
var.upper_bound(key);
```

if the "val" exists in the set and it is not the last element then it returns the next item otherwise it returns var.end(). To return both bound:

```
var.equal_range(key).first == var.lower_bound(key);
var.equal_range(key).secound == val.upper_bound(key);
```

## OTHER IMPORTANT FUNCTION:

## EMPTY()

empty();  checks whether the set is empty or not

## VECTOR SIZE()

size()

## SWAP()

myset.swap(another_myset)