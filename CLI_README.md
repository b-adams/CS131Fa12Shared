# Welcome to a UNIX command line! #

This file lists some commands you're going to frequently need, as well as a few you may occasionally want.

The part of the command you'd type will be `marked like this` .

Parts of commands that depend on context will be IN ALL CAPS.

Wherever you see FLAST, it means your username, AKA your **F**irst initial followed by your **LAST** name. For me, FLAST means _badams_. 

Many commands will only display things on screen if they _fail_. If you enter a command and nothing seems to happen... it probably worked! The phrase for this is "No news is good news".


# Frequently Used Commands #

Command: `man COMMAND`

 * Briefly: Displays the **MAN**ual on how to use COMMAND and what it does
 * Example: `man ls`
 * Output: This command will put a bunch of stuff on the screen for you to read. 
   Press the space bar to see more, and press the Q key to exit the manual.
 * More information available via: `man man`

## Editing and Viewing ##

Command: `pico FILENAME.c`

 * Briefly: Edit the file named FILENAME.c
 * Example: `pico cs131_program_1_astudent.c`
 * Keyboard commands: PICO does not use the mouse. Keyboard only. To save, press Control-O, to exit, press Control-X
   With any command, watch the bottom of the screen for information about what you have to do. The ^ symbol is Control.
 * Alternatives: I encourage you to edit your files using TextWrangler (Mac110) or Komodo Edit (Mac101), and
   just use the command-line interface for compiling code, running programs, and saving/turning in code.

Command: `cat FILENAME.c`

 * Briefly: Display (**CAT**alog) the contents of FILENAME.c
 * Example: `cat cs131_program_1_astudent.c`
 * Alternative: You can use the `more FILENAME.c` command instead, and it'll only display one page of
   info at a time, waiting for you to press space.
 * More information available using: `man cat`

## Compiling and running ##

Command: `clang FILENAME.c -o PROGRAMNAME`

 * Briefly: Compile the code in FILENAME.c into a program that will be named PROGRAMNAME
 * Example: `clang cs131_program_1_astudent.c -o fnord`
 * More detail: The **C LANG**uage compiler reads in your source code and _compiles_ it into a bunch
   of ones and zeroes that a computer can actually run. Or, if there's a problem with your code and
   it's not "syntactically correct C", you'll get error messages which can often be helpful in
   tracking down where you went wrong and what kind of thing you need to do to fix it. 
 * Friendly Advice: Compiler error messages are notoriously cryptic, _especially_ to new programmers.
   Clang has some of the best error messages I've seen, and it still can leave me befuddled at times.
   If you don't understand what a message means, ask for help, and make sure to take notes on how
   that error message got resolved. You WILL see it again in the future, so learning what the messages
   mean is important!
 * How to choose the PROGRAMNAME: Don't put **ANY** periods in it! (You can accidentally overwrite your
   code, and have to restore to a previous backup. You did take a snapshot recently, right...?)
   Other than that, you can call your programs almost anything. I recommand you go with simple,
   descriptive names, such as program_1 or prog1.
 * More information available using: `man clang`
 
Command: `./PROGRAMNAME`

 * Briefly: Run the program named PROGRAMNAME
 * Example: `./fnord`
 * When you use this: Right after you successfully compiled a program, to test that it works.

## Turning in and saving work ##

Command: `git add FILENAME.c`

 * Briefly: Flags the file named FILENAME.c as "to be saved". Usually followed by a _commit_ command.
 * Example: `git add cs131_program_1_astudent.c`
 * More detail: Saving your files is a two-step process. First, you _stage_ one or more files,
   using the add command to put them in the staging area and optionally using other commands to
   fine-tune them. Second, you take a _snapshot_ of everything on the stage using the commit command.
 * Output: No news is good news
 * More information available using: `man git-add`
  
