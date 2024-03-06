## CPP_MODULES

Each module comprises several exercises designed to enhance understanding of the C++ language and master various techniques to accomplish your objectives.

---

<details>
<summary>C++ - Module 00
	
Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic
stuff</summary>

<details>
<summary>Exercise 00: Megaphone</summary>

Just to make sure that everybody is awake, write a program that behaves as follows:

	./megaphone "shhhhh... I think the students are asleep..."
###### SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
###### DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
	./megaphone
###### * LOUD AND UNBEARABLE FEEDBACK NOISE *
###### $>
</details>

===============================================

<details>
<summary>Exercise 01: My Awesome PhoneBook</summary>

Get ready for a journey back to the 80s with this programming exercise. The task iwas to create a simple phonebook application reminiscent of the technology of yesteryears.

 Two classes were implemented:
  
- PhoneBook:
  Stores up to 8 contacts without dynamic allocation.
  Replaces the oldest contact if the user attempts to add a 9th.
- Contact:
  Represents a phonebook entry.

Upon program start, users are presented with three commands: ADD, SEARCH, and EXIT.

- ADD: Saves a new contact.
- SEARCH: Displays a contact by index.
- EXIT: Quits the program.

This exercise offers a nostalgic dive into retro technology, blending classic programming with the charm of the 80s.
</details>

</details>

---

<details>
<summary>C++ - Module 01
	
Memory allocation, pointers to members,
references, switch statement</summary>

<details>
<summary>Exercise 00: BraiiiiiiinnnzzzZ</summary>

The task was to implement a Zombie class, with a private string attribute name. Additionally, a member function announce() was added to the Zombie class. Zombies announce themselves with the message "<name>: BraiiiiiiinnnzzzZ...". The angle brackets (< and >) were excluded from the output. For example, if a zombie is named "Foo", the announcement would be "Foo: BraiiiiiiinnnzzzZ...".

Furthermore, two functions were implemented:

  ***Zombie**** ***newZombie(std::string name)***: This function creates a zombie, assigns it a name, and returns it to be used outside the function scope.
	
  ***void randomChump(std::string name)***: This function creates a zombie, assigns it a name, and the zombie announces itself.

The main objective of the exercise was to determine the optimal memory allocation method (stack or heap) for creating zombies. It was crucial to consider when it's better to allocate zombies on the stack or heap, taking into account factors such as memory management and resource usage.

Lastly, it was emphasized that zombies must be destroyed when they are no longer needed. The destructor was required to print a message containing the name of the zombie for debugging purposes.
</details>

===============================================

<details>
<summary>Exercise 01: Moar brainz!</summary>

The task was to create a horde of Zombies by implementing the zombieHorde() function in the appropriate file. This function was required to allocate N Zombie objects in a single allocation and initialize each zombie with the name passed as a parameter. The function had to return a pointer to the first zombie.

Furthermore, it was necessary to implement custom tests to ensure the zombieHorde() function worked correctly. Each zombie had to announce itself by calling the announce() function. It was also crucial to delete all the zombies and check for memory leaks to ensure proper memory management.

Overall, the objective was to create an efficient and effective method for generating a horde of Zombies while maintaining memory integrity and preventing memory leaks.

</details>

===============================================

<details>
<summary>Exercise 02: HI THIS IS BRAIN</summary>

The task was to write a program containing:

- A string variable initialized to "HI THIS IS BRAIN".
- stringPTR: A pointer to the string.
- stringREF: A reference to the string.

The program was required to print:

-	The memory address of the string variable.
- The memory address held by stringPTR.
- The memory address held by stringREF.

Following this, the program had to print:

- The value of the string variable.
- The value pointed to by stringPTR.
- The value pointed to by stringREF.

The goal of this exercise was to demystify references, which might seem completely new. Despite some syntactical differences, references are another form of address manipulation, similar to what is already done with pointers.

</details>

===============================================

<details>
<summary>Exercise 03: Unnecessary violence</summary>
The task was to implement a Weapon class with the following characteristics:

