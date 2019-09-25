# A Note about Set

## FEATURE:

1. Set doesn't allow duplicate values.  
2. Set is always sorted  
3. Items once inserted in a set can't be modified but it can be removed.  
4. Typically implemented as a binary search tree  

## ITERATOR:

iterator of set is bidirectional.

some function to get iterator of specific location:

**get the address of first element of vector** : begin(), cbegin()

**get the address of last element in the vector:** rbegin(), crbegin()

**get the address of right** ***before*** **the first element of vector:** rend(), crend()

**get the  address of right** ***after*** **the last element of vector:** end(), cend()

//cbegin, cend(), c..., ... will return constant_iterator value cannot be changed using constant_iterator

## DECLARATION

```
set< typename >var; 
set< typename >var (InputIterator first, InputIterator last);
set< typename >var(another_set);
```

## ASSIGN

```
myset = {item1, item2, item3, ...};
myset = another_set;
```

## INSERT

```
var.insert (value);
var.iterator insert (iterator_hint, val);
var.insert(initializer_list< typename >{item1, item2, ....});
var.insert({item1, item2, ...})
var.insert (InputIterator first, InputIterator last);
```

## ERASE

```
var.erase (iterator);
var.erase (val);
var.erase (const_iterator first, const_iterator last);
```

## FIND

```
var.find(val); //get the iterator
```

if the item is not found() the it return var.end()

## COUNT

```
var.count(val); //get the number of occurence
```

Since set doesn't allow duplicate items so it will be either 0(if not exist) or 1(if exist)

## LOWER AND UPPER BOUND:

```
var.lower_bound(val);
```

if the "val" is exists in the set then it returns the "val"'s iterator_position else it return var.end();

```
var.upper_bound(val);
```

if the "val" exists in the set and it is not the last element then it returns the next item otherwise it returns var.end(). To return both bound:

```
var.equal_range().first == var.lower_bound();
var.equal_range().secound == val.upper_bound();
```

## OTHER IMPORTANT FUNCTION:

## EMPTY()

empty();  checks whether the set is empty or not

## VECTOR SIZE()

size()

## SWAP()

myset.swap(another_myset)