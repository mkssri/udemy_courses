### Important points
- To read double using scanf, we would need to do something like below:
- double a;
- scanf("a: %lf", &a);
- scanf: reads in the text from monitor until we see a space...


- 17e4 = 17*(10^4)

printf("perimeter: %.2lf\n", perimeter); // prints: 24.23
printf("perimeter: %lf\n", perimeter); // prints: 24.230000

##### Operators
Arithmetic, logical, assignment and relational operators.

*Arithmetic Operators*
- +, -, *, /, %, ++(postfix/prefix), --(postfix/prefix)
*Logical Operators*
- && - Logical AND
- || - Logical OR
- ! - Logical Not
*Assignment Operators*
- =, +=, -=, *=
#### Type of variables

- int x;
- double y;
- Bool z=1; : it is a C89 compiler Standard.
- For C99 compiler standard
- ** you just need to do #include<stdbool.h> **
- next just do: bool z=true;


❯ ./sizeof_prog
sizeof(char): 1
sizeof(short): 2
sizeof(int): 4
sizeof(long): 8
sizeof(long long): 8
sizeof(float): 4
sizeof(double): 8
sizeof(long double): 8


if we do not use break in switch/case statements next case block will follow through lol(it is like some bug or something)
murali @ arista!!!

##### preprocessor directive.

- starts w/ # symbol :)

- scanf(): if it is string or characters we wont use & near variable name.
- else we use & haha :) Good! :)

- what a weird thing :)
- in function: printf("%5d", var); -> 5 white spaces before printing the variable yay!!!
- in function: printf("%d", var); -> 1 white spaces before printing the variable yay!!!

Funny!! Yayy!! :)
##### source code
printf("\nTesting\n");
int tmp;
printf("tmp= %d\n", tmp);
tmp = 22;
printf("tmp= %2d\n", tmp);
printf("tmp= %.4d\n", tmp);
float tmp1;
printf("tmp1= %f\n", tmp1);

tmp1 = 10.14;
printf("tmp1= %.6f\n", tmp1);


##### output
Testing
tmp= 0
tmp= 22
tmp= 0022
tmp1= 0.000000
tmp1= 10.140000

#### Array
**Disadvantages**
-  size/length of array is fixed. vectors are dynamic...lol
-  only one type of data can be stored in the array lol.

```
       int arr[10] = {0,1,2,3,4,5,6,7,8,9};
       printf("arr[0] = %d\n", arr[0]);
       printf("arr[1] = %d\n", arr[1]);
       printf("arr[2] = %d\n", arr[2]);
       printf("arr[3] = %d\n", arr[3]);
       printf("arr[4] = %d\n", arr[4]);

       /*
        * curiousity.c:15:30: warning: array index 10 is past the end of the array (which contains 10 elements) [-Warray-bounds]
          printf("arr[10] = %d\n", arr[10]);
                                ^   ~~
          curiousity.c:9:5: note: array 'arr' declared here
          int arr[10] = {0,1,2,3,4,5,6,7,8,9};
          ^
          1 warning generated.
       */

     printf("arr[10] = %d\n", arr[10]);
```

###### Above source code output

**arr[10] does not exist, during code compilation it gives warning, but when you try to access and print it it will give garbage value lol! **
arr[0] = 0
arr[1] = 1
arr[2] = 2
arr[3] = 3
arr[4] = 4
arr[10] = 1752956929

** Above error is called array out of bounds errorr, it makes program unpredictable..,so be aware how **
** you are accessing the array, what index values are you using and be careful, else program behaves weirdly since we are accessing it. lol as it will take garbage values **
** compilers do not detect out of bound errors :( sad why!!!

- GCC: GNU Compiler Collection :  is a compiler system produced by the GNU Project supporting various programming languages.
- GNU stands for GNU's Not UNIX. It is a UNIX like computer operating system, but unlike UNIX, it is free software and contains no UNIX code. It is pronounced as guh-noo. Sometimes, it is also written as GNU General Public License.

int arr[10] = {0}; // rest 9 elements will be set to 0 by default, since all elements are not initialized
int arr[5] = {1,2,3,4,5}; // arr[0] is initialzed

```
     int arr1[5] = {1};

     for(int i=0; i<5; i++){
         printf("arr1[%d]:%2d\n", i, arr1[i]);
     }
```

** OUTPUT **
arr1[0]: 1
arr1[1]: 0
arr1[2]: 0
arr1[3]: 0
arr1[4]: 0

###### Designated Initializers concept

C99 has this feature and C11 made it optional! :)

