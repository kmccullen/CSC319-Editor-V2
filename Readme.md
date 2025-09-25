Version 2 of the text editor:

Commands are:
* q:            Quit
* append:       Add a new line at the end of the file
* change:       Replace old with new (prompt for two strings, old and new)
* delete n:     Delete line n
* find target:  Find target string, print out line containing it, if found
* help:         Prints out this list of commands
* insert n:     Insert a line after line n
* put n:        Put the copy buffer at line n (after line n-1)
* read:         Prompts for file name to read in
* replace n:    Replace line n with a new line
* sort:         Sort the file
* stat:         Stats for file (line count, character count)
* yank n:       Copy line n into the copy buffer
* write:        Prompts for file to write out to

I have provided sample code that implements the original commands (append, delete, insert, sort, stat). If you weren't able to get version 1 working, you can use my version as your start for version 2.

Note that there is little or no (actually "no") error checking. I intend to make that a future step.
