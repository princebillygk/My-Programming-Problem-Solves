# Tips for Writing clean, readable and understandable code (C++ competitive programing) 

### Draft:

Write code on a white board or a paper first. Test your algorithm with all the given inputs and some corner cases. Optimize it and remove unnecessary variables and lines. Then write the code on computer. 

### Compiler:

Use C++11 version as it is widely available.

### Order:

- **Structure order:**

   include> define> typedef> using >  global struct > global class>global variable> function declaration> main> function body.

- A class definition should start with a`public:` section, then `protected:`, then `private:`.  

### Naming Identifier: 

- A name should tell what it does.

- As short as possible. As long as necessary

- Easily memorable

  #### case :

  - my_var : Snake case | common variable
  - myFucntion: cammel case | fucntion
  - MyClass : Pascal Case | class / struct/ enum
  - MAX_INT : Macro Case | Macro constants
  - iostream : Flat case | library/ package
  - my-file: Kebab case | File names easy to write in terminal without quotation mark.

### Initialize Variable

- initialize variable when it is possible

  **Bad practice: **

  ```c++
  int i;
  i= foo();
  ```

  **Good Practice:**

  ```c++
  int i= foo();
  ```

### Casting:

- use int(x) rather than (int)x

### Structure vs class:

- use `struct` when you only need to work with a group of data.
- use `class` when you need to carry both data and methods.

### Postfix and prefix operation:

- use prefix operation for iteration inside loop is preferable `++i`.

### In-line spacing: 

-  common rules

  ```c++
  void f(bool b) 	//Space before opening brackets
  int i = 0;  	// No space before semicolon
  ```

- loops and condition spacing format

  ```c++
  if (b) {          // Spaces after keyword
  } else {          // Spaces around else
  }
  while (test) {}   // No space inside parentheses.
  for (int i = 0; i < 5; ++i) { //spaces after semecolon
  }
  switch (i) {	  
    case 1:         // No space before colon in a switch case.
    case 2: break;  // Use a space after a colon if there's code after it.
  ```

- Spaces with operators:

  ```c++
  //spaces around operators
  x = 0; 
  v = w * (x + z);
  
  //no spaces after unary operator
  x = -5;
  ++x;
  if (x && !y)
    ...
  ```

### Line spacing:

- Use some spaces to separate a group of codes which does a specific task. **Example:**

  ```c++
  //-----addition------
  for(int i=0;i<maxlen;i++){
      reverseRes[i]+=a[i]+b[i];
      if(reverseRes[i]>=10){ //if carry
          reverseRes[i]-=10;
          reverseRes[i+1]++;
      }
  }
  
  //--------reversing the result to get the accurate form----
  printf("Addition: ");
  reslen=0;
  //if the length is increased because of sum
  if(reverseRes[maxlen]!=0){
      res[0]=reverseRes[maxlen];
      reslen++;
  }//consider that extra digit in result array
  for(int i=0;i<maxlen;i++){
      res[reslen]=reverseRes[maxlen-1-i];
      reslen++;
  }
  ```



### Length of line:

- horizontal scrolling while coding and see codes is really annoying and time consuming so it is a good practice to avoid writing horizontally long lines of code. For example big if else statements can be written like this.

  ```c++
  
  if(
      year<1752||
      (year==1752 && month<9) ||
      (year==1752 && month==9 && day<=2)
  ){
      if(
          month>12||
          month<1 ||
          year<0 ||
          day>beforedaysOfMonthGen(month, year) ||
          day<1||
          (month==10 && year==1582 && (day>=4 && day<=14))
          // as this days has no  history
      )
          printf("%d/%d/%d is an invalid date.\n",month,day,year);
      else{
          strcpy(dayName, dayOfWeek[until_Sep2_1752(day,month,year)]);
          printf("%s %d, %d is a %s\n",monthName[month-1],day,year,dayName);
      }
  }
  ```

  similarly a array initialization can be written as:

  ```c++
  	char monthName[][20]={
  		"January",
  		"February",
  		"March",
  		"April",
  		"May",
  		"June",
  		"July",
    		"August",
    		"September",
    		"October",
    		"November",
    		"December"
  	};
  ```

  

### Comment:

#### comment toggle trick: 

by using this comment toggle trick we can easily comment and uncomment a big group of codes by just removing or adding one '/'.

```c++
//*
activate code
//*/

/*
deactivate code
//*/
```

#### Align your comments

```c++
int n = 5;    // fine
int m = f();  // ? (depends on f)
Foo x;        // ? (depends on Foo::Foo)
Bar y = g();  // ? (depends on g and on Bar::Bar)
```



***N>B> avoid use exception handling in programing contest***
