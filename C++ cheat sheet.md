# C++ Cheat Sheet

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

