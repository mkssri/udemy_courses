#### Commands

- dd: cut the line
- j: move down
- p: puts the text after your cursor
- P: puts the text before your cursor
- z: put the cursor in the middle of the screen by moving the screen up and down..
- x: cut the character.
- p: print aftrer the cursor.
- P: print at cursor location.
- d$: delete from current location till end of the line.
- p: paste from next location of cursor. 
- P: paste from current location of cursor.
- yw: copy/yank a word.
- yy: copy/yank entire line.
- y$: copy/yank from current location till end of the line.
- y2w: yank/copy 2 words.
- 4yy: yank/copy 4 lines.
- cmd+r: Redo the command.
- u: changes undone.
- 2dd: deletes 2 lines.
- I/(shift+i) => cursor goes to the start of the line and switches to the insert mode.
- a: moves cursor to next and switches terminal to insert mode.
- shift+a: moves cursor to the end of the line and switches terminal to insert mode.
- o: moves cursor to the next line and switches to insert mode.
- O/(shift+o): switches to insert mode and moves cursor to above line.
-  a/ 80i switches to insert mode
   b/ enter a character
   c/ enter escape (it prints 80 times the above character.)
-  a/ 5oi switches to insert mode
   b/ enter a character (#)
   c/ enter escape (it prints 5 new lines with # sign.)
-  a/ 4oi switches to insert mode
   b/ enter ip address
   c/ enter escape (it prints 4 new lines with ip address .)
- R or (shift+r): Replace mode it helps to replace the existing text already present...
- w: go to next word.
- b: go to previous word.
- cw: change word.
- C/(shift+c): change things from end of line to current
- cc: change entire line of text.
- g~w: switches entire word to uppercase.
- ~: put cursor on letter and hit ~, it changes letter from lowercase to uppercase.
- g~$: switches entire line to uppercase.
- guu: Make entire line uppercase.
- shift+j: Merge two lines with a space.
- g+shift+j: Merge two lines without a space.

when we do above operations the thing is copied/yanked to some default register, there are 3 types of register's:
- Unnamed (default)
- Numbered
- Named

#### Registers
- Unnamed register: ""
- Numbered registers: "0 "1 "2...."9
- Named registers: "a "b "c "d ..... "z
- 
In Esc mode
 - "a yy : copies current line and pastes it in register: a


#### Standard Vs Vim

- cut: Delete
- copy: Yank
- paste: Put

- cut/copy/paste: delete/yank/put.
- Registers are storage locations.
- "contains last operand on the text.

#### Some important pages i found for configuration of vim
- https://github.com/amix/vimrc
