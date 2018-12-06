# Fuzzy-Search
Fuzzy text file search

Fuzzy Search Instructions/Features

Call search() to start the program

Reads text documents from folder "/content" and scans them for the closest
match to a user-inputted query.

Program will prompt the user for a query (string of any length) and will return
the location of the first closest match it finds. If there are multiple matches
the same "distance" apart, the first result will be displayed.

File names take precedence if the "distance" is equal to a previously found
result.

At any time, enter "q" to end the program.


Design

The program uses Levenshtein Distance (http://bit.ly/2AHHIvI) to calculate the
number of edits made to string1 to produce string2.

Files are split up into sentences which are stored when a close match is found.

For single-word queries, the program iterates through every word and calculates
the Levenshtein Distance between the words.

For phrases, the current sentence is split chunks with the same number of words
as the query. The Levenshtein Distance between these chunks and the query is
then calculated.

Different edit types between strings do not matter in this implementation.
Insertions, deletions, and substitutions take the same precedence.

Traded accuracy for speed. Has the ability for near 100% accuracy with line 236
in search.h removed, but program takes much longer than it reasonably should in
that configuration.
