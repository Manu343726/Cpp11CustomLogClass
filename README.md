C++11 custom log class
======================

C++11 custom Log class. Code example of a response to stackoverflow question: ["<< operator overloading in C++ for logging purposes"][2]

Requeriments:
=============

The question was marked as ***C++ C++11***, so I have tried to do things using C++11 style/APIs. 
I have compiled and debugged this implementation with Netbeans + GCC4.8.1, and works perfectly.

Source code:
============
 - **Log.h**: Log class declaration/implementation. I have writted the entire implementation in the header file to make the example more clear and readable.
 - **main.cpp**: An example of use. It implements a custom class `Foo` and shows how to make Foo work with Log class (Simply implemment the common `operator<<` for `std::ostream`). Also includes an example of logging.

License:
========

Stackoverflow code snipets are licensed under cc-wiki with attribution required. Please check  [this metastackoverflow post][1] for more info.


[1]: http://meta.stackoverflow.com/a/25957/222868
[2]: http://stackoverflow.com/questions/17595957/operator-overloading-in-c-for-logging-purposes/
