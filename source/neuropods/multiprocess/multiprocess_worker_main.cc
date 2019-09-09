//
// Uber, Inc. (c) 2019
//

#include <iostream>
#include <string>

#include "neuropods/multiprocess/multiprocess_worker.hh"

// A worker process that runs a neuropod
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::string program_name(argv[0]);
        std::cout << "Usage: " + program_name + " control_queue_name" << std::endl;
        return 1;
    }

    std::string control_queue_name(argv[1]);

    // Start the main loop
    neuropods::multiprocess_worker_loop(control_queue_name);

}