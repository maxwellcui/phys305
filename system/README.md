# About the linux system
I will post some basic and useful information about linux here. Please be aware that I'm not an expert of system! If you think anything discussed here is not correct or if you have any other thoughts, questions or comments, please don't hesitate to put them in the issue so we can all discuss!

## Command line interface
This is very different compared to the graphical user interface (GUI), at least you can't just double click a program to run it. There are lots of commands in linux (you can even create your own), but you only need some of them to do most of the work in this class. Below is a list of some common commands (most of them are files operation) that I think you "must" memorize! In practice, your fingers will memorize them after you using them for many times.

`pwd`: print the working directory, i.e. where you are at right now.

`cd`: change director. There are several conventions:
- `.` is the current directory
- `..` is the upper directory
- `~` is the home directory
-  `/` is the root directory, the top director of the entire system.

`ls`: list files/directories.

`cp`: copy files/directories.

`mv`: move files/directories. It can be used to rename file/directories.

`clear`: clear the terminal screen. This one is helpful if you have too many things printed on the screen.

`rm`: remove files. Be very careful to use this command. If you use this command to remove something without any other version control or copy, you will never have the file back (I think some professionals would be able to find it back on the hardware level though...) To remove a directory, you will need to use the `-R` option.

## Command options
Once you start using commands, you will notice that they may not meet your need. It then comes to the time that you may need to use options of the command. Options provide you other functions of a command. For example, if you use `ls` in a directory, you may see the following screen
```shell
[Max@REI Lecture5]$ls
matrixMultiplication.c series.c
```
As you can see, there are two files in the `Lecture5` directory. If I want to see the details of the file such as size, owner, time of modification, I can type `ls -l` instead. And I will get the following:
```shell
[Max@REI Lecture5]$ls -l
total 16
-rw-r--r--  1 cuizhaoyuan  staff  1484 Sep  6 14:10 matrixMultiplication.c
-rw-r--r--  1 cuizhaoyuan  staff   784 Sep  5 23:15 series.c
```
Now you are seeing more details about the files. Don't worry if you don't understand the meaning of the information. We will cover that part later.

You can always use `man <command>` to look up a command. It will show you what does the command do, what options are available, and even examples.
