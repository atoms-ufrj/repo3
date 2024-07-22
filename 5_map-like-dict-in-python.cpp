#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> my_map;

    // Inserting values
    my_map["Alice"] = 25;
    my_map["Bob"] = 30;

    // Accessing values
    std::cout << "Alice is " << my_map["Alice"] << " years old." << std::endl;

    // Checking if a key is in the map
    if (my_map.find("Charlie") == my_map.end()) {
        std::cout << "Charlie is not in the map." << std::endl;
    }

    // Iterating over key-value pairs
    for (const auto& pair : my_map) {
        std::cout << pair.first << " is " << pair.second << " years old." << std::endl;
    }

    return 0;
}
