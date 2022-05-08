format:
	clang-format -i *.cpp *.h

run-sudoku:
	g++ sudoku.cpp -o sudoku; ./sudoku