- A private attribute type, which is a string.
- A getType() member function that returns a const reference to type.
- A setType() member function that sets type using the new one passed as a parameter.

Subsequently, two classes were created: HumanA and HumanB. Both classes have a Weapon and a name. Additionally, they both have a member function attack() that displays (without the angle brackets):

***<name> attacks with their <weapon type>***

While HumanA and HumanB share many similarities, two key differences were noted:

- HumanA takes the Weapon in its constructor, ensuring that it will always be armed.
- HumanB may not always have a Weapon, unlike HumanA.
</details>

===============================================

<details>
<summary>Exercise 04: Sed is for losers</summary>
The task was to create a program that takes three parameters in the following order: a filename, and two strings, s1 and s2. The program was required to open the file <filename> and copy its content into a new file named <filename>.replace, replacing every occurrence of s1 with s2.

It was specified that the use of C file manipulation functions was forbidden, and any usage would be considered cheating. However, all member functions of the std::string class were allowed, except replace, and were to be used wisely.

Furthermore, the program was expected to handle unexpected inputs and errors. It was essential to create and include custom tests to ensure the program worked as expected, covering various scenarios and edge cases.
</details>

===============================================

<details>
<summary>Exercise 05: Harl 2.0</summary>
The task was to automate Harl, a character known for making comments classified by levels: DEBUG, INFO, WARNING, and ERROR.

- DEBUG level: Debug messages contain contextual information and are used for problem diagnosis.
- INFO level: These messages contain extensive information and are helpful for tracing program execution in a production environment.
- WARNING level: Warning messages indicate a potential issue in the system but can be handled or ignored.
- ERROR level: These messages indicate an unrecoverable error that requires manual intervention.

To automate Harl, a Harl class was required, containing private member functions for each level: debug(), info(), warning(), and error(). Additionally, a public member function complain(std::string level) was needed to call the appropriate member function based on the level passed as a parameter.

The exercise aimed to utilize pointers to member functions, avoiding a forest of if/else if/else statements. Harl was expected to complain without hesitation. Custom tests were to be created to demonstrate Harl's complaints effectively, using the provided examples or custom comments.
</details>

===============================================

<details>
<summary>Exercise 06: Harl filter</summary>
The task was to implement a system to filter what Harl says based on the log levels you want to listen to. A program was required to take a log level as a parameter and display all messages from this level and above.

For example:

	./harlFilter "WARNING"
###### [ WARNING ]
###### [I think I deserve to have some extra bacon for free.
###### [I've been coming for years whereas you started working here since last month.
###### [[ ERROR ]
###### [This is unacceptable, I want to speak to the manager now.
	./harlFilter "I am not sure how tired I am today..."
###### [ Probably complaining about insignificant problems ]
</details>
</details>
</details>

---

<details>
<summary>C++ - Module 02
	
Ad-hoc polymorphism, operator overloading
and Orthodox Canonical class form</summary>

<details>
<summary>Exercise 00: My First Class in
Orthodox Canonical Form</summary>
The task was to create a class in Orthodox Canonical Form representing a fixed-point number. The class had the following members:

- Private members:
  - An integer to store the fixed-point number value.
  - A static constant integer to store the number of fractional bits, always set to the integer literal 8.

- Public members:
  - A default constructor that initializes the fixed-point number value to 0.
  - A copy constructor.
  - A copy assignment operator overload.
  - A destructor.
  - A member function int getRawBits() const; that returns the raw value of the fixed-point number.
  - A member function void setRawBits(int const raw); that sets the raw value of the fixed-point number.

The class was required to adhere to the Orthodox Canonical Form, a set of guidelines for defining classes in C++. This included implementing common member functions like constructors, destructors, copy constructors, and copy assignment operators.
</details>

===============================================

<details>
<summary>Exercise 01: Towards a more useful
fixed-point number class</summary>
In the previous exercise, the class was enhanced to provide more functionality. The following public constructors and member functions were added:

