- Inheritance:
  acquiring the features of existing design in to the new design, so that way we can re use
  and dont need to redo everything from scratch.

  class Rectangle
  {
   int length
   int breadth
  }

  // inherit from rectangle
  class Cuboid : Rectangle
  {

  }

  In this way we can achieve re-usability of the code.

- This is concept of inheritance: that means it is a procedure for borrowing existing features of a class
  in to the new class.

# lecture 190: isA and hasA

class Rectangle
{

};
class Cuboid : public Rectangle
{ // class Cuboid is inheriting from rectangle
  // so, we can say CUBOID isA RECTANGLE
};
class Table
{
    // Table class is having an object of Rectangle class
    // so we can say Table class hasA rectangle
    Rectangle top;
};

- there are 2 ways a class can be used
    - a class can be derived, meaning we can write child classes inheriting from parent.(isA relation)
    - or object of that class can be used. (hasA relation)
- a class can have 3 types of members
    - private
    - protected
    - public
- in above what is accessible in derived, current class, or class having the object of a class ???

# lecture 191. Access Specifiers
- public, private, protected

# lecture 193. Types of inheritance

- Simple or Single inheritance
|===|        |===|
| A | <----- | B |
|===|        |===|

- Hierarchial inheritance
             |===|
             | C |
         ----|===|
         |   
|===| <--|   |===|
| A | <----- | B |
|===| <--|   |===|
         |
         ----|===|
             | D |
             |===|

- Multilevel inheritance
|===|        |===|      |===| 
| A | <----- | B | <----| C |
|===|        |===|      |===|

- Multiple inheritance (it is only possible in c++, java does not allow this)
             |===|
             | C |
         ----|===|
         |   
|===| <--|   |===|
| A | <----- | B |
|===|        |===|
         
- Hirarcheal inheritance
             |===|
             | C | <----|
         ----|===|      |----|===|
         |                   | D |
|===| <--|   |===|      |----|===|
| A | <----- | B | <----|
|===|        |===|

 Here class D is getting features of A via B & C
 So, it is called multipath inheritance
 So, when you CALL a function in D(which is present in A), there will be two copies
 one is coming from C and other is coming from B, so to remove this ambiguity 
 we have a concept called VIRTUAL BASE CLASS

- In order to remove ambiguity, we can do following for above example
class A
{
  --
  --
};
class B : virtual public A
{
  --
  --
};
class C : virtual public A
{
  --
  --
};
class D : public B,public C
{
  --
  --
};
 through above we can remove ambiguity.
