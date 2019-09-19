# Vector Note

A vector is  similar to array with dynamic size.

**Features:**

[+] Inserting elements at end O(1)

[-]  Inserting elements at beginning or middle is worse O(N)

[+] access any element using index O(1)

[+] Removing an element from beginning or middle is worse O(N)

Vector does not increase its space every time we insert an element (which is a very inefficient and expensive task in terms of processing time) instead it allocate some extra spaces at some logarithmic intervals when we use push_back() or emplace_back() member function. to get the size of the currently allocated capacity we can use capacity() member function.

```
myvec.assign(12,0);
printf("capacity: %lu\n", myvec2.capacity());
myvec2.push_back(3);
//after using push_back() member function
printf("capacity: %lu\n", myvec2.capacity());
//output
//capacity: 12
//capacity: 24
```

## RESERVE & SHRINK

sometime the number of item can be so big so that you may want to reserve some space before the execution of the program. It doesn't add any vector elements but increases the vector capacity.

reserver(size)

```
myvec.reserve(10000);
```

sometime you may want free extra spaces reserved by vector

shrink_to_fit();

```
myvec.shrint_to_fit()
```

the vector size is increasable at any time depending on free sequential memory available in the system

## **DECLARATION RULE:**

**declaration  syntax:**

```
vector< typename >var
vector< typename >var(size) //all indices value will set to zero
vector< typename >var(size, value) //all indices value will be initialized with the argument "value" given
vector< typename >var(start_iterator, end_iterator)
vector< typename >var(vector)
vector< typename >var(initializer_list< typename >{item1, item2, item3,...}) //or just
vector< typename >var({item1, item2, item3,...})
```

if we declare an empty vector we can also assign it letter using assign() member function

```
var.assign(size, value)
var.assign(start_iterator, end_iterator)
var.assign((initializer_list::< typename >{item1, item2, item3,...}) //or just
var.assign({item1, item2, item3,...})
```

or you can assign it to the same as another vector by using "=" sign.

```
vector1 = vector2;
myvector = {1,2, 3, 4}
myvector  = initializer_list<int>{1, 2, 4, 5}
```

We can also insert any element at beginning or middle but time complexity will be O(N). if we insert element at last then the time complexity will be O(1) for each element.

```
insert(iterator_position, value)
insert(iterator_position, size, value) 
insert(iterater_position, start_iterator, end_iterato)
insert(iterator_position, initializer_list< typename >{item1, item2, ....}) //or just
insert(postion, {item1, item2, ...})
```

**Example: declaration**

vector< int>i declares an empty array.

vector< int >myvec(another_vec);

vector< int >i(10) vector< int >i[10]declares a vector with 10 indices.

vector< int >i[10] declares a array of vectors.

vector< int > myvec2(myvec.begin(), myvec.begin() + 3); using iterator

vector< int >myvec1(initializer_list< int >{1, 2, 3});  using initializer list the first item of the

another way easy way vector< int >myvec1({1,2,3});

vector will be 1 the second will be 2 and the third will be 3.

vector< stack< int > >i declares a vector of stack

vector< vector< int > >i declares a vector of vector

Here is example of vector of of vectors:

matrix of size nxm where all elements are initialized to -1

```
vector< vector< int > > myvec5(3, vector<int>(5, -1));
for (auto i : myvec5) {
    for (auto j : i) {
        printf("%d ", j);
    }
    printf("\n");
}
printf("\n");
```

output:

```
-1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 
-1 -1 -1 -1 -1
```

## **GET THE VALUE OF A ITEM IN VECTOR:**

to get the value of item we can simply use the member function at(index) or use [index]

```
myvec.at(x) //throws error if invalid index is being send
myvec[x]    //returns garbage value if invalid index is being send
```

get the first item using myvec.front() and last item myvec.back()

```
myvec.front();
myvec.back();
```

to get the value first item guess what? ans: myvec[0] or myvec.at(0)

## CHANGE AN ITEM IN VECTOR:

```
myvec[x] = value;
```

## ITERATOR:

iterator in vector can be randomly accessible.

some function to get iterator of specific location:

**get the address of first element of vector** : begin(), cbegin()

**get the address of last element in the vector:** rbegin(), crbegin()

**get the address of right** ***before*** **the first element of vector:** rend(), crend()

**get the  address of right** ***after*** **the last element of vector:** end(), cend()

//cbegin, cend(), c..., ... will return constant_iterator value cannot be changed using constant_iterator

## ADD AN ITEM TO LAST O(1)(S):

add elements to the end of vector: **emplace_back(x), push_back();**

when we emplace_back a complex variable like object it we can construct the element(struct / class) with out making a extra copy of it.

but using emplace_back() may cause error or hard crash in complex cases if not efficiently handled  whereas using push_back() you can avoid complexities. But push back creates extra copy while constructing a class or struct.

## REMOVE ITEM(S):

remove the last element: pop_back()

remove all elements of vector: clear()

to remove a specific element erase(iterator)

to remove a area erase(start_iterator, end_iterator)

## OTHER IMPORTANT FUNCTION:

empty();  checks weather the vector is empty or not

size(): get the size of vector

## VECTOR SIZE()

size()

## SWAP

myvec.swap(another_vector)

problems to solve:

https://www.hackerrank.com/challenges/vector-sort/problem

https://www.hackerrank.com/challenges/vector-erase/problem