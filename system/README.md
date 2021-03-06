# About the Linux system
I will post some basic and useful information about Linux here. Please be aware that I'm not an expert of the system! If you think anything discussed here is not correct or if you have any other thoughts, questions or comments, please don't hesitate to put them in the issue so we can all discuss!

## Table of contents
The order of the topics does not follow a strict study of the system. It, instead, follows the need of the class.

[**Command**](#command)
- [Command Line Interface](#command-line-interface)
- [Command options](#command-options)

[**Files**](#files)
- [File Types](#file-types)
- [Save Output](#save-output)

# Command
## Command line interface
This is very different compared to the graphical user interface (GUI), you can't just double click a program to run it, for example. There are lots of commands in Linux (you can even create your own), but you only need some of them to do most of the work in this class. Below is a list of some common commands (most of them are files operation) that I think you "must" memorize! In practice, your fingers will memorize them after you using them for many times.

`pwd`: print the working directory, i.e. where you are at right now.

`cd`: change directory. There are several conventions:
- `.` is the current directory
- `..` is the upper directory
- `~` is the home directory
-  `/` is the root directory, the top directory of the entire system.

`ls`: list files/directories.

`cp`: copy files/directories.

`mv`: move files/directories. It can be used to rename file/directories.

`clear`: clear the terminal screen. This one is helpful if you have too many things printed on the screen.

`rm`: remove files. Be very careful when using this command. If you use this command to remove something without any other version control or copy, you will never have the file back (I think some professionals would be able to find it back on the hardware level though...). To remove a directory, you will need to use the `-R` option.

## Command options
Once you start using commands, you will notice that they may not meet your need. It then comes to the time that you may need to use command options. Options provide other functions to a command. For example, if you use `ls` in a directory, you may see the following screen
```shell
[Max@REI Lecture5]$ls
matrixMultiplication.c series.c
```
As you can see, there are two files in the `Lecture5` directory. If I want to see the details of the file such as size, owner, time of modification, I can type `ls -l` instead, and I will get the following:
```shell
[Max@REI Lecture5]$ls -l
total 16
-rw-r--r--  1 cuizhaoyuan  staff  1484 Sep  6 14:10 matrixMultiplication.c
-rw-r--r--  1 cuizhaoyuan  staff   784 Sep  5 23:15 series.c
```
Now you are seeing more details about the files. Don't worry if you don't understand the meaning of the information. We will cover that part later.

You can always use `man <command>` to look up a command. It will show you what the command does, what options are available, and even examples.

# Files
## File types
On Linux system, almost everything can be considered a file, no matter if it's your source code, your binary executable, your password, or even your keyboard. There are several file types on Linux, but in this class we only need to deal with two types of files.
1. Regular files
2. directories: a list of files

To know what is the type of a certain file, let's type the command `ls -l`. Here is an example:
```shell
[Max@REI 4top]$ls -l
total 184
-rw-r--r--   1 cuizhaoyuan  staff  83448 Jul 20 00:45 4TopDecay.png
-rw-r--r--   1 cuizhaoyuan  staff   1075 Jul 20 00:45 LICENSE
-rw-r--r--   1 cuizhaoyuan  staff   1551 Sep  1 13:23 README.md
drwxr-xr-x   9 cuizhaoyuan  staff    288 Jul 20 00:45 dataPreparation_deprecated
drwxr-xr-x  12 cuizhaoyuan  staff    384 Sep  7 10:53 framework
drwxr-xr-x  12 cuizhaoyuan  staff    384 Sep  1 13:23 preselection
drwxr-xr-x  12 cuizhaoyuan  staff    384 Sep  1 13:23 training
```
This is the directory of my research. As you can see, there are seven files listed. Look at the first symbol on the line of every file. The first three show a `-` while the last four show a `d`. The meaning is shown in the table below. There are other types of files that we won't cover and you can look up on google.

| Symbol | Type     |
| :------------- | :------------- |
| -     | regular file       |
| d | directory |
| l | link |

This is not the end of the file story. Sometimes you may have something that you want to hide, let's say your code to win a Nobel prize. To make a file hidden, start a file name with `.` for example `.nobelPrizeCode.c` However, this kind of hiding is really not for security purpose; the file is not really hidden. If you type `ls -a`, you can see all the hidden files, here is an example of my research directory we talked about above
```shell
[Max@REI 4top]$ls -a
.                          .gitignore                 dataPreparation_deprecated
..                         4TopDecay.png              framework
.DS_Store                  LICENSE                    preselection
.git                       README.md                  training
```
Now you see five more files with `.` at the beginning of the file name, note that `.` and `..` are the current directory and upper directory. With this being said, your Nobel prize code is in danger, you may want to save it in another way. If you dig deeper in the Linux system, you will notice that this type of hidden files usually serve as configuration files. Go to you home directory `~/` and type `ls -a` see what you have in your home directory. Since they are hidden from the normal `ls` command without the `-a` option, this will decrease the possibility of accidents such as deleting a configuration file. (I also feel this make the directory look better)

## Save Output
To Save the contents printed on the screen, we can add the `>` after our program. For example, for the very first program, `helloworld.c`, it prints the syntax "Hello world!" on the screen. If we want to save the output in a file named `data.dat`, we can do
```shell
./helloworld.c > data.dat
```
A more formal name of this operation is called output redirection. Every time you use the `>` redirection operator, it creates a new file. That means whatever has the same name before the operation will be overwritten, so please make sure you use a safe name and have a copy of your data.

In the case that you don't always want to create a new file but append new contents in an existing file, use the `>>` operator instead. If the file does not exist, it creates a new file.
