class A(object):
    def dothis(self):
        print("Doing in A")
        
class B(A):
    pass
        
class C(object):
    def dothis(self):
        print("Doing in C")
        
class D(B,C):
    pass

d=D()
d.dothis()
print(D.mro())


class A1(object):
    def dothis(self):
        print("Doing in A1")
        
class B1(A1):
    pass
        
class C1(A1):
    def dothis(self):
        print("Doing in C1")
        
class D1(B1,C1):
    pass

d1=D1()
d1.dothis()
print(D1.mro())

"""
❯ python -u "/Users/mksriram/Documents/03_GIT/leetcode_fulltimes/oops/multiple_inheritance.py"
Doing in A
[<class '__main__.D'>, <class '__main__.B'>, <class '__main__.A'>, <class '__main__.C'>, <type 'object'>]
Doing in C1
[<class '__main__.D1'>, <class '__main__.B1'>, <class '__main__.C1'>, <class '__main__.A1'>, <type 'object'>]
"""

"""
In conclusion −

Any class can inherit from multiple classes

Python normally uses a “depth-first” order when searching inheriting classes.

But when two classes inherit from the same class, Python eliminates the first appearances of that class from the mro.
"""

"""
We generally use class method to create factory methods. Factory methods return class object (similar to a constructor) for different use cases.

We generally use static methods to create utility functions.
"""