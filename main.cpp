#include <iostream>
#include <memory>
#include "include/adaptor.hpp"

int main()
{
   // std::unique_ptr<int> p = std::make_unique<int>(42);
    std::unique_ptr<adaptor>ptr=std::make_unique<adaptor>();
    ptr->print_msg();
   // adaptor::print_msg();
    
}