# scanf Tricks:

#### ignore inputs:

By using astrick sign between % and format specifier we can ignore that input

```c++
int b;
while(scanf("%*s %*d %d",&b)!=EOF)
    printf("%d\n",b );
```

##### Input:

```
google 0 29
amazon 1 230
microsoft 2 234
facebook 3 323
apple 4 333
airnub 5 353
uber 6 345
```

##### Output:

```
29
230
234
323
333
353
345

```





#### Take different length of inputs from a single input word

```c++

int a,b,c;
char d;
scanf("%3d",&a);
scanf("%3d %5d %c ",&b,&c,&d);
printf("a=%d\nb=%d\nc=%d\nd=%c\n",a,b,c,d);
```

##### Inputs:

```
12345678910d
```

#####  Output

```
a=123
b=456
c=78910
d=d
```





#### Take a string input until a specific character(s) comes

**[^XYZ...] takes input until X or Y or Z  or ... comes**

```c++
char name[1000];
char n;
scanf("%[^\n]",name); //take inputs including white spaces until '\n' comes
//scanf("%[^ABC]",name);  //takes input A or B or C comes
printf("%s\n",name );

```

***NB> this trick can be  used to take input a line with spaces*** 

#### Input

```
prince billy GK

```

##### Ouput

```
prince billy GK
```



#### Take string input until it is not outside the given character set

```c++
char n[1000];
scanf("%[ABC]",n);;//takes input until either the character is A or B or C
printf("%s\n",n); 
```
##### Input

```
ABAAABBCDABAA
```

##### Ouput

```
ABAAABBC
```





### Some Special Example of for more weird inputs

#### Time input

```c++
int a, b, c;
char d[2];
scanf("%d:%d:%d %s",&a, &b, &c, d);
printf("Hour %d min %d sec %d moment %s\n", a,b,c,d); 
```

##### Input

```
12:09:23 pm
```

##### Output

```
Hour 12 min 9 sec 23 moment pm

```



#### Date Input

```c++
int a, b, c;
scanf("%d/%d/%d",&a, &b, &c);
printf("Day: %6d\nMonth: %4d\nYear: %5d\n",a,b,c );
```

##### Input

```
12/2/2012
```

##### Ouptut:

```
Day:     12
Month:    2
Year:  2012
```



#### Customized input:

```c++
int a, b, c;
scanf("teacher%dstudent%dclass%d",&a, &b, &c);
printf("Teacher: %3d\nStudent: %2d\nClass: %5d\n",a,b,c );
```

##### Input:

```
teacher2student100class3
```

##### Output:

```
Teacher:   2
Student: 100
Class:     3

```

