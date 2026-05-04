#include <iostream>
 #include <thread>
 #include <mutex>
 #include <ctime>
 #include <windows.h>
 #include <vector>
 #include <bits/stdc++.h>
 
 
 
 int main(){
 	 	for(int i = 0; i < 1000; i++){
std::cout << i << std::endl;
 }
 	std::cout << "random value:" << rand() % 100 << std::endl;
 	return 0;
 }
