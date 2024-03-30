TARGET = SmartCalc
CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -g
V_COMMAND = valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all -s
L_COMMAND = leaks -atExit --

PATH_TO_OBJ = objects/
PATH_TO_TESTS = test/
PATH_TO_MAIN = backend/
PATH_TO_REPORT = report/
EXEC_T = unit_tests
LIB_NAME = s21_SmartCalc.a


SRC = $(wildcard $(PATH_TO_MAIN)*.c)
OBJ = $(patsubst %.c, $(PATH_TO_OBJ)%.o, $(SRC))
SRC_T = $(wildcard $(PATH_TO_TESTS)*.c)
OBJ_T = $(patsubst %.c, $(PATH_TO_OBJ)%.o, $(SRC_T))

OS := $(shell uname -s)

ifeq ($(OS), Darwin)
	CFLAGS+=$(shell pkg-config --cflags check) 
	LIBS+=$(shell pkg-config --libs check)
endif


all: clean install

s21_SmartCalc.a: $(OBJ)
	@ar rcs $@ $(OBJ)
	@ranlib $@

install:
	@echo "Start installation"
	@mkdir -p build
	# @cd frontend/SmartCalc && qmake && make && make clean && rm -rf Makefile && mv SmartCalc.app build/$(TARGET).app
	# @cp -R build/$(TARGET).app ~/Desktop/$(TARGET).app
	@cd frontend/SmartCalc && qmake
	@cd frontend/SmartCalc && make
	@mv frontend/SmartCalc/$(TARGET).app build/$(TARGET).app
	@cp -R build/$(TARGET).app ~/Desktop/
	# @echo "┏=========================================┓"
	# @echo "┃    The installation was successful.     ┃"
	# @echo "┃     The project is located in the       ┃"
	# @echo "┃    build folder and on the desktop.     ┃"
	# @echo "┗=========================================┛"

uninstall:
	rm -rf ~/Desktop/$(TARGET).app
	@echo "Programm successfully deleted"

clean:
	find $(PATH_TO_OBJ) -name '*.o' -exec rm {} +
	find $(PATH_TO_OBJ) -name '*.gcno' -exec rm {} +
	find $(PATH_TO_OBJ) -name '*.gcda' -exec rm {} +
	rm -rf $(PATH_TO_REPORT)*.css && rm -rf $(PATH_TO_REPORT)*.html
	rm -rf *.info && rm -rf *.gcov
	rm -rf RESULT_VALGRIND.txt gcov_*
	rm -rf dist
	rm -rf build/$(TARGET).app
	rm -rf ~/Desktop/$(TARGET).app
	rm -rf s21_SmartCalc.a

dvi:
	@open README_RUS.md
dist:
	@mkdir -p dist
	@cp -R build/$(TARGET).app dist
	@cp README_RUS.md dist
	@cd dist && tar cvzf $(TARGET)_v1.0.tgz *
	@cd dist && rm -rf $(TARGET).app README.md README_RUS.md
	@echo "The build was successfully archived"

coverage_flag:
	$(eval CFLAGS += --coverage)

test: coverage_flag $(OBJ_T) $(LIB_NAME)

ifeq ($(OS), Darwin)
	$(CC) $(CFLAGS) $(OBJ_T) $(LIB_NAME) $(LIBS) -o $(PATH_TO_TESTS)$(EXEC_T)
	$(PATH_TO_TESTS)./$(EXEC_T)
else
	$(CC) $(CFLAGS) $(OBJ_T) $(LIB_NAME) -o $(PATH_TO_TESTS)$(EXEC_T) -lcheck -lsubunit -lrt -lpthread -lm
	$(PATH_TO_TESTS)./$(EXEC_T)
endif

$(PATH_TO_OBJ)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


gcov_report: clean coverage_flag test
	rm -rf $(PATH_TO_OBJ)$(PATH_TO_TESTS)*.gcno
	rm -rf $(PATH_TO_OBJ)$(PATH_TO_TESTS)*.gcda
	gcov -b -l -p -c $(OBJ)
	gcovr -o $(PATH_TO_REPORT)gcov_report.html --html --html-details
	rm -rf *.info && rm -rf *.gcov
	@if command -v xdg-open > /dev/null; then \
        xdg-open $(PATH_TO_REPORT)gcov_report.html; \
    elif command -v open > /dev/null; then \
        open $(PATH_TO_REPORT)gcov_report.html; \
    else \
        echo "Cannot open browser. Please open '$(PATH_TO_REPORT)gcov_report.html' manually."; \
    fi

format:
	@cp ../materials/linters/.clang-format ./
	@find . -name '*.c' -o -name '*.h' | xargs clang-format -i
	@rm .clang-format

format_check:
	@cp ../materials/linters/.clang-format ./
	@find . -name '*.c' -o -name '*.h' | xargs clang-format -n
	@rm .clang-format

cppcheck:
	@find ./backend -name '*.c' -o -name '*.h' | xargs cppcheck --enable=all --suppress=missingIncludeSystem

leaks:
	@if [ -f "$(PATH_TO_TESTS)$(EXEC_T)" ]; then \
        $(L_COMMAND) ./$(PATH_TO_TESTS)$(EXEC_T); \
    else \
        echo "Test executable not found."; \
    fi

valgrind:
	@if [ -f "$(PATH_TO_TESTS)$(EXEC_T)" ]; then \
        $(V_COMMAND) ./$(PATH_TO_TESTS)$(EXEC_T); \
    else \
        echo "Test executable not found."; \
    fi

 .PHONY: all install uninstall clean dvi dist test gcov_report format format_check cppcheck leaks valgrind