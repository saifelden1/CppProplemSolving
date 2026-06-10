CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -fdiagnostics-color=always

# Pattern rule to compile and run any .cpp file
# Usage: make P1 (this will compile P1.cpp to P1.exe and run it)
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@.exe
	.\$@.exe

clean:
	rm -f *.exe
