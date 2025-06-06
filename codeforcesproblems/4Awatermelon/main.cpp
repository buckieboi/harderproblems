#include <iostream>
#include "watermelon.h"

struct TestCase {
    int weight;
    std::string expected;
};

int main() {
    TestCase tests[] = {
        {8, "YES"},
        {1, "NO"},
        {2, "NO"},
        {100, "YES"},
        {99, "NO"},
        {98, "YES"}
    };

    bool all_passed = true;

    for (int i = 0; i < sizeof(tests)/sizeof(tests[0]); ++i) {
        bool result = watermelon(tests[i].weight);
        std::string output = result ? "YES" : "NO";

        std::cout << "Test #" << i + 1 << ": Input(" << tests[i].weight 
                  << ") → Expected: " << tests[i].expected 
                  << ", Got: " << output 
                  << " → " << (output == tests[i].expected ? "PASSED" : "FAILED") 
                  << "\n";

        if (output != tests[i].expected)
            all_passed = false;
    }

    std::cout << (all_passed ? "\n✅ All test cases passed.\n" : "\n❌ Some test cases failed.\n");

    return all_passed ? 0 : 1;
}
