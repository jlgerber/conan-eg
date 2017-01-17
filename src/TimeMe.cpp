//
// Created by Jonathan Gerber on 1/17/17.
//

#include "TimeMe.hpp"
#include <spdlog/spdlog.h>
#include <boost/timer/timer.hpp>

namespace spd = spdlog;


TimeMe::TimeMe(int length) : m_length{length} {
    boost::timer::auto_cpu_timer t;

    auto console = spd::stdout_logger_mt("console");
    for(auto i=0; i < m_length ; i++)
        console->info("Logging from TimeMe");

}


int TimeMe::getLength() const {
    return m_length;
}
