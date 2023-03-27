j - down
k - up
h - left
l - right

w - move by word but stop at characters: , . etc
W - move by word

x - delete current character.
X - delete character left to the current character.
in Escape mode: when you press I/(shift+i) : your cursor will be moved to start of the line and you will be put in insert mode.
f{char} - Helps to take the cursor to the character where it is present next(Forward in line), next pressing ; helps the cursor to advance to next char matching.
F{char} - Helps to take the cursor to the character where it is present next(Backward in line), next pressing , helps the cursor to move backwards to next char matching.
FS - Go to beginning of the line using FS.
t{char} - Takes the cursor to the next location before the character.
/{word} - search the word in the file, next press 'n' to find the other occurrences of the word in the file, you can press 'N' to go backwards for the word in the file.
?{word} - reverse search the word in the file, hit 'n' to search in backward direction and hit 'N' inorder to search in forward direction.

###IMP
- /{word}
- Enter
- cw (meaning: change word)
- Enter word/character that you want to change to.
- Press "n" to find the next occurance
- Press "." to repeat the above.

###IMP2
- keep on pressing w you will reach a word.
- next keep press */n then you will go to next word which is same as above word, $/N to reverse.
- d/This: Everthing from current cursor location until word:'This' has been deleted.

##### Substitute
- :s/{old}/{new} : This will change only first occurence of old to new in current line.
- :s/{old}/{new}/g : This will change all occurences of old to new in the current line.
- :[range]s/{old}/{new}/[flags] : This will change all occurences of old to new in the given range of lines(multiple).
- :1s/word1/word2/g : This will change all occurences of word1 to word2 in the line1.
- :1,5s/word1/word2/g : This will change all occurences of word1 to word2 in the given range of lines: 1 to 5.
- :.,$s/word1/word2/g : This will change all occurrences of word1 to word2 from current line to last line. ( . -> current line & $ -> last line )
- range: 1,$ = %
- :%s/word1/word2/g : This will change all occurrences of word1 to word2 from all lines in the file.)
- :/Pattern-1/,/Pattern2/s/word1/word2/g : This will change word1 to word2 in file between search patterns Pattern1 and Pattern2.
- :s#/var/spool#/usr/local# : replaces /var/spool to /usr/local in the first occurence in the given line.
- :set nu : Turns on line numbers in vim.
- :set nonu : Removes line numbers in vim.
- :set nu! : Toggle b/w on & off.


gg - go to the first line
2gg - go to second line
G - go to thte last line 
dw - delete word
d$ - delete from current position to end of the line

5dw - delete 5 words.
5dd - delete 5 lines
dd - delete current line
daw - delete a word, so even if cursor is in middle of the word "daw" will delete the word :)


{operator}{a}{object}
{operator}{i}{object}
Examples:
daw :  Delete a word.
ciw : Change inner word.

#####Visual Mode
Used to do text:  hilight, select, copy, cut without using mouse
