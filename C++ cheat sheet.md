# C++ Cheat Sheet

#### Data types and their range and format specifier

-------------

| Datatype           | Format Specifier | Range                                          |
| ------------------ | ---------------- | ---------------------------------------------- |
| long double        | 8bytes           | +/- 1.7e +/- 308 (~15 digits)                  |
| float              | 4bytes           | +/- 3.4e +/- 38 (~7 digits)                    |
| double             | 8bytes           | +/- 1.7e +/- 308 (~15 digits)                  |
| char               | 1byte            | -127 to 127 or 0 to 255                        |
| unsigned char      | 1byte            | 0 to 255                                       |
| signed char        | 1byte            | -127 to 127                                    |
| int                | 4bytes           | -2147483648 to 2147483647                      |
| unsigned int       | 4bytes           | 0 to 4294967295                                |
| signed int         | 4bytes           | -2147483648 to 2147483647                      |
| short int          | 2bytes           | -32768 to 32767                                |
| unsigned short int | Range            | 0 to 65,535                                    |
| signed short int   | Range            | -32768 to 32767                                |
| long int           | 4bytesRange      | -2,147,483,648 to 2,147,483,647-32768 to 32767 |
| signed long int    | %ld              | same as long int                               |
| unsigned long int  | %lu              | 0 to 4,294,967,295                             |
| float              | 4bytes           | +/- 3.4e +/- 38 (~7 digits)                    |
| double             | 8bytes           | +/- 1.7e +/- 308 (~15 digits)                  |

#### STL library

------

##### vector: dynamic array

*header file: vector*

```
vector<data_type> variable  
```

**.begin() /.rend()** :  return starting index **.end()/rbegin() :** Return ending index  

**.size() :** returns the size of vector

**empty() : **checks if the vector is empty

***we can access it with index like variable[index]***

