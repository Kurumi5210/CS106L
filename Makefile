# 定义编译器和编译选项
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra

# 定义目标可执行文件
TARGET = main

# 默认目标
all: $(TARGET)

# 编译 main.cpp 并生成可执行文件
$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(TARGET)

# 清理生成的文件
clean:
	rm -f $(TARGET)