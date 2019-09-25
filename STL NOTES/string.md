# A note on string

Starting from constructor to member functions every thing in string class is same as vector except the template feature and emplace_back(), emplace() member function. It has some extra features for string operations . But  we can use vector for any data types: ```vector< typename >var``` but in string we don't have this feature. it will always store char values. In fact we can do any operation with string that we can do in vector except for the template feature.

Now I will dig into those **extra features:**

***Remember I am talking about the extra features only that is not in vector but in string***

*default argument are noted with "parameter = value"*

## Assign and construct

Construct function extra feature

```c++
string str(another_str);
string str(another_str, another_str_start_position = 0, another_str_len = last_index);

string str(char_pointer);
string str(char_pointer, char_pointer_start_position, char_pointer_len);
string str(char_pointer, len);

string str(fill_len, char);

string str("string in qoutation");
string str({char1, char2, char3, ...}); //intializer list
```



now look at the extra features for assigning operation extra features:

```c++
str.assign (another_str);	
str.assign (another_str, another_str_start_position, anther_str_len);

str.assign (char_pointer);
str.assign (char_pointer, char_pointer_start_position, char_pointer_len);
str.assign (char_pointer, char_pointer_len);

str.assign (fill_len, char);

str.assign ("string in qoutation");
str.assign ({char1, char2, char3, ...});
```

equal operator extra features:

```c++
str = another string;
str = char_pointer;
str = "string in qoutation"
str = char //this feature is only available with '=' sign
str = {char1, char2, char3, ...}
```



## Get the length of string

To get the length of string we can use .size() member function (which is also available in vector).

```c++
jstr.size();
```

But the function name 'size' does not fit so well for string. So the function .size() have an alias .length(). Both .length() and .size() function have the same ability. 

```c++
str.length();
```

It is totally your choice what name you will prefer to use.

## Add operation:

using **+** operator

```c++
//+= overload
str += another string;
str += char_pointer;
str += "string in qoutation"
str += char
str += {char1, char2, char3, ...}
// var = var1 + var2;
str2 = str + another string;
str2 = str + char_pointer; //char_pointer + str
str2 = str + "string in qoutation"
str2 = str + char
```

using **append()** member function:

```c++
str.append(another_str);
str.append(another_str, start_position, length = last_index);

str.append(char_pointer);
str.append(char_pointer, start_position, length);
str.append(char_pointer, length); //str_char(char_pointer+start_after, length)

str.append(fill_len, char);

str.assign ("string in qoutation");
str.append({char1, char2, char3,... });
```



## Insert 

extra features:

```c++
str.insert (insert_position, another_str);
str.insert (insert_position, another_str, another_str_start_position, another_str_len = last_index);

str.insert (insert_position, char_pointer);
str.insert (insert_position, char_pointer, char_pointer_start_position, char_pointer_len);
str.insert (insert_position, char_pointer, char_pointer_len);

str.insert (insert_position, fill_len, char c);

str.insert (insert_position, "string in qoutation");
str.insert (insert_position, {char1, char2, char3,... });
```



## Erase

erase operations extra features:

```c++
erase(start_position = 0, len = npos);
```



## **Replace**

it is a remove and then insert operation: 1

```c++
str.replace(start_position, len, another_string);
str.replace(start_position, len, another_string, another_string_start_position, another_string_length = last_index);

str.replace(start_position, len, char_pointer);
str.replace(start_position, len, another_string, another_string_start_position, another_string_length);
str.replace(start_position, len, char_pointer, char_pointer_length);

str.replace(start_position, len, fill_len, char);

str.replace(start_position, len, "string in qoutation");
str.replace(start_position, len, {char1, char2, ...});
```

using iterator:

```c++
str.replace(start_iterator, end_iterator, another_string);

str.replace(start_iterator, end_iterator, char_pointer);
str.replace(start_iterator, end_iterator, char_pointer, char_pointer_length);

str.replcae(start_iterator, end_iterator, len, fill_len, char);

str.replace(start_iterator, end_iterator, "string in qoutation");
str.replace(start_iterator, end_iterator, {char1, char2, ...});
```




## Compare

returns 0 if they are equal | returns <0 if it is lower | returns >0 it is higher 

```
str.compare(another_str);
str.compare(start_position, len, another_str);
str.compare(start_position, len, another_str, another_str_start_position, another_str_len);

str.compare(char_pointer);
str.compare(start_position, len, char_pointer);
str.compare(start_position, len, char_pointer, char_pointer_start_position, char_pointer_len);
str.compare(start_position, len, char_pointer, char_pointer_len);

str.compare("string in qoute");
str.compare(start_position, len, "string in qoute");

str.compare({char1, char2, ...});
str.compare(start_position, len, {char1, char2, ...});
```

also we can use any relational == !- <= >= < > operator to compare between 

```
two strings 
one string and one char_pointer
one char pointer and one string
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

## **Find the character(first/last occurrence) position that includes in the given set** and return position

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

## Return a char_pointer

```
str.c_str(); //convert a string to char pointer
```

## Copy to char_pointer from string

```c++
//type 1:
str.copy (char_pointer, len, position = 0);  //returns length
											 //char_pointer[len] = '\0';
//type 2: works like replace in char_pointer
len<-str.copy (char_pointer+char_pointer_start, len , position = 0); //returns len
									  //if(len > prevlen) char_pointer[len] = '\0';
```

## Convert a String to other Data types

syntax

```c++
sto☐(str, &nexword_position);
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

