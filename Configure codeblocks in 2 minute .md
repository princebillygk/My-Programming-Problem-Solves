# Configure Code::blocks 16.01 for programing contest



### Compiler settings: Settings > Compiler >

- Set Compiler to support c++ 14

- ***(The ACM ICPC official website [Programming Environment ](https://icpc.baylor.edu/worldfinals/programming-environment) tells you exactly what the code will be excepted in world final ; notably, it's with the `-gnu++14` flag.)***

  Compiler flags >

  Check C++ 14 support
  
  
  
  <img src="https://i.ibb.co/FJbVrhK/image.png" alt="image" border="0">



### Editor Settings: Settings > Editor > 	 

#### 	General Settings>Editor Settings> 

- Change font to Fira Mono (Probably the best font for programing) and size 12.

   ***(Increase code readability)***

  font > choose

<img src="https://i.ibb.co/LkC5jMQ/image.png" alt="image" border="0">

- Show indentation guide

  indent option > check (Show indentation guide) 

  ***(By default the indentation guide is disabled in codeblocks. Having indention guide increase code readability)***

  <img src="https://i.ibb.co/8YhT6k3/image.png" alt="image" border="0">

- Enable multiple selection and edit multiple selection together 

  ***(This is a very efficient feature for quick editing)***

  <img src="https://i.ibb.co/rdYkdrT/image.png" alt="image" border="0">

  ​	use ctrl key and mouse to multi select and edit like this image:

  <img src="https://i.ibb.co/Qrx2Nkq/image.png" alt="image" border="0">

  

  #### General Settings>Other editor Settings> 

- Show white spaces> Select "Only after Indent"

  ***(By showing white spaces we can detect unnecessary white spaces in code and check the output.txt file for presentation error efficiently)***

  <img src="https://i.ibb.co/jwLXFBB/image.png" alt="image" border="0">

  

  #### Margin and Caret>

- decrease the width of line number column to see code more widely. check "Dynamic Settings"

  <img src="https://i.ibb.co/1JyzB7F/image.png" alt="image" border="0"> 

- Highlight long lines to avoid coding long lines

  <img src="https://i.ibb.co/Xy8GX10/image.png" alt="image" border="0">

  This settings highlight lines  if exceed 80 characters example: 

  <img src="https://i.ibb.co/2611dGZ/image.png" alt="image" border="0">

  

  #### Source formatter >

- I always prefer java style bracketing 

  <img src="https://i.ibb.co/Vx8g9tB/image.png" alt="image" border="0">



## Organize programing window in code::blocks before start coding

- view> perspective> code::blocks minimal 

  ***hide unnecessary window in codeblocks***

  > **Note:** press F2 to toggle build message and F9 to compile

- Always keep open this three files and organize them in one view (use mouse to drag and organize the window)

  1. "<your code name>.cpp"

  2. "output.txt" (in the same directory)

  3. "input.txt" (in the same directory)

     The window will look like this:

     <img src="https://i.ibb.co/WVXNTpZ/image.png" alt="image" border="0">

  

  Use this code after ```int main {``` to communicate with the input and output file.

  ```c++
  	//*/
  	freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
  	//*/
  ```

N>B>** don't forget to comment this code before submitting **

