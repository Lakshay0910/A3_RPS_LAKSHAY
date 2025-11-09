#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../RPS/rps.h"   // <-- keep this path
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
    };
}
