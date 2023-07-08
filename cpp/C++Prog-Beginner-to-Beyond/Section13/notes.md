- Following are equivalent:
(*frank_accnt).balance
    and
frank_accnt->balance (it called as member of pointer operator)

By default if nothing is specified all class members are private.

- Include guard helps compiler to avoid errors by allowing to include header files
only once not twice...

- check compiler documentations.
"#pragma once"   is same as  #ifndef  _ACCOUNT_H_  (which is nothing but include guard) 

- #include <iostream> - includes system library funtions (compiler knows where these files are located).
- #include  "Account.h" : files which are local to the project to be included

- When multiple source files are there command to compile is:
g++ -std=c++11 -o app main.cpp Account.cpp

- ~ => tilde
- only one destructor per class is possible, it will have no return type & cannot be 
overloaded also.
