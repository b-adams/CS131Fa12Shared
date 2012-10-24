# New functions
## fputc
- (char, FILE*) -> char|EOF
- Outputs character
- Returns the character output
- Returns EOF if there was a problem
## fgetc
- (FILE*) -> char|EOF
- Inputs character
- Returns the character input
- Returns EOF if there was a problem
## ungetc
- (char, FILE*) -> char|EOF
- Puts a character back in the stream
- Returns the character output
- Returns EOF if there was a problem
- Cannot unget more than were gotten

# Handy custom functions

## isLowerLetter
- (char) -> bool
    return ('a'<=ch && ch<='z');
- Determine if the character is a lower case letter


## isUpperLetter
- (char) -> bool
    return ('A'<=ch && ch<='Z');
- Determine if the character is an upper case letter


## isLetter
- (char) -> bool
    return (isLowerLetter(ch) || isUpperLetter(ch));
- Determine if the character is any letter


## isDigit
- (char) -> bool
    return ('0'<=ch && ch<='9');
- Determine if the character is any digit


## isAlphaNumeric
- (char) -> bool
    return (isLetter(ch) || isDigit(ch));
- Determine if the character is a letter or a digit


## isWhiteSpace
- (char) -> bool
    return (ch=='\n' || ch=='\t' || ch==' ');
- Determine if the character is whitespace



# Input and output streams. Especially input.

# Dealing with errors
