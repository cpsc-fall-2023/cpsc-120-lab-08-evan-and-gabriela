// Evan Thompson
// evanthompson@csu.fullerton.edu
// @evanthompson86
// Partners: @gabyvargasgv

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  // Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein_input{arguments[1]};
  std::string bread_input{arguments[2]};
  std::string condiment_input{arguments[3]};

  // Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order:\n"
            << "A " << protein_input << " sandwich on " << bread_input
            << " with " << condiment_input << ".\n";
  return 0;
}
