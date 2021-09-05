#include<iostream>
#include<string>
using namespace std;
/* 
   s.append(stringtoappend);
   s.compare(otherstring);
   s.clear(): void
   s_str(): const char*: doi string ve mang ki tu
   empty(): bool
   erase(from, numberOfcharacterTodelete)
   find(stringtofind)
   find_first_of(stringtofind);
   find_last_of(stringtofind);
   insert(position,stringToInsert) : string
   substr(from, lengthOfSubstring): string
   */ 
   
int main() {
	string s = "how are you today?";
	string f = "are";
	cout << s.insert(4,f) << endl;
	

	return 0;
	
	
 }