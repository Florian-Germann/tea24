#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    double* d = new double(3.1415);
    fmt::println("Wert: {}", *d);
    delete d;

    return 0; /* exit gracefully*/
}

void changeValueByParameter(int value){
    value = 10;
    fmt::print("{}",value);

}
