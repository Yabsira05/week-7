# week-7
Module 4: Debugging and Logic
For this assignment, I was given a broken piece of C++ code.
I debug it so that it reads three numbers from the user and prints the largest value using nested if statements.
The code I was given has several syntax and logic errors.
1, Float n1 n2 n3,
-It's missing commas between the variable names.
-Ends with a comma instead of a semicolon.
2, cin>> n1 > n1 > n3;
-used > instead of the input operator >>.
-Read n1 twice and never read n2.
3, if(n1 = n2 && n1 >= n3)
- Used + instead of ==.
- Also, the equality check was not really needed to find the largest number.
4, if(n3 >= n1 && n3 >= n2)
    cout << "Largest number: " << n2;
  -Condition checks if n3 is the largest, but the output prints n2 instead of n3.
  5. Code structure was not nested
-The instructions asked for a nested if, but the original code just had three separate if statements instead of an if with another if inside.

I fixed the code starting from basic syntax.
1. The variables were declared like float n1 n2 n3, with no commas and a comma at the end, so I changed it to float n1, n2, n3;.
2. The input line used cin >> n1 > n1 > n3;, which mixed up the operators and even read n1 twice. I corrected it to cin >> n1 >> n2 >> n3; so all three numbers are read properly
3. Instead of trying to compare all three numbers in separate if statements, I decided to:
-First compare n1 and n2.
-Inside that block, compare the current bigger value with n3.
-Use >= so ties still work.
4. Rewrite the code using nested if statements
I changed the structure so the program decides in two small steps:
First, it checks which is bigger: n1 or n2.
Then, inside that block, it compares that bigger one with n3.
So the code becomes:
If n1 >= n2, then compare n1 with n3.
Otherwise, compare n2 with n3.
That’s what makes it a nested if (an if inside another if).
5. In the slide code, one condition said “n3 is the largest,” but the output printed n2.
I fixed it by changing that line so that when n3 is the largest, the program prints n3:
cout << "Largest number: " << n3 << endl;

This shows that the debugged program now correctly identifies the highest of the three inputs.