- A constructor that takes a constant integer as a parameter, initializing the fixed-point value to the corresponding value.
- A constructor that takes a constant floating-point number as a parameter, converting it to the corresponding fixed-point value.
- A member function float toFloat() const; that converts the fixed-point value to a floating-point value.
- A member function int toInt() const; that converts the fixed-point value to an integer value.

Additionally, an overload of the insertion (<<) operator was added to the Fixed class files. This operator inserts a floating-point representation of the fixed-point number into the output stream object passed as a parameter. These enhancements aimed to make the Fixed class more versatile and useful.
</details>

===============================================

<details>
<summary>Exercise 02: Now we’re talking</summary>

In the previous exercise, the class was further extended to include overloaded operators and additional member functions. The following public member functions were added:

- Overloaded comparison operators (>, <, >=, <=, ==, and !=).
- Overloaded arithmetic operators (+, -, *, and /).
- Overloaded increment and decrement operators (pre-increment, post-increment, pre-decrement, and post-decrement) to increase or decrease the fixed-point value by the smallest representable ϵ such that 1 + ϵ > 1.

Additionally, four static member functions were added:

- min (overloaded) that takes two references on fixed-point numbers and returns a reference to the smallest one.
- min (overloaded) that takes two references to constant fixed-point numbers and returns a reference to the smallest one.
- max (overloaded) that takes two references on fixed-point numbers and returns a reference to the greatest one.
- max (overloaded) that takes two references to constant fixed-point numbers and returns a reference to the greatest one.

These enhancements aimed to make the Fixed class even more powerful and flexible for various operations and comparisons.
</details>
</details>

---

<details>
<summary>C++ - Module 03
	
Inheritance</summary>

<details>
<summary>Exercise 00: Aaaaand... OPEN!</summary>
The task was to implement a class called ClapTrap with specific private attributes and public member functions to simulate actions such as attacking, taking damage, and being repaired.

- The ClapTrap class has the following private attributes initialized to specified values:
	- Name (passed as a parameter to the constructor)
	- Hit points (initialized to 10)
	- Energy points (initialized to 10)
	- Attack damage (initialized to 0)

Public member functions include:

- ***void attack(const std::string& target)***: Causes the ClapTrap to attack the target, reducing its hit points by the attack damage and consuming 1 energy point. Prints a message describing the attack.
- ***void takeDamage(unsigned int amount)***: Reduces the ClapTrap's hit points by the specified amount. Prints a message describing the damage taken.
- ***void beRepaired(unsigned int amount)***: Increases the ClapTrap's hit points by the specified amount. Consumes 1 energy point. Prints a message describing the repair process.

Additionally:

- Constructors and destructor must print messages to indicate their invocation.
- The ClapTrap cannot perform actions if it has no hit points or energy points left.

Custom tests should be implemented to ensure the correctness and functionality of the code.
</details>

===============================================

<details>
<summary>Exercise 01: Serena, my love!</summary>
	
The task was to create a derived class named ScavTrap, inheriting constructors and the destructor from ClapTrap. However, ScavTrap's constructors, destructor, and attack() functions were required to print different messages to reflect its individuality.

Proper construction/destruction chaining needed to be demonstrated in tests. The program was expected to start by building a ClapTrap when a ScavTrap is created, and destruction was to occur in reverse order. The reason behind this sequence was to be explained.

ScavTrap was to utilize the attributes of ClapTrap and initialize them as follows:

- Name (passed as a parameter to a constructor)
- Hit points (100), representing the health of the ClapTrap
- Energy points (50)
- Attack damage (20)

Additionally, ScavTrap was to have its own special capacity:

- ***void guardGate()***: This member function would display a message informing that ScavTrap is now in Gatekeeper mode.

More tests were to be added to the program to ensure its correctness and functionality.
</details>

===============================================

<details>
<summary>Exercise 02: Repetitive work</summary>
The task was to implement a FragTrap class that inherits from ClapTrap, similar to ScavTrap but with different construction and destruction messages. Proper construction/destruction chaining needed to be demonstrated in tests. When a FragTrap is created, the program starts by building a ClapTrap, and destruction occurs in reverse order.

