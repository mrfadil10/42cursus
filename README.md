<h1 align="center" ><strong>42cursus</strong></h1>
<p align="center" >Notes for my journey of learning C.</p>

## **Different Types Of Errors**

### Runtime Errors

- ##### SEGMENTATION FAULT
  Segmentation fault occurs when the program tries to access an area of memory that it is not allowed to access.
- ##### BUS ERROR
  Bus error occurs when the program gives a processor instruction with an addres that does not satisfy its `alignement requirements`.

### What is ERRNO?

- _ERRNO_ is an integer variable that is set by system calls and some library functions to indicate the specifics of an error in the event that one occurs.

## **Dealing With Files**

> **Important resource**:
>
> - [Artice about Processes, Files, and File Descriptors in Linux](https://medium.com/geekculture/developer-diaries-processes-files-and-file-descriptors-in-linux-ebf007fb78f8)

- The f that prefixes file handling functions usually refers to the function being a high level routine as opposed to a low level routine function.
- low level routines do not use buffering but can take up to one minute before data is physically written to the disc (we can use **fsync** to ensure that all data is written to the file).

- #### **Streams**
  - A **stream** is a flow of data from a source to a destination within a GNU system (mostly used in high level routines).
  - Streams are represented by the type FILE\*.
  - File position is a character count in the opened file that starts at 0. for example, File position 40 means that the character that is currently being read from or written to is the 41th character in the file. (**ftell** is a high level function that takes in a stream as input and outputs an integer representing the file position).
  - EOF is a flag indicating that the current file position is the end of a the file.
- #### **File Descriptors**
  - A file decscriptor is an integer that represents the connection opened between a source and a destination (mostly used in low level routines).

## **Makefile**

> **Important resource**:
>
> - [makefiletutorial.com](https://makefiletutorial.com)

- We can use variables in a makefile using the conventional assignement operator and then calling the variable's value using $(variable).
- If a command isn't indented with a tabulation (specifically using tab and not spaces) the command will not work.
- Targets are file names.
- The target gets recompiled if teh target dosen't exist or the prerequisite's timestamp have changed since target was last compiled.
- Assignement is done either using := or =.
- Variable calling is done either using \'$'\{} or \'$'\().
- Make has a huge list of implicit rules that will run by default unless you override them.

## **Miscellaneous**

## **Reminders**

- `need to examine the declarations and the conflics between them and the definitons.`
- `Still need strtrim.`
- re read the reddit comment about linking and compilation again.
- Learn about shared and static libraries and how they work in detail.
- read more about implicit rules of a makefile.
- read more about alignement requirement.
- Why should I use all in my libft makefile?
- What does \* "Wildcard" do?
- Learn about regex, patterns, wildcard meaning and what stem means.
- Split ft_split into two halves so I can fix the length and assignement problem with the norminette.
- Fix compilation problems of ft_itoa.
