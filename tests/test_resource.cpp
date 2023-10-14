#include <gtest/gtest.h>
#include <resource.hpp>

TEST(Resource, Interface)
{
    auto resource = std::make_unique<Resource>();

    constexpr int status_def = 5;
    resource->setStatus(status_def);

    EXPECT_EQ(status_def, resource->getStatus());
}