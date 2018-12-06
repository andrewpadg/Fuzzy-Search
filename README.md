# Fuzzy Search

Searches through text files in /content/ for user-inputted query.

## Getting Started

These instructions will show you how to use the source files to run the program.

### Setup

What file directory should look like.

```
content
main.cpp
Makefile
search.h
util.h
```
/content/ folder will contain all text files to be searched.

### Running the program

Compile using Makefile.

```
make
```
Run program.

```
make run
```
Input string to search text files for.

```
Enter query to search for or enter "q" to quit: query
```
Program will return the file and sentence containing the closest string to the query.

## Design

Fuzzy search uses Levenshtein Distance (http://bit.ly/2AHHIvI) to find the distance between two strings.

When searching for query, files take precedence over everything in results.

Single word queries are compared to every word in every file, multi-word queries are compared to substrings
of sentences.

## Authors

* **Andrew Padgett** - *Clemson University* [GitHub](https://github.com/andrewpadg/)
