/*
 * Name: Andrew Padgett
 * Date Submitted: 11/30/18
 * Lab Section 04
 * Assignment Name: Lab 11
 */

#pragma once

#include <string>
#include "search.h"

using namespace std;

string trim_string(string value);
bool is_white_space(char value);
void printOutput(pair<string, string> location);
pair<string, string> setLocation(pair<string, string> location);
pair<string, string> setLocation(string fileName);
string getQuery();
int countWords(string query);

string trim_string(string value) {
	auto start = value.begin();
	auto end = value.rbegin();
	int length = value.length();
	while (is_white_space(*start)) start++;
	while (is_white_space(*end)) { end++; length--; }
	return string(start, start + length);
}

bool is_white_space(char value) {
	return value == '\t' || value == '\n' || value == '\r' || value == '\f' || value == ' ';
}

void printOutput(pair<string, string> location) {
  cout << location.first << endl;
  if(location.second != "empty")
    cout << location.second << endl;
  cout << endl;
}

pair<string, string> setLocation(string fileName, string current) {
	pair<string, string> location;
	location = make_pair(fileName, current);
	return location;
}

pair<string, string> setLocation(string fileName) {
	pair<string, string> location;
	location = make_pair(fileName, "empty");
	return location;
}

string getQuery() {
	string query;
	cout << "Enter query to search for or enter \"q\" to quit: ";
	getline(cin, query);
	cout << endl;
	return query;
}

int countWords(string query) {
	int numWords = 1;
	for (auto it : query) {
		if (it == ' ')
			numWords++;
	}
	return numWords;
}
