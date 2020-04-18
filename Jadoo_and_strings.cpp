// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/jadoo-and-strings/
// 18-04-2020 Very-easy/easy
#include<bits/stdc++.h>
main(){
	char i[1000];
	gets(i);
	int l=strlen(i);
	while(l--)
		printf("%c",i[l]);
}
// Codegolf problem. Won't work with C++11 and later. Error:gets() was not declared in this scope. gets was removed from both C and C++ in 2011.
// Replaced by fgets(char*, int, FILE*)
//                 array^,size^, ^stdin