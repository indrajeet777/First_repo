#include "adaptor.hpp"


adaptor::adaptor()
{
    std::cout<<"Inside the adaptor class " << std::endl;
}

adaptor::~adaptor()
{

}

project::executor * adaptor::print_msg()
{
    std::cout<<"Printing the message"<<"\n";
    project::executor *ptr_adp = new project::executor();
    return ptr_adp;
}