FragTrap was required to have the following attributes, with different values this time:

- Name (passed as a parameter to a constructor)
- Hit points (100), representing the health of the ClapTrap
- Energy points (100)
- Attack damage (30)

Additionally, FragTrap was to have a special capacity:

- ***void highFivesGuys(void)***: This member function would display a positive high fives request on the standard output.

More tests were to be added to the program to ensure its correctness and functionality.
</details>

===============================================

<details>
<summary>Exercise 03: Now it’s weird!</summary>
The task was to create a monster: a DiamondTrap, which inherits from both FragTrap and ScavTrap. The DiamondTrap class would have a private attribute named "name," with the exact same variable name as the one in the ClapTrap base class.

Attributes and member functions for DiamondTrap were to be picked from either one of its parent classes, including:

- Name (passed as a parameter to a constructor)
- ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
- Hit points (from FragTrap)
- Energy points (from ScavTrap)
- Attack damage (from FragTrap)
- attack() (from ScavTrap)

In addition to the special functions of both its parent classes, DiamondTrap was to have its own special capacity:

- ***void whoAmI()***: This member function would display both its name and its ClapTrap name.

The ClapTrap subobject of the DiamondTrap was expected to be created once and only once. Custom tests were to be added to ensure the correctness and functionality of the program.
</details>
</details>

---

<details>
<summary>C++ - Module 04

Subtype polymorphism, abstract classes, interfaces</summary>
<details>
<summary>Exercise 00: Polymorphism</summary>
The task was to provide comprehensive tests for each exercise, with constructors and destructors of each class displaying specific messages unique to each class.

First, a simple base class named Animal was to be implemented, containing one protected attribute:

- ***std::string type;***

Next, a Dog class was to be implemented, inheriting from Animal, followed by a Cat class inheriting from Animal. These derived classes were required to set their type field depending on their name, with Dog's type initialized to "Dog" and Cat's type initialized to "Cat".

Each animal was expected to utilize the member function:

- ***makeSound()***: It would print an appropriate sound (cats don’t bark).

To ensure understanding, a WrongCat class inheriting from a WrongAnimal class was to be implemented. If the Animal and Cat classes were replaced by the wrong ones in the code, the WrongCat should output the WrongAnimal sound.

Additionally, more tests were to be implemented and included to ensure the completeness and correctness of the program.
</details>

===============================================

<details>
<summary>Exercise 01: I don’t want to set the
world on fire</summary>
The task was to implement constructors and destructors for each class that display specific messages.

First, a Brain class was to be implemented, containing an array of 100 std::string called ideas. Both Dog and Cat classes would have a private Brain* attribute.

Upon construction, Dog and Cat were to create their Brain using new Brain(), and upon destruction, they were to delete their Brain.

In the main function, an array of Animal objects was to be created and filled. Half of it would be Dog objects and the other half Cat objects. At the end of the program execution, the array was to be looped over, and every Animal was to be deleted. Dogs and cats were to be deleted directly as Animals, and the appropriate destructors were expected to be called in the correct order.

Additionally, it was important to check for memory leaks.

Lastly, it was required that a copy of a Dog or a Cat must not be shallow. Therefore, it was necessary to test that the copies were deep copies.

Comprehensive tests needed to be implemented and included to ensure the correctness and functionality of the program.
</details>

===============================================

<details>
<summary>Exercise 02: Abstract class</summary>
The task was to update the Animal class to prevent it from being instantiated directly, as it doesn't make sense for Animal objects to be created since they make no sound. The class was to be modified so that it cannot be instantiated directly, but everything else should function as before.

Optionally, the class name could be updated by adding an "A" prefix to Animal.

Comprehensive tests were necessary to ensure that the modified Animal class functions correctly and cannot be instantiated directly. All other functionality, including inheritance by Dog and Cat classes, should remain unaffected.
</details>
</details>

---

<details>
<summary>C++ - Module 05

Repetition and Exceptions</summary>