float sample_data[500] = {[2]=500.5, [1]=300.0, [0]=100.0};

```
 int arr2[5] = {[3]=300};

 for(int i=0; i<5; i++){
     printf("arr2[%d]:%2d\n", i, arr2[i]);
 }
```

####### OUTPUT
arr2[0]: 0
arr2[1]: 0
arr2[2]: 0
arr2[3]:300
arr2[4]: 0

- Wow!          printf("Month:%4d has days:%4d\n", i+1, month_arr[i]);
- for above print statement following is output, wow! 4 spaces yay!!!!:-Month:   1 has days:  31

##### Multidimensional array Matrix initialization.
    int matrix1[4][5] = {
        {1,2,3,4,5},  //row1
        {1,2,3,4,5},  //row2
        {1,2,3,4,5},  //row3
        {1,2,3,4,5}   //row4
    };
    //you can also initialize as follows
    int matrix1[4][5] = {  1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5}; //but please do take care of zeros.
###### Multidimensional array Designated Initialization.
    int matrix1[4][5] = { [0][0]=1, [1][1]=2, [2][4]=100 }; //rest all elements are initialized to zero.

    ```
    int numbers[2][3][4]={
        {
            {1,2,3,4},
            {1,2,3,4},
            {1,2,3,4}
        },
        {
            {1,2,3,4},
            {1,2,3,4},
            {1,2,3,4}
        }
    };
    ```
####### Variable Length Arrays!! new concept introduced in C99
- Lol concept haha :)
int n = 10;
int arr[n]; // you can do this w/ variable length array, earlier we are unable to do this lol that's it.


####### Function

return_type of function Function(params seperated by comma){
//body
}
function names :) :-
- word1_word2_word3
- word1Word2Word3

function prototype:
- defining a function, input and output with ; at ending.

wow! printf and scanf are functions yay!! just realized.


###### Global Variable
- Haha opposite of local variable.
- Does not belong to any function.
- Global variables can be accessed by any function in the program.
- defined outside of all functions ...so scope for accessing them is everywhere!!!
- If a function has a local variable having the name same as global variable, then function uses local variable(to function) and masks global variable.
- If a function has 20 parameters then something is wrong, since mainly function is doing too much lol.
- For function taking lot of data we can use something like called struct.
- So do not use global data as much as possible, document it well haha :)
- Make sure you understand the code and document the code very very well.

** Avoid using global variables **
- In general, gloabal variables are a "bad"" things and should be avoided. - why? since many functions access this variable many functions will change it and it will cause dependency b/w functions as
many fuctions will have capability to access, change the variable :) :)
- promotes coupling b/w the functions (dependencies)
- hard to find the location of a bug in a program.
- hard to fix bug once it is found.

char x='a';
There is no data type string in C where as lot of languages have.
Anything within "" is treated by compiler as string.
Anything within '' is treated by compiler as character.

All string's are all terminated by "\0".
A special character with the code value 0 is added at the end of the string to mark where it ends.
- This character is NULL character and you can write it as \0
- A string is always terminated by null character so the length of string is greater by 1 than its original length.

char s1[20];
- meaning: s1 can have only 19 characters, last character will be null character which is \0
char word[7]={'H','e','l','l','o','\0'}; // we need to remember adding NULL
char word[7]={"Hello!\0"}; // we need to remember adding NULL
char word[]={"Hello"}; // Best way
Access characters by: word[0], word[1], etc...
you can print by: printf("word: %s", word); 
scanf(): exists when space is read by scanf function.
string "x" is not equal to char 'x'. string constant is not equal to character constant.
char a='x'; //character type
char b[]="x"; //derived type from character type it actually have 2 characters 'x', '\0';

##### constant strings : yay! readonly string.

- preprocessor directive:
  "#define TAXRATE 0.15;"
  "#define word "Hello Murali";"
- you can put define statements either in the start of the program or in library files

** C90 Added const modifier **
which makes variable as readonly. yay!!
const int a=10;

- you can use enum also for making constants.

####### String Function's

