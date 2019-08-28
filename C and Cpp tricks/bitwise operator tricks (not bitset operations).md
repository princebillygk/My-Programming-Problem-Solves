# Bitwise tricks (for non-Bitset Operation)

## | Operator

#### Covert Upper Case to lower Case letter

```c++
	 char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	 int n= strlen(A);
	 for(int i=0;i<n;i++){
	 	if(A[i]>='A' && A[i]<='Z'){
	 		A[i] |= ' '; //A[i]=A[i]  | ' ';
	 	}
	 }
	 printf("%s\n",A);
```

**Output**

```
abcdefghijklmnopqrstuvwxyz
```

**Explanation:**

```
 ‘A’ = b01000001
|‘ ‘ = b00100000
----------------
 	   b01100001 =‘a’  
```



## & Operator

#### Covert Lower Case to Upper Case Letter

```c++
	 char A[] = "abcdefghijklmnopqrstuvwxyz";
	 int n= strlen(A);
	 for(int i=0;i<n;i++){
	 	if(A[i]>='a' && A[i]<='z'){
	 		A[i] &= '_';
	 	}
	 }
	 printf("%s\n",A);
```

**Output**

```
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

Explanation:**

```
 ‘a’ = b01100001
&‘_‘ = b11011111
----------------
	   b01000001 =‘A’  
```



#### Determine if a Integer is odd or even

```C++
int n=100;
printf("%s\n", n&1?"odd":"even");
n=33;
printf("%s\n", n&1?"odd":"even");
```

**Output:** 

```
even
odd
```

  **Explanation:**  (n&1) returns 1 if n is odd and returns 0 when it is even. 

If n is odd the last bit of n in binary representation will be always 1. that is why when we & it with 1 the results become 1. If n is even the last bit of n in binary representation will be always 0. that is why when we & it with 1 the results become 0.

 (eg. (odd) xxxxx1&1=1,  (even) xxxxx0&1=0)



# ^ operator

#### Toggle Case

```c++
	 char A[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	 int n= strlen(A);
	 for(int i=0;i<n;i++){
	 	A[i] ^= ' ';
	 }
	 printf("%s\n",A);
```

**Output**

```
aBcDeFgHiJkLmNoPqRsTuVwXyZ
```

Explanation:**

```
 ‘A’ = b01000001
^‘ ‘ = b00100000
----------------
 	   b01100001 =‘a’  

 ‘a’ = b01100001
^‘ ‘ = b00100000
----------------
	   b01000001 =‘A’  

```





#### Swap two number without temp

```c++
int x=12, y=20;
printf("%d %d\n",x, y);
x^=y;	//x=x^y
y^=x;   //y=x^y
x^=y;	//x=x^y
printf("%d %d\n",x, y);
```

**Output:**

```
12 20
20 12
```

**Explanation: **

```
x=12 y=20
now for x=x^y
 12 = b01100
^20 = b10100
-------------
  x = b11000

now for y=x^y
  x = b11000
^20 = b10100
-------------
  y = b01100 =12 (swapped)

now for y=x^y
  x = b11000
 ^y = b01100
-------------
  x = b10100 =20 (swapped)
```

#### 

## << operator

#### Multiply by 2<sup>n</sup>

```c++
int n=3;
int b = 4<<n;
printf("%d\n",b);
```

**Output:** 32  

**Explanation:** 4x2<sup>3</sup> =32

```
4 in binary 100
100<<3 (right shift 3 times) will be 100000
100000 is equivalent to 32
```

#### Set value 2<sup>n</sup>

```c++
int n=3;
int b = 1<<n;
printf("%d\n",b);
```

**Output:** 8 

**Explanation:** 1*2<sup>3</sup> =8



# >\> operator

####  Divide by 2<sup>n</sup>

```c++
int n=3;
int b = 32>>n;
printf("%d\n",b);
```

**Output:** 8  

**Explanation:** ![\frac{32}{2^{^{3}}}= 4](http://latex.codecogs.com/gif.latex?%5Cfrac%7B32%7D%7B2%5E%7B%5E%7B3%7D%7D%7D%3D%204)

```
32 in binary 100000
100000>>3 (left shift 3 times) will be 000100
100 is equivalent to 4
```



#### 