<details>
<summary>Exercise 00: Mommy, when I grow
up, I want to be a bureaucrat!</summary>
The task was to design the Bureaucrat class, representing a cog in a bureaucratic machine. A Bureaucrat must have a constant name and a grade ranging from 1 (highest possible grade) to 150 (lowest possible grade).

When attempting to instantiate a Bureaucrat with an invalid grade, the constructor should throw either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

Getters for both the name and grade attributes were required: getName() and getGrade(). Additionally, two member functions to increment or decrement the bureaucrat grade were to be implemented. If the grade goes out of range, both functions should throw the same exceptions as the constructor.

An overload of the insertion operator (<<) was to be implemented to print the Bureaucrat's name and grade.

Comprehensive tests were necessary to demonstrate that the Bureaucrat class works as expected, including testing for exceptions thrown when grades are out of range.
</details>

===============================================

<details>
<summary>Exercise 01: Form up, maggots!</summary>
The task was to create a Form class for bureaucrats to fill out. The Form class needed the following attributes:

- A constant name
- A boolean indicating whether it is signed (defaulting to false)
- A constant grade required to sign it
- A constant grade required to execute it

All attributes were to be private, not protected. The grades of the Form followed the same rules as those for the Bureaucrat class. If a form grade was out of bounds, exceptions Form::GradeTooHighException and Form::GradeTooLowException were to be thrown.

Getters for all attributes and an overload of the insertion operator (<<) that prints all the form's information were required.

Additionally, a beSigned() member function was to be added to the Form class. This function takes a Bureaucrat as a parameter and changes the form's status to signed if the bureaucrat's grade is high enough. If the grade is too low, a Form::GradeTooLowException was to be thrown.

Lastly, a signForm() member function was to be added to the Bureaucrat class. If the form got signed, it was to print a message indicating that the bureaucrat signed the form. Otherwise, it was to print a message indicating that the bureaucrat couldn't sign the form due to a reason.

Comprehensive tests were required to ensure the correct functionality of the Form and Bureaucrat classes, including testing for exceptions and proper signing of forms.
</details>

===============================================

<details>
<summary>Exercise 02: No, you need form 28B,
not 28C...</summary>
The task was to create concrete subclasses of the abstract class AForm, representing different types of forms with specific actions. The base class Form needed to be renamed to AForm and kept as an abstract class. The attributes of the form were to remain private and to be defined in the base class.

The following concrete classes were to be added:

- ShrubberyCreationForm: Required grades for signing and execution were provided. When executed, this form creates a file <target>_shrubbery in the working directory and writes ASCII trees inside it.
- RobotomyRequestForm: Required grades for signing and execution were provided. When executed, this form makes some drilling noises and informs whether the robotomy was successful or failed for the target.
- PresidentialPardonForm: Required grades for signing and execution were provided. When executed, this form informs that the target has been pardoned by Zaphod Beeblebrox.

All concrete classes were to take only one parameter in their constructor: the target of the form.

Additionally, an execute(Bureaucrat const & executor) const member function was to be added to the base AForm class. This function was to execute the form's action of the concrete classes, checking that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. Appropriate exceptions were to be thrown if the requirements were not met.

Lastly, a executeForm(AForm const & form) member function was to be added to the Bureaucrat class. It was to attempt to execute the form and print a message indicating whether the execution was successful or not.

Comprehensive tests were necessary to ensure that the concrete classes and their interactions with the Bureaucrat class worked as expected, including checking for appropriate exceptions and successful execution of forms.
</details>

===============================================

<details>
<summary>Exercise 03: At least this beats
coffee-making</summary>
The task was to implement the Intern class, which acts as an assistant to the bureaucrats. Interns have no unique characteristics like name or grade, but they are capable of creating forms using the makeForm() function.

The makeForm() function takes two strings as parameters: the name of a form and the target of the form. It returns a pointer to a Form object, with the specified name and target.

When a form is successfully created, the function prints a message indicating that the Intern has created the form. However, if the form name passed as a parameter doesn't exist, an explicit error message should be printed.

It was important to avoid using unreadable or overly complex solutions, such as a long chain of if/else statements. The solution needed to be clear and understandable.

