#ifndef ADAPTOR_H
#define ADAPTOR_H

#pragma once

#include <iostream>
#include "executor.hpp"

class adaptor : private project::executor
{
public:
    adaptor();
    ~adaptor();
     project::executor * print_msg();

private:

};

#endif