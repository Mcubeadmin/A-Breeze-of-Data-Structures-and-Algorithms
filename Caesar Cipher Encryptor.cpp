#include<bits/stdc++.h>

/*
Given a non-empty string of lowercase letters and a non-negative integer representing a key, write a function that returns a new string obtained by shifting every letter in the input string by k positions in the alphabet, where k is the key.

Note that letters should "wrap" around the alphabet; in other words, the letter z shifted by one returns the letter a.

Sample Input
string = "xyz"
key = 2
Sample Output
"zab"
*/

using namespace std;

string caesarCypherEncryptor(string str, int key) {
  for(int i=0; i<str.length(); i++){
		str[i] = char((int(str[i])-97+key)%26 + 97);
	}
  return str;
}

int main()
{
  //Write code here
  return 0;
}
