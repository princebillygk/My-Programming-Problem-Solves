# A note on string

Starting from constructor to member functions every thing in string class is same as vector except the template feature and emplace_back(), emplace() member function. It has some extra features for string operations . But  we can use vector for any data types: ```vector< typename >var``` but in string we don't have this feature. it will always store char values. In fact we can do any operation with string that we can do in vector except for the template feature.

Now I will dig into those **extra features:**

***Remember we are talking about the extra features only that is not in vector but in string***

## Assign and construct

Construct function extra feature

```c++
string str(another_str);	
string str(another_str, another_str_start_position, another_str_len = last_index);
string str(char_pointer, len);
string str(fill_len, char);
string str("string in qoutation");
string str(char);
string str({char1, char2, char3, ...}); //intializer list
```



now look at the extra features for assigning operation extra features:

```c++
str.assign (another_str);	
str.assign (another_str, another_str_start_position, anther_str_len);
str.assign (char_pointer);
str.assign (char_pointer, char_pointer_len);
str.assign (fill_len, char);	
```

equal operator extra features:

```c++
str = another string;
str = char_pointer;
str = "string in qoutation"
str = char
str = {char1, char2, char3, ...}
```



## Get the length of string

To get the length of string we can use .size() member function (which is also available in vector).

```c++
str.size();
```

But the function name 'size' does not fit so well for string. So the function .size() have an alias .length(). Both .length() and .size() function have the same ability. 

```c++
str.length();
```

It is totally your choice what name you will prefer to use.

## Add operation:

using **+** operator

```c++
+= another string;
+= char_pointer;
+= "string in qoutation"
+= char
+= {char1, char2, char3, ...}

str2 = str + another string;
str2 = str + char_pointer;
str2 = str + "string in qoutation"
str2 = str + char
str2 = str + {char1, char2, char3, ...}
```

using **append()** member function:

```c++
str.append(another_str);
str.append(another_str, start_position, length);
str.append(char_pointer);
str.append(char_pointer, length); //str_char(char_pointer+start_after, length)
str.append(size, char);
str.append({char1, char2, char3,... );
```



## **Return a char_pointer**

```c++
str.c_str(); //convert a string to char pointer
```

## Copy form char_pointer

```c++
copy (char* s, size_t len, size_t pos = 0) const;
```



## **Find a string(first/last occurrence) and return position**

find the first occurrence using **find()**  and for last occurrence  **rfind()**:

```c++
str.find(str, pos = 0); //the find function will keep searching from 0 to pos index 
str.find(char_pointer, pos = 0) 
str.find(char, pos = 0)
str.find(char_pointer, pos, length);
//same for rfind()
str.rfind(str, pos = last_index); 
str.rfind(char_pointer, pos = last_index)
str.rfind(char, pos = last_index)
str.rfind(char_pointer, pos, length);
```

## **Find the character(first/last occurrence) position that include in the given set** and return position

to find the first occurrence **find_first_of()** and for last occurrence **find_last_of()**

```c++
str.find_first_of(str, pos = 0); //the find function will keep searching from 0 to pos index 
str.find_first_of(char_pointer, pos = 0) 
str.find_first_of(char, pos = 0)
str.find_first_of(char_pointer, pos, length); //position mandatory
//same for find_last_of
str.find_last_of(str, pos = last_index); 
str.find_last_of(char_pointer, pos = last_index)
str.find_last_of(char, pos = last_index)
str.find_last_of(char_pointer, pos, length);
```

## **Return a substring**	

```c++
str2 = str.substr(start_pos = 0, length = last_index);
```

## Insert

```c++
str.insert (insert_position, another_str);
str.insert (insert_position, another_str, another_str_position, another_str_len);
str.insert (insert_position, another_str);
str.insert (insert_position, another_str, another_str_len);
str.insert (insert_position,   fill_len, char c);
```



## Erase

erase operations extra features:

```c++
erase(start_position = 0, len = npos);
```



## **Replace**

it is a remove and then insert operation

```c++
str.replace(start_position, len, another_string);
str.replace(start_iterator, end_iterator, another_string);
str.replace(start_position, len, another_string, another_string_start_position, another_string_length);
str.replace(start_position, len, char_pointer);
str.replace(start_iterator, end_iterator, char_pointer);
str.replace(start_position, len, char_pointer, char_pointer_length);
str.replace(start_iterator, end_iterator, char_pointer, char_pointer_length);
str.replace(start_position, len, fill_len, char);
str.replcae(start_iterator, end_iterator, len, fill_len, char);
str.replace(start_iterator, end_iterator, another_start_iterator, another_end_iterator);
str.replace(start_iterator, end_iterator, {char1, char2, ...});
```

## Compare

returns 0 if they are equal | returns <0 if it is lower | returns >0 it it is higher 

```
str.compare(another_str);
str.compare(start_position, len, another_str);
str.compare(start_position, len, another_str, another_str_start_position, another_str_len);
str.compare(char_pointer);
str.compare(start_position, len, char_pointer);
str.compare(start_position, len, char_pointer, char_pointer_len);
```

also we can use any relational == !- <= >= < > operator to compare between 

```
two strings 
one string and one char_pointer
one char pointer and one string
```

## Convert a String to other Data types

syntax

```c++
sto☐(str, &nexword_position)
```

functions: 

```
stod //double
stof //flot
stoi //interger
stol //long
stol //long double
stoll //long long
stoul //unsigned long
stoull //unsigned long long
```

