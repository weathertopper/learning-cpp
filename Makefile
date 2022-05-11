format:
	clang-format -i *.cpp *.h

run-hello:
	g++ -std=c++11 hello.cpp -o hello; ./hello