# Singleton Design Pattern(C++)
###  1. Problem that the pattern solves
In an application, we need a unique instance of a specific class.
For example, in a mobile app, the OS wants only 1 instance of messaging class.
So, when a constructor of the class is called, a new instance is created only if no instance exists

### 2. Class diagram
![img.png](img.png)
source - PPT of CS478 by Prof. Ugo Buy

### 3. Explanation
This design pattern uses:
- A private static member variable (X) to hold the unique instance
- The constructor is private so clients cannot access to create any new instance
- A public static member function - getInstance() - creates an instance if none exists
else just passes the instance held by X

### 4. CPP Specific Implementation details:
THINGS TO KEEP IN MIND IN C++ IMPLEMENTATION 
1.  The method getInstance() has to return a reference (singleton&) : Else copy constructor will be invoked
2. The identifier in the MAIN function (a,b) has to be a reference (Singleton &) and not object identifier (Singleton) : Else operator= will be invoked
3. For safety, delete the copy constructor and assignment operator in the header file
