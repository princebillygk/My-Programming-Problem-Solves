# C++ Cheat Sheet

#### Data types and their range and format specifier

-------------

| Datatype           | Format Specifier | Range                                          |
| ------------------ | ---------------- | ---------------------------------------------- |
| long double        | 8bytes           | +/- 1.7e +/- 308 (~15 digits)                  |
| float              | %f               | +/- 3.4e +/- 38 (~7 digits)                    |
| double             | %lf              | +/- 1.7e +/- 308 (~15 digits)                  |
| char               | %c               | -127 to 127 or 0 to 255                        |
| unsigned char      | 1byte            | 0 to 255                                       |
| signed char        | 1byte            | -127 to 127                                    |
| int                | %d               | -2147483648 to 2147483647                      |
| unsigned int       | %u               | 0 to 4294967295                                |
| signed int         | 4bytes           | -2147483648 to 2147483647                      |
| short int          | 2bytes           | -32768 to 32767                                |
| unsigned short int | Range            | 0 to 65,535                                    |
| signed short int   | Range            | -32768 to 32767                                |
| long int           | 4bytesRange      | -2,147,483,648 to 2,147,483,647-32768 to 32767 |
| signed long int    | %ld              | same as long int                               |
| unsigned long int  | %lu              | 0 to 4,294,967,295                             |
| float              | 4bytes           | +/- 3.4e +/- 38 (~7 digits)                    |
| double             | 8bytes           | +/- 1.7e +/- 308 (~15 digits)                  |



## Tricks

- Use the most efficient compiler

  ![compiler](C:\Users\princebilly\Desktop\My-Programing-Problem-Solves\_data\compiler comparison)

- Use `#include <bits/stdc++.h>`header file

- PI values

  ```c++
  const double pi=acos(-1.0);
  ```

  

- `__gcd(int,int)` returns the G.C.D. of two integers passed as parameters. 

- Using **auto** with STL containers iterators.This will work for any type of STL containers.

    ```c++
    //version 1
    for(auto it =v.begin();it!=v.end();it++){....}

    //version 2 easiser
    vector<int> v;
    v = {1, 2, 5, 2};
    for (auto i: v)
        cout << i << ' ';
    cout << '\n';
    // prints "1 2 5 2"
    ```

- Use {} to take values in stl container

  ```c++
  //******************pair***************//
  pair<int, int> p;
  // ...
  p = {3, 4};
  //even a more complex pair
  pair<int, pair<char, long long> > p;
  // ...
  p = {3, {'a', 8ll}};
  
  //******************vector***************//
  vector<int> v;
  v = {1, 2, 5, 2};
  for (auto i: v)
      cout << i << ' ';
  cout << '\n';
  // prints "1 2 5 2"
  
  //.....This works with any kinds of container.....
  ```

  

- Check even and odd

```c++
if (num & 1) cout << "it’s odd"; else cout << "it’s even";
```

- Using emplace_back instead of push_back returns the reference of objects

- Multiply result with 2

```c++
result = result << 1; 
```

- Divide result by 2

```c++
result = result >> 1; 
```

- swap a and b

```c++
a ^= b; b ^= a; a ^= b;
```

- Use this uncommon builtin functions

  ```c++
  int x=*min_element(a,a+n);
  //Finds minimum in array a of size n
   
  int c=count(v.begin(),v.end(),3);
  //Counts number of 3 in vector v
   
  int g=__gcd(a,b);
  //Calculates gcd of two numbers a,b
   
  int c=__builtin_popcount(x);
  //Calculates number of one's in binary representation of x
  //Note - use __builtin_popcountll when x is long long
  ```

