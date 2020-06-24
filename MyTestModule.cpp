#include "appfwk/DAQModule.hpp"

#include <iostream>

class MyTestModule : public dunedaq::appfwk::DAQModule
{
public:
    explicit MyTestModule(std::string name) : DAQModule(name) {} 
    virtual void init() override { std::cout << "Foo!" << std::endl; }
};
