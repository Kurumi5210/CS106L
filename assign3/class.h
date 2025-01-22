#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>

class Computer {
    public:
        Computer(int value, std::string cpu, std::string gpu);
        Computer();
        ~Computer() = default;
        void get_info() const;
        std::string get_GPU() const;
        void set_price(int value);
        void upgrade(std::string cpu, std::string gpu);
    private:
        int price;
        std::string CPU;
        std::string GPU;
        void set_cpu(std::string cpu);
        void set_gpu(std::string gpu);
};

#endif // CLASS_H