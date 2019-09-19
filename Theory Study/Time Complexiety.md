# Time Complexity Analysis

## Single loops 

####  increment/decrement:

```c++
for (int i=0; i< n;i++){
	//code
}

for (int i=n; i> 0;i--){
	//code
}

//while loop
//do while loop 
```

**Time Complexity: **O(n)

Example: Linear Search O(n).



####   Multiplication/Division:

```c++
for (int i=0; i< n;i*=c){  //c>1
	//code
}

for (int i=n; i< 0;i/=c){ //c>1
	//code
}


//while loop
//do while loop 
```

**Time Complexity: **O(logn)

Example: Binary Search O(logn).



#### Exponentially reduce or increase:

```c++
for (int i=0; i< n;i=pow(i,(1/a)){  //c>1
	//code
}//square, cube, ... etc

for (int i=n; i< 0;i=pow(i,(1/a)){ //c>1
	//code
}//squareroot, cuberoot, ... etc.


//while loop
//do while loop 
```

**Time Complexity: **O(loglogn)

Example: Hopcroft-Fortune closest pair of points algorithm: O(loglogn).



## Nested Loops:

```c++
loop 1{		//Time Complexity: O(n)
	loop 2(m){ 	//Time Complexity: O(n)
		loop 3{	//Time Complexity: O(n)
			...{
				...
			}
		}
	}
}
```

**Time Complexity:** O(n\*m\*o\*...)

***if m=n, o=n, .... and the number of nested loop is c then O(n<sup>c</sup>).***