Comprehensive testing was required to ensure that the Intern class correctly creates forms and handles errors when invalid form names are provided.
</details>
</details>

---

<details>
<summary>C++ - Module 06
	
C++ casts</summary>

<details>
<summary>Exercise 00: Conversion of scalar
types</summary>
The task was to create a class named ScalarConverter with a single static method, "convert," which accepts a string representation of a C++ literal and outputs its value in char, int, float, 
and double data types. The class should not be instantiable by users as it doesn't require any storage. Only the decimal notation should be used except for char parameters.
Non-displayable characters should be avoided, and if a conversion to char is not displayable, an informative message should be printed. Special cases such as -inff, +inff, nanf, -inf, +inf, and nan for float and double literals should be handled.
Additionally, a program to test the class functionality was required. It should detect the type of the literal passed, convert it from a string to its actual type, and then explicitly convert it to int, float, and double data types.
If a conversion does not make sense or overflows, a message should be displayed to inform the user that the type conversion is impossible. Necessary headers to handle numeric limits and special values should be included.
</details>

===============================================

<details>
<summary>Exercise 01: Serialization</summary>
The task was to implement a class named Serializer with two static methods: serialize and deserialize. The class should not be initializable by the user in any way. The serialize method takes a pointer of type Data* and converts it to an unsigned integer type uintptr_t. Conversely, the deserialize method takes an unsigned integer parameter and converts it to a pointer to Data.

Additionally, a program was required to test the functionality of the Serializer class. This program should include a non-empty Data structure, serialize the address of a Data object using the serialize method, pass the return value of serialize to the deserialize method, and ensure that the return value of deserialize compares equal to the original pointer.
</details>

===============================================

<details>
<summary>Exercise 02: Identify real type</summary>
The task was to implement a Base class with a public virtual destructor only. Additionally, three empty classes named A, B, and C were required to be created, all publicly inheriting from Base. These classes did not have to be designed in the Orthodox Canonical Form.

Furthermore, the following functions needed to be implemented:

- ***Base*** * ***generate(void)***: This function randomly instantiates an object of type A, B, or C and returns the instance as a Base pointer.
- ***void identify(Base**** ***p)***: It prints the actual type of the object pointed to by p: "A", "B", or "C".
- ***void identify(Base& p)***: It prints the actual type of the object pointed to by p: "A", "B", or "C". Using a pointer inside this function was forbidden.

The program also needed to include a test to ensure that everything works as expected. Additionally, including the typeinfo header was forbidden.
</details>
</details>

---

<details>
<summary>C++ - Module 07

C++ templates</summary>

<details>
<summary>Exercise 00: Start with a few
functions</summary>
The task was to implement three function templates:

- ***swap***: This function swaps the values of two given arguments. It does not return anything.
- ***min***: It compares the two values passed in its arguments and returns the smallest one. If the two values are equal, then it returns the second one.
- ***max***: It compares the two values passed in its arguments and returns the greatest one. If the two values are equal, then it returns the second one.

These functions could be called with any type of argument. The only requirement was that the two arguments must have the same type and must support all the comparison operations.
</details>

===============================================

<details>
<summary>Exercise 01: Iter</summary>
The task was to implement a function template iter that takes three parameters and returns nothing:

- The first parameter is the address of an array.
- The second parameter is the length of the array.
- The third parameter is a function that will be called on every element of the array.

The iter function template must work with any type of array, and the third parameter can be an instantiated function template.
</details>

===============================================

<details>
<summary>Exercise 02: Array</summary>
The task was to develop a class template Array that contains elements of type T and implements the following behavior and functions:

- Construction with no parameter: Creates an empty array.
- Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
- Construction by copy and assignment operator. In both cases, modifying either the original array or its copy after copying must not affect the other array.
- Using the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. The program must never access non-allocated memory.
- Elements can be accessed through the subscript operator: [].
- When accessing an element with the [] operator, if its index is out of bounds, an std::exception is thrown.
- A member function size() that returns the number of elements in the array. This member function takes no parameter and must not modify the current instance.

