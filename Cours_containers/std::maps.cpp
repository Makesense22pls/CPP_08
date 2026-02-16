#include <iostream>
#include <map>
#include <algorithm>



int main(){
	std::map<std::string, int > container;
	container["one"] = 1;
	container["two"] = 2;
	container["three"] = 3;
	container["four"] = 4;
	container["five"] = 5;
	container["six"] = 6;
    for (std::map<std::string, int>::iterator it = container.begin(); it != container.end(); ++it)
    {
        std::cout << it->first << " = " << it->second << "\n";
    }
}