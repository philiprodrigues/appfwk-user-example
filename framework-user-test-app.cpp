#include "appfwk/DAQSink.hpp"

int main()
{
    dunedaq::appfwk::DAQSink<int> sink("foo");
    sink.push(2);
    return 0;
}
