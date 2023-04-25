# The printf Project #

*printf()* is the C language function to do formatted printing
The same function is also available in PERL.
NAME
       printf - format and print data

SYNOPSIS
       printf FORMAT [ARGUMENT]...
       printf OPTION

DESCRIPTION
       Print  ARGUMENT(s)  according  to FORMAT, or execute ac
       cording to OPTION:

       --help display this help and exit

       --version
              output version information and exit

       FORMAT controls the output as in C printf.   Interpreted
       sequences are:

       \"     double quote

       \\     backslash

       \a     alert (BEL)

       \b     backspace

       \c     produce no further output

       \e     escape

       \f     form feed

       \n     new line

       \r     carriage return

       \t     horizontal tab

       \v     vertical tab

       \NNN   byte with octal value NNN (1 to 3 digits)
   \xHH   byte with hexadecimal value HH (1 to 2 digits)

       \uHHHH Unicode  (ISO/IEC 10646) character with hex value
              HHHH (4 digits)

       \UHHHHHHHH
              Unicode character with hex value HHHHHHHH (8 dig
              its)

       %%     a single %

       %b     ARGUMENT  as  a  string  with  '\' escapes inter
              preted, except that octal escapes are of the form
              \0 or \0NNN

       %q     ARGUMENT  is  printed  in  a  format  that can be
              reused as  shell  input,  escaping  non-printable
              characters with the proposed POSIX $'' syntax.

       and  all  C  format  specifications  ending  with one of
       diouxXfeEgGcs, with ARGUMENTs converted to  proper  type
       first.  Variable widths are handled.

       NOTE:  your  shell  may  have its own version of printf,
       which usually supersedes  the  version  described  here.
       Please  refer  to your shell's documentation for details
       about the options it supports.
This paper explains how printf works and how to design 
the proper formatting speciﬁcation forany occasion
Here we are going to implement it.
----
**NOTE**: This is not a standard *printf()* function and it does not in any case act as a substitute for the *printf()*.
For a standard printf() function, refer to the standard library.
----
Authors      '''WILLIAM ADEBUSOLA''' && '''NAMWAMBA MARVIN'''
Copyright: MIT
