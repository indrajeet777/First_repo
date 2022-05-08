#include <iostream>
#include <memory>
#include "include/adaptor.hpp"

int main()
{
   // std::unique_ptr<int> p = std::make_unique<int>(42);
    std::unique_ptr<adaptor>ptr=std::make_unique<adaptor>();
    project::executor *my_exe=ptr->print_msg();
   // adaptor::print_msg();
   my_exe->print_from_executor();

   return 0;
    
}