printf

\*\*Holberton School project to recreate printf using all we have learned in C.\*\*

printf- write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the **variable-length argument facilities** of **stdarg**(3)) are converted for output 

Headerfile: holberton.h

Prototype: 

Example:

/\*\*

 \* print\_dec - print decimal

 \* @d: decimal to print

 \* @sum: count of chars printed

 \* Return: the sum of printed dec
 \*/

int print\_dec(va\_list d)

{

 int a[10];

  int max, num, sum, index;

 num = va\_arg(d, int);

 max = 1000000000;

 a[0] = num / max;

 for (index = 1; index \< 10; index++)

 {

 max = max / 10;

 a[index] = (num / max) % 10;

 }

 if (num \< 0)

 {

 \_putchar('-');

 \*sum += 1;

 for (index = 0; index \< 10; index++)

 a[index] = a[index] \* -1;

 }

 for (index = 0, sum = 0; index \< 10; index++)

 {

 sum = sum + a[index];

 if (sum != 0 || index == 9)

 {

 \_putchar('0' + a[index]);

 \*sum += 1;

 }

 }

 return (sum);

}

Requirements

-Allowed editors: vi, vim, emacs

-All your files will be compiled on Ubuntu 14.04 LTS

-Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

-All your files should end with a new line

-A README.md file, at the root of the folder of the project is mandatory

-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

-You are not allowed to use global variables

-No more than 5 functions per file

-In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don’t have to ----push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files ---might be different from the one showed in the examples

-The prototypes of all your functions should be included in your header file called holberton.h

-Don’t forget to push your header file

- All your header files should be include guarded


By Jacob Biehler and Alexa Inga.