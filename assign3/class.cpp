#include "class.h"

Computer::Computer(int value, std::string cpu, std::string gpu) : price(value), CPU(cpu), GPU(gpu) {}
Computer::Computer() : price(0), CPU("Unknown"), GPU("Unknown") {}    // 默认构造参数
void Computer::set_price(int value) { price = value; }
void Computer::set_cpu(std::string cpu) { CPU = cpu; }
void Computer::set_gpu(std::string gpu) { GPU = gpu; }
void Computer::get_info() const {
    std::cout << "Price: " << price << std::endl;
    std::cout << "CPU: " << CPU << std::endl;
    std::cout << "GPU: " << GPU << std::endl;
}
std::string Computer::get_GPU() const { return this->GPU; }   // 只输出GPU信息

void Computer::upgrade(std::string cpu, std::string gpu)
{
    set_cpu(cpu);
    set_gpu(gpu);
}