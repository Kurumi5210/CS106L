# 定义编译器和编译选项
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra

# 定义目标可执行文件
TARGET = main

# 定义源文件和对象文件
SRCS = main.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接所有对象文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# 编译每个源文件为目标文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)