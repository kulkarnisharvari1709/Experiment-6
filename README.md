# Experiment-6

Code 1
🔹 Purpose:
This program prints all even numbers from 0 to 10 inclusive.

🔸 Logic Explanation:
Initialization:

The program uses a for loop where the loop variable i starts at 0.

Loop Condition and Increment:

The loop continues as long as i is less than or equal to 10.

i is incremented by 2 in each iteration to skip odd numbers and directly move to the next even number.

Output:

Each value of i is printed on a new line.

🔸 Concepts Used:
for loop with custom increment (i += 2)

Output using cout

Integer iteration

Code 2
🔹 Purpose:
This program prints the string "SIT" exactly five times, each on a new line.

🔸 Logic Explanation:
Initialization:

The program uses a for loop where the loop variable i starts at 0.

Loop Condition and Increment:

The loop runs while i is less than 5.

After each iteration, i increments by 1.

Output:

In each iteration, the program prints the string "SIT" followed by a newline.

🔸 Concepts Used:
for loop

String output using cout

Iteration control

Code 3
🔹 Purpose:
This program prints numbers from 1 to 10, but skips printing the number 5.

🔸 Logic Explanation:
Initialization:

The program uses a for loop with the loop variable i starting at 1 and running up to 10.

Condition to Skip:

Inside the loop, there is an if statement that checks if i equals 5.

If true, the continue statement skips the current iteration, so 5 is not printed.

Output:

For all other values of i (except 5), the program prints the value.

🔸 Concepts Used:
for loop iteration

if condition with continue to skip iteration

Output using cout

Code 4
🔹 Purpose:
This program prints a right-angled triangle pattern made of stars (*), with the number of rows defined by the user (here, fixed as 5).

🔸 Logic Explanation:
Initialization:

The variable rows is set to 5, determining the height of the triangle.

Outer Loop (Rows):

A for loop runs from i = 1 to i = rows (1 to 5).

Each iteration represents a new line (row) in the output.

Inner Loop (Stars per Row):

For each row i, an inner for loop prints i stars (*).

So, the first row prints 1 star, second row prints 2 stars, and so on.

Line Break:

After printing stars for a row, cout << endl; moves the cursor to the next line.

🔸 Concepts Used:
Nested loops (for loops)

Pattern printing

Output control with cout and endl

Code 5
🔹 Purpose:
This program prints an inverted right-angled triangle pattern made of stars (*), with the number of rows defined (here, 5).

🔸 Logic Explanation:
Initialization:

The variable rows is set to 5, indicating the height of the pattern.

Outer Loop (Rows):

A for loop runs from i = rows down to i = 1.

Each iteration corresponds to a row of the pattern.

Inner Loop (Stars per Row):

For each row i, an inner for loop prints i stars (*).

Since i decreases each iteration, the number of stars per row decreases.

Line Break:

After printing stars for each row, cout << endl; moves to the next line.

🔸 Concepts Used:
Nested loops

Decrementing for loop

Pattern printing with cout

Code 6
🔹 Purpose:
This program prints a right-aligned right-angled triangle pattern made of stars (*), with a fixed number of rows (here, 5).

🔸 Logic Explanation:
Initialization:

The variable rows is set to 5, defining the number of rows in the pattern.

Outer Loop (Rows):

A for loop runs from i = 1 to i = rows.

Each iteration corresponds to a new row.

Printing Spaces:

For each row i, a nested loop prints (rows - i) spaces.

This pushes the stars to the right, creating the right alignment.

Printing Stars:

After spaces, another loop prints i stars.

Number of stars increases with each row.

Line Break:

After printing spaces and stars for a row, cout << endl; moves to the next line.

🔸 Concepts Used:
Nested loops for pattern printing

Managing spaces for alignment

Incrementing stars per row

Code 7
🔹 Purpose:
This program prints a centered pyramid made of stars (*), with a fixed number of rows (here, 5).

🔸 Logic Explanation:
Initialization:

The variable rows is set to 5, defining the pyramid’s height.

Outer Loop (Rows):

Runs from i = 1 to i = rows.

Each iteration corresponds to one row of the pyramid.

Printing Spaces:

For each row i, print (rows - i) spaces to center-align the stars.

Printing Stars:

After spaces, print (2 * i - 1) stars.

This produces an odd number of stars, increasing by 2 each row, forming the pyramid shape.

Line Break:

After printing spaces and stars for each row, move to the next line.

🔸 Concepts Used:
Nested loops for pattern printing

Spaces to center-align output

Calculating number of stars per row for pyramid shape

Code 8
🔹 Purpose:
This program prints a number pyramid where numbers increment sequentially from 1, arranged in rows with increasing counts.

🔸 Logic Explanation:
Initialization:

rows is set to 4, specifying the height of the pyramid.

num is initialized to 1, which will be the starting number printed.

Outer Loop (Rows):

Loop from i = 1 to i = rows.

Each iteration corresponds to a row.

Inner Loop (Numbers per Row):

For each row i, print i numbers.

In each inner loop iteration, print the current value of num, then increment num by 1.

Line Break:

After each row, move to the next line.

🔸 Concepts Used:
Nested loops for pattern printing

Sequential increment of a counter variable

Formatting output with spaces

Code 9
🔹 Purpose:
This program prints the numbers from 1 to 20, each on a new line, using a while loop.

🔸 Logic Explanation:
Initialization:

Initialize an integer variable num to 1, which will be used as the counter.

Loop Condition:

The while loop runs as long as num is less than or equal to 20.

Inside the Loop:

Print the current value of num.

Increment num by 1.

Termination:

When num exceeds 20, the loop terminates, and the program ends.

🔸 Concepts Used:
while loop for iteration

Incrementing loop counter

Output with cout

Code 10
🔹 Purpose:
This program verifies a user-entered password against a predefined password and grants or denies access accordingly.

🔸 Logic Explanation:
Predefined Password:

The program stores the original password as a string ("Harry").

User Input:

The user is prompted to enter a password.

Length Check:

The program first checks if the length of the input password matches the original password length.

If lengths differ, access is denied immediately with a message.

Character-by-Character Comparison:

Using a while loop, each character of the input is compared to the corresponding character in the original password.

If any character does not match, the program sets a flag isMatch to false and breaks the loop.

Result:

If isMatch remains true after the loop, access is granted.

Otherwise, access is denied with an appropriate message.

🔸 Concepts Used:
String input and comparison

Looping through string characters

Conditional checks and flags

Basic password verification logic
