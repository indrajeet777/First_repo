#include "adaptor.hpp"


adaptor::adaptor()
{
    std::cout<<"Inside the adaptor class " << std::endl;
}

adaptor::~adaptor()
{

}

static void adaptor::print_msg()
{
    std::cout<<"Printing the message"<<"\n";
}