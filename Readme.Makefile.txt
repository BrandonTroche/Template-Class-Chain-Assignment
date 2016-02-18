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
 - Implementation of the ostream overload for the << operator. 
 - Implementation of + overload operator
 - Implementation of [] overload operator

________________________________________________________
——————[Comments on my work and a few difficulties]——————

My difficulties in this assignment were closely related to working with the templates. I am not very familiar with the syntax for template classes and figuring out the correct way to add member functions to the class using the template took quite some time and headache. While this code looks fine to me, it does not compile for me when I use the first TestFunction as it gives me an error saying I did not give a definition to an operator that is clearly defined. 

The error - “Undefined symbols for architecture x86_64:
  "operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Chain<int> const&)", referenced from:
      TestPart1() in TestChain.o”

I am not completely sure why this is, but I had this error earlier and it was due to using the wrong syntax for creating a constructor using templates. I am not sure what could be wrong and searches for this error come inconclusive as most errors of the same type seem to be associated with xCode, and while I do have xCode I use Clang++ to compile. 

The last problem is with a small warning I get saying that a variable I have in one of my loops is not used, when it is clearly used and incremented etc…

Overall this assignment was great practice for template classes and implementation of the Big Five. 

_______________________________________________________



To compile on terminal type
  make all

To delete executables and object file type
  make clean