Command: `git commit -m "YOUR NOTES HERE"`
 
 * Briefly: Saves a snapshot of all the files you've _add_ed since you last did a commit
 * Example: `git commit -m "Fixed all syntax errors, program 1 now compiles."`
 * Output: "Working directory clean" if nothing was staged, details about the snapshot if one was taken.
 * More detail: Saving your files is a two-step process (see the add command). When you save
   a snapshot of your staged files, you are required to add a short english description of
   what's been done since the last snapshot. 
 * Description style: Paint with a broad, descriptive brush. Instead of describing what you **did**,
   try to describe what you did **accomplishes**. For example, "I changed every x variable to
   be called numberOfPillows and every y variable to be numberOfPillowFighers" describes what
   you actually did, while "I improved the descriptiveness of my variable names" describe
   what your changes accomplished.
 * TIP: Make many commits of small changes. There are many good reasons for this, which you
   may ask me about in person. The one I'll say for now is: It's an important habit to develop ASAP.
 * **WARNING**: Don't leave off the message, or you may be dumped into the VIM editor. You
   need to use [special commands to exit vim](http://www.oregonwebradio.net/backup_fedora/tutorials/vim_li/quickstart.html#exit)
 * More information available using: `man git-commit`

Command: `git status`

* Briefly: Let you know if you have any unsaved changes that should be committed, or untracked
  files (which should be tracked or deleted)
* Example: `git status`
* Output: 
  * If you have no unsaved changes and no untracked files, it'll say "nothing to commit (working directory clean)"
  * If you have files that haven't been added, it'll list them as "Untracked files" and remind you to use `git add` to track them.
    If they're not things you should turn in, you can either ignore them or delete them. 
  * If you have unsaved changes to a file that was previously added, it'll list them as "Changes not staged for commit"
    Generally, you should use `git add` to put your changes on the stage so they'll be included in your next commit snapshot
  * This will also display "Changes to be committed", listing all the files that will be included in your next commit snapshot
 * More information available using: `man git-status`

Command: `git show`

 * Briefly: Displays info on your last snapshots
 * More detail: If you need to look up the commit number, or remind yourself what you've done, 
   this shows you both of those, as well as when you did it and who did it (not very interesting... yet)
 * Example: `git show`
 * When you use this: Primarily when you're turning in homework, and need to look up the commit number
 * More information available using: `man git-show`

## Changing your password ##

Command: `passwd`

 * Briefly: Change your **PASSW**or**D**
 * Output: You'll be asked for your current password, and then asked twice for your new password.
   If you forget your new password, I can reset it for you.
 * More information available using: `man passwd`

## Getting around directories (folders) ##

Command: `pwd`

 * Briefly: Display your **P**resent **W**orking **D**irectory
 * FAQ: This command has nothing to do with your password.
 * When you use this: If you're getting "file not found" errors and an _ls_ showed you all the 
   wrong files. You use this to see what directory you actually ARE in.
 * More information available using: `man pwd`

Command: `cd`

 * Briefly: **C**hange your **D**irectory to your home/starting directory
 * More detail: Typing cd all by itself will send you to /Users/FLAST
 * Output: No news is good news
 * More inforamtion available using: `man cd`

Command: `cd DIRECTORYNAME`

 * Briefly: **C**hange your present working **D**irectory to DIRECTORYNAME
 * Analogs: On your computer, double-clicking a folder is like cd'ing into it. 
 * Example: `cd cs131`
 * Output: No news is good news
 * When you use this: When you first log in, you'll be in your home directory (/Users/FLAST) and
   will need to type `cd cs131` to change into your code directory (/Users/FLAST/cs131)
 
Command: `cd ..`

 * Briefly: Change to the parent directory
 * More detail: Whatever directory the current one is located in is where this command takes you.
   If you accidentally found yourself in /Users/FLAST/Library, this command would bring you
   back to /Users/FLAST

Command: `ls`

 * Briefly: **L**ist all the files in your current directory **S**tructure
 * Analogs: If you've used the Windows command prompt, this is like the 'dir' directory command
 * When you use this: To see if a file is in your current directory, particularly when you typed
   something and got some sort of "file not found" error.
 * More information available using: `man ls`

## Blowing things up ##

Command: `rm PROGRAMNAME`

* Briefly: **R**e**M**oves the file called PROGRAMNAME. Normal humans call this "deleting".
* Example: `rm fnord`
* **WARNING**: Whether a program, a code file, a directory, this readme, or any other precious data,
  the RM command is how you permanently get rid of it. So be careful with this one - "I accidentally RM'd
  all of my work... and never saved any snapshots..." is a very embarassing way to fail an assignment.
  And while it's a great learning opportunity (like me, you'll probably never do it again...) please
  learn from the mistakes of others and be very cautious with this command.

## Less typing, fewer errors ##

Typing tip: The TAB key

* Briefly: After typing the first couple letters of a filename, tap the TAB key rather than typing the rest
* More detail: Whenever you tap TAB, the server will try to fill in the rest of the filename you're typing.
  If there's only one option, it'll fill in the whole thing. When there are multiple options, it'll fill
  in as much as it can for you, then you'll need to add another letter or two before tapping TAB again. 
* Handy tidbit: If you tap TAB twice, it'll also display all the possible ways of completing what you're typing.
* Example: `pico cs1[TAB]1[TAB]` instead of `pico cs131_program_1_astudent.c`
* Example explanation: The first tab fills in `31_program_` but then stops because there's also 
  a cs131_program_2_astudent.c and a cs131_program_3_astudent.c. Typing in the number and then tapping TAB
  finishes the filename, because the only thing that starts with cs131_program_1 is cs131_program_1.c

Typing tip: The UP ARROW

* Briefly: Rather than retyping the same commands over and over, use the UP ARROW to "replay" them
* More detail: The server keeps track of the last few commands you entered, and the UP and DOWN
  arrow keys allow you to scroll through them. 
* When you'd use this: You'll often have a terminal window open so you can compile your program, 
  run it, compile it again, run it again, and so on. Rather than repeatedly re-typing
  `clang cs131_program_1_astudent.c -o fnord` then `./fnord` then `clang cs131_program_1_astudent.c -o fnord` then `./fnord`,
  you could just type each of them once, than then only have to press UP ARROW twice and then enter from
  then on.

# Making this document easy on the eyes #

This document was written using a minimalist markup language called [Markdown](http://daringfireball.net/projects/markdown/syntax). It's very handy.

You can see the "rendered" version of (this document on github](https://github.com/b-adams/CS131Fa12Shared/blob/master/CLI_README.md).

Alternately, you can `cat CLI_README.md` and then copy/paste the contents into the [Markdown Dingus](http://daringfireball.net/projects/markdown/dingus)
then pressing the Convert button should make this thing suddenly look a lot nicer.

# About #

* Author: Prof. Bryant E. Adams
* Date: August 5, 2012
* Version: 1.3