- strlen() // compute the length of the string, returned as size_t variable.
- strcpy() & strncpy() //copying one character string to another.
- strcat() & strncat() //combining two character strings together, concatenation.
- strcmp() & strncmp() //determining if two strings are equal or not.

- include header file: #include <string.h>
- strcpy(src, "Hi, i am a string"); // copies string: "Hi, i am a string" in to src buffer without knowing the size of the buffer.
- strncpy(src, "Hi, i am a string", buff_size); // copies string: "Hi, i am a string" in to src buffer with maximum number of characters to copy here it is buff_size.
- in strncpy(src, "String", 100); // 3rd argument refers size of characters to copy here it is 100 characters.

strcat(a,b) // concatenates string b at the end of string a and returns the address of first chacracter where second string has been appended.
strncat(a,b, size) // concatenates string b(of size passed as in third parameter) at the end of string a and returns the address of first chacracter where second string has been appended.

"==" we cannot use it to compare two strings for sure(since that only checks for references), so we need to use function that was made which is strcmp(it compares string contents :))
strcmp(str1, str2) returns 0 if both strings are equal, <0 if str1 is less than str2 and 0> if str1 is greater than str2

strncmp(a,b,5) // compares only first 5 characters.. :)
- use strcmp when you are comparing all the contents of the strings
- use strncmp when you are comparing prefix of two strings :)

###### string function's

- search in string:
  - strchr(): search a character in a string
  - strstr(): search for substring in a string
- Tokenizing a string:
  - strtok() // breaks the string in to tokens based on the delimeter yay!! :) similar to split() function in python.

- analysing strings:
 - islower()
 - isupper()
 - isalpha()
 - isdigit() etc.

- ohh noo!!! some info was lost as murali did not save :/

####### converting string to Numbers

- atof() : returns float by converting a string.
- atoi() :returns int by converting a string.
- atol() :returns long by converting a string.
- atoll() :returns long long by converting a string.
- strtod: string to double.
- strtof: string to float.
- strtold: string to long double.

- #TODO Murali: Lectures 77 & 78 Yay!!!!

####### Debugging
- For syntax errors try to understand always what is compiler trying to tell you!!!
- Always focus on fixing first problem detected.
- The ability to debug by a programmer is an essential skill.
- common problems: Logic Errors, Syntax Errors, Memory corruption, performance/scalability, Lack of cohesion(unity/togetherness), tight coupling(dependencies) 
- Turn a large program in to small programs: unit testing :)
- Semantic checker: Checks for Logic. not the syntax. :)

text = 'a'; // text will have a
text = "a"; // text will have pointer to a

- scanf("%d", &num); //scanf will accept second argument as a pointer :) 

/* Following is wrong */
char* ptr;
*ptr = 10; // wrong since first variable should be assigned to a memory location and then we can point to it :)

- break should be present for every case statements else it will go to the next case statement :) lol.
- don't insert ; at the end of preprocessor definition, if you do it preprocessor variable will get replaced w/ above in all lines of code.
- [Important C lecture for understanding debugging](https://www.udemy.com/course/c-programming-for-beginners-/learn/lecture/8795392#search)

##### Compiling
- When compiling use option: -Wall : This is going to turn on everything. so you would get more inputs from compiler to you during compilation :)
- compiler always helps :) :)
- compiler show two types of problesm :) - erros and warnings.

- most common compiler messages
- variable undeclared. 
- warning: implicit decleration of function '...'
- warning: control reaches end of non-void function.
- warning: confilcting time
- runtime errors: when program is running, may be due to logic errors runtime erros are caused, may be out of bound error etc.
- debug runtime errors: using call stack, core file or gdb.

- Compiling works this way first preprocessor directives are processed and object files will be created after compiling the code then it combines w/ linker/dependencies
- etc.(using option -l) and final object file is created.

- gcc -g example.c -o example
- gdb example
- list 9: display 9 lines around the line where error was thrown.
- In gdb console: you can do: print sum, print i etc...
- quit: Exit from the gdb.
- info source: That will tell you info about source file.
- bt: is nothing but stack trace.
- A core dump is generated when a program crashes or is terminated abnormally because of segementation fault.(possibly division by 0 or attempts to access past to end of an array).
- segmentation fault comes when process tries access memory of other process like write to read only memory.
- A core dump is also called memory dump, storage dump, or dump.
- Type: ulimit -c unlimited => generates core/memory dumps.
