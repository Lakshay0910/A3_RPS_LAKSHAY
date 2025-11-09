#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../RPS/rps.h"   // adjust if your project name/path differs
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPStests
{
    TEST_CLASS(RPStests)
    {
    public:

        TEST_METHOD(Red_Player1BeatsScissors)
        {
            const char* result = rps_winner("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(Red_Draw_PaperPaper)
        {
            const char* result = rps_winner("Paper", "Paper");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(Red_Player2BeatsRock)
        {
            const char* result = rps_winner("Rock", "Paper");
            Assert::AreEqual("Player2", result);
        }
    };
}
