#include <memory>
#include <resource.hpp>

int main()
{
    auto ob = std::make_unique<Resource>();
    return 0;
}