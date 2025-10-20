-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
					Deal or No Deal
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

For this assignment:
0) Prompt the user with: "Please enter a filename:\n";

1) You will read a filename in from cin, which will be a single word.
You will open that file.

2) That file will contain:
The number of briefcases (N) (N must be >= 2)
Followed by N dollar amounts, one on each line. ALL ARE POSITIVE INTS.

You will read that into a vector of ints of size N.

3) After that, you will go into an infinite loop:
	3.0) Prompt the user with: "Please enter a briefcase to open:\n";
	3.1) The user will input a briefcase to open (an integer which will range
	from 0 to N-1)
	3.2) Print "That briefcase held X dollars"
	3.3) You will then calculate the average value left in the cases.
	Use INTEGER DIVISION. (I.e. if the cases hold 1,2,3,4, the average is 2.)
	3.4) Output the average to the user: "I will offer you X dollars to walk
	away.\n"

	The loop will terminate if the user ever types -1 (indicating that a
deal is made) or if there is only one briefcase left.

In both cases, print to the screen how much money they won. This will either
be the last offer (if they took the deal) or the money in the last briefcase.
It will look like this: "You won X dollars!\n"

If an error occurs, print out "You dun goofed.\n" and quit.

Possible error cases you have to handle:
1) If you are told to open a file that doesn't exist
2) An error reading from the file like if it has letters, or ends before N
dollar amounts are read.
2) The user trying to open the same briefcase twice
3) The user trying to open a negative briefcase (other than -1) or a briefcase
higher than N-1.
4) If there are less than 2 briefcases to begin with.

Sample input #1:
money.txt
1

Money.txt contains:
2
20
100

Sample output:
Please enter a filename:
money.txt
Please enter a briefcase to open:
1
That briefcase held 100 dollars
You won 20 dollars!


Sample input #2:
cases2
1
-1

Cases2 contains:
3
10
100
1000

Sample output:
Please enter a filename:
cases2
Please enter a briefcase to open:
1
That briefcase held 100 dollars
I will offer you 505 dollars to walk away.
Please enter a briefcase to open:
-1
You won 505 dollars!