Tests must be provided in a main.cpp file to ensure everything works as expected.
</details>
</details>

---

<details>
<summary>C++ - Module 08
	
Templated containers, iterators, algorithms</summary>

<details>
<summary>Exercise 00: Easy find</summary>
The task was to write a function template easyfind that accepts a type T. It takes two parameters. The first one has type T, and the second one is an integer. Assuming T is a container of integers, this function has to find the first occurrence of the second parameter in the first parameter.

If no occurrence is found, the function can either throw an exception or return an error value of your choice. Inspiration for the behavior can be drawn from how standard containers behave.

Additionally, tests needed to be implemented and provided to ensure everything works as expected.
</details>

===============================================

<details>
<summary>Exercise 01: Span</summary>
The task was to develop a Span class that can store a maximum of N integers, where N is an unsigned integer variable passed to the constructor. The class needed to have a member function called addNumber() to add a single number to the Span, throwing an exception if attempting to add a new element when the maximum capacity is reached.

Additionally, two member functions, shortestSpan() and longestSpan(), were required to find the shortest and longest spans (or distances) between all the numbers stored, respectively. These functions were to throw exceptions if there were no numbers stored or only one, as spans couldn't be determined in those cases.

Tests needed to be implemented to ensure the Span class works correctly, with a minimum of 10,000 numbers tested. The task also suggested implementing a member function to add many numbers to the Span in one call, using a range of iterators to avoid making thousands of individual calls to addNumber().
</details>

===============================================

<details>
<summary>Exercise 02: Mutated abomination</summary>
The task was to develop a MutantStack class, implemented in terms of a std::stack, that offers all its member functions along with an additional feature: iterators. The purpose was to make the std::stack container iterable.

Tests needed to be implemented to ensure that the MutantStack class works as expected. The provided example demonstrated how to use the MutantStack class by performing various operations and iterating over its elements using iterators.

The main function provided a test example, showcasing the usage of MutantStack to push elements, retrieve the top element, pop elements, iterate over the stack using iterators, and create a standard stack from the MutantStack. The task emphasized that running the program with MutantStack and then with another container like std::list should produce the same output.
</details>
</details>

---

<details>
<summary>C++ - Module 09
	
STL</summary>

<details>
<summary>Exercise 00: Bitcoin Exchange</summary>
The task was to create a program named btc that reads a database in CSV format representing bitcoin prices over time. This program takes another file as input, storing different prices and dates to evaluate. Each line in this input file follows the format "date | value", where the date is in the format Year-Month-Day, and the value is either a float or a positive integer between 0 and 1000.

The program should use the value from the input file and display the result of the value multiplied by the exchange rate according to the date indicated in the database. If the date used in the input does not exist in the database, the program should use the closest date contained in the database, ensuring to use the lower date and not the upper one.
</details>

===============================================

<details>
<summary>Exercise 01: Reverse Polish Notation</summary>
The task was to create a program named RPN that takes an inverted Polish mathematical expression as an argument. The numbers used in the expression are always less than 10, but the calculation and the result do not take this rule into account. The program must process the expression and output the correct result on the standard output.

If an error occurs during the execution of the program, an error message should be displayed on the standard output. The program must be able to handle operations with these tokens: "+ - / *".
</details>

===============================================

<details>
<summary>Exercise 02: PmergeMe</summary>
The task was to create a program named PmergeMe that accepts a positive integer sequence as an argument and uses the merge-insert sort algorithm (Ford-Johnson algorithm) to sort the sequence. If an error occurs during the execution of the program, it should display an error message on the standard output.

The program should use at least two different containers in the code to validate the exercise and must be able to handle at least 3000 different integers. It's recommended to implement the algorithm for each container separately rather than using a generic function.

The program should display the following information line by line on the standard output:

- The unsorted positive integer sequence.
- The sorted positive integer sequence.
- The time used by the algorithm for the first container.
- The time used by the algorithm for the second container.

The format for displaying the time used is flexible but should clearly show the difference between the two containers.
</details>
</details>

---
