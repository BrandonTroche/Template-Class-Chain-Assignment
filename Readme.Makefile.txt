By: Brandon Troche
For: Homework 1, Chain Class

_______________________________________________________
—————————————————[What was completed]—————————————————

I have completed the following steps of the assignment:
 - Implementation of the Big Five.
	- Copy Constructor
	- Copy Assignment Operator
	- Move Constructor
	- Move Assignment Operator
	- Destructor
 - Size() is completed
 - ReadChain() is completed

————————————[There is some trouble with]————————————

 - Implementation of the ostream overload for the << operator. 
 - Implementation of + overload operator
 - Implementation of [] overload operator

________________________________________________________
——————[Comments on my work and a few difficulties]——————

My difficulties in this assignment were closely related to working with the templates. I am not very familiar with the syntax for template classes and figuring out the correct way to add member functions to the class using the template took quite some time and headache. 

########********————[Errors]————********########
*** My code compiles when the TestPart2() function is commented out. It however gives me errors when the code is not commented out. Errors I did not have time to fix that seem to be trouble with my overloaded functions and some type definition issues with the templates that are used in those overloads. ***

*** The ‘<<‘ overload is giving me issues. It seems to output just fine however it outputs infinitely many 0’s until it hits a segmentation fault and I can’t seem to figure out why. ***

*** The ‘+’ operator also does seem to do what I need it to do and the ‘[]’ operator does not have any exceptions or throws as I did not have time to implement this and also was not taught the use of such things in 235, and I understand I must go back and study them.***

—————————————————[Overall]———————————————————————

Overall this assignment was great practice for template classes and implementation of the Big Five. My overloads seemed to be where the code crashed down on me, but the big five implementations all work so far as I can tell, and the overloaded operators almost work. I’m at least proud I was able to get it work as far as I could, but I need to do better for the next assignment. 

_______________________________________________________



To compile on terminal type
  make all

To delete executables and object file type
  make clean
