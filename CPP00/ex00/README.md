Exercise 00: Megaphone

Turn-in directory : ex00/
Files to turn in : Makefile, megaphone.cpp
Forbidden functions : None

Just to be sure that everybody is awake, write a program that has the following
behavior:
(Use C++ style to interact with stdin!)
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>



Chapter III

Exercise : 01
Exercise 01: My Awesome PhoneBook

Turn-in directory : ex01/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None

Welcome to the 80s and its unbelievable technology! Write a program that behaves

like a crappy awesome phonebook software. Please take some time to give your exe-
cutable a relevant name. When the program starts, the user is prompted for input: you

should accept the ADD command, the SEARCH command or the EXIT command. Any other
input is discarded.
The program starts empty (no contacts), doesn’t use any dynamic allocation, and
can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact.

http://www.cplusplus.com/reference/string/string/ and of course
http://www.cplusplus.com/reference/iomanip/

• If the command is EXIT:
◦ The program quits and the contacts are lost forever.
• Else if the command is ADD:
◦ The program will prompt the user to input a new contact’s information, one
field at a time, until every field is accounted for.
◦ A contact is defined by the following fields: first name, last name, nickname,
phone number,darkest secret.
◦ The PhoneBook must be represented as as an instance of a class in your code
it must contain an array of contact.
◦ A contact MUST be represented as an instance of a class in your code. You’re
free to design the class as you like, but the peer evaluation will check the
consistency of your choices. Go look at today’s videos again if you don’t
understand what I mean (and I don’t mean "use everything" before you ask).
• Else if the command is SEARCH:
◦ The program will display a list of the available non-empty contacts in 4
columns: index, first name, last name and nickname.
◦ Each column must be 10 chars wide, right aligned and separated by a ’|’
character. Any output longer than the columns’ width is truncated and the
last displayable character is replaced by a dot (’.’).
◦ Then the program will prompt again for the index of the desired entry and
displays the contact’s information, one field per line. If the input makes no
sense, define a relevant behavior.
• Else the input is discarded.
When a command has been correctly executed, the program waits for another ADD or
SEARCH command until an EXIT command.


Exercise : 02
Exercise 02: The Job Of Your Dreams

Turn-in directory : ex02/
Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp
Forbidden functions : None

It’s your first day of work at GlobalBanksters United. You successfully passed the
hiring tests for the programmers’ team thanks to a few tricks with Microsoft Office
a friend showed you. But you know that it was your swift installation of Adobe Reader

that blew your recruiter’s mind. This gave you the little edge needed to beat your oppo-
nents for this job.

Anyway, you made it and your boss gave you your first task. You need to recode one
missing source file because something went wrong. Account.cpp is missing and they use
USB file sharing and not git.
At this point, it will be legitimate to quit this place however for the sake of this
exercise, you will stay.
The Account.hpp file is present and a quick compilation of tests.cpp confirms that
an Account.cpp file is missing. There’s also an old output log that seems to contain the
matching output.
So you need to create a Account.cpp file and quickly write some lines of pure awesome
C++ and after a couple of failed compilations, your program will compiles and passes the
tests with a perfect output, except for the timestamps differences. Damn you’re good!