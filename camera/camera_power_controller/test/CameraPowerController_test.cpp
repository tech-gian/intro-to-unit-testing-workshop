#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "CameraPowerController.h"
#include "MockSerialPortManager.h"

using ::testing::_;

struct CameraPowerControllerTest : public ::testing::Test
{
    MockSerialPortManager mSerialPortManager;
    CameraPowerController mCameraPowerController{&mSerialPortManager};
};

TEST_F(CameraPowerControllerTest,
       turnOnCamera_WhenCalled_WillSendCorrectMessage)
{
    // The _ is just to declare that you are waiting
    // function to be called.
    // EXPECT_CALL(mSerialPortManager, send(_));

    EXPECT_CALL(mSerialPortManager, send("ON"));
    mCameraPowerController.turnOnCamera();
}

TEST_F(CameraPowerControllerTest,
       turnOffCamera_WhenCalled_WillSendCorrectMessage)
{
    EXPECT_CALL(mSerialPortManager, send("OFF"));
    mCameraPowerController.turnOffCamera();
}
