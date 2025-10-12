#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Multi-compiler no-inline attribute
#ifdef _MSC_VER
    #define NOINLINE __declspec(noinline)
#elif defined(__GNUC__) || defined(__clang__)
    #define NOINLINE __attribute__((noinline))
#else
    #define NOINLINE
#endif

NOINLINE int func_00(int choice)
{
    printf("func_00: statement 1, choice = %d\n", choice);
    printf("func_00: statement 2\n");
    printf("func_00: statement 3\n");
    printf("func_00: statement 4\n");
    printf("func_00: statement 5\n");
    return choice + 1;
}

NOINLINE int func_01(int choice)
{
    // Seed random number generator
    srand((unsigned int)time(NULL));

    printf("line 01) Program started with choice = %d\n", choice);
    printf("line 02) Beginning control flow demonstration\n");
    printf("line 03) Testing various conditional branches\n");
    printf("line 04) This will exercise if/else and switch statements\n");

    // Simple if-else block
    if (choice < 5) {
        printf("line 05) Entered first if block (choice < 5)\n");
        printf("line 06) This is a low value path\n");
        printf("line 07) Processing small numbers\n");
        printf("line 08) Completing low value branch\n");
    } else {
        printf("line 09) Entered else block (choice >= 5)\n");
        printf("line 10) This is a higher value path\n");
        printf("line 11) Processing larger numbers\n");
        printf("line 12) Completing high value branch\n");
    }

    // if-else-if chain
    if (choice < 3) {
        printf("line 13) Very low range detected (< 3)\n");
        printf("line 14) Executing minimal processing\n");
        printf("line 15) This handles edge cases\n");
        printf("line 16) Finishing very low range handler\n");
    } else if (choice < 7) {
        printf("line 17) Low-medium range detected (3-6)\n");
        printf("line 18) Standard processing mode\n");
        printf("line 19) Applying normal algorithms\n");
        printf("line 20) Completing low-medium processing\n");
    } else if (choice < 12) {
        printf("line 21) Medium-high range detected (7-11)\n");
        printf("line 22) Enhanced processing enabled\n");
        printf("line 23) Using advanced features\n");
        printf("line 24) Wrapping up medium-high range\n");
    } else {
        printf("line 25) High range detected (>= 12)\n");
        printf("line 26) Maximum processing mode\n");
        printf("line 27) Activating all features\n");
        printf("line 28) Finalizing high range operations\n");
    }

    // Switch statement
    switch (choice % 5) {
        case 0:
            printf("line 29) Switch case 0: Divisible by 5\n");
            printf("line 30) Modulo operation resulted in zero\n");
            printf("line 31) This is a special alignment case\n");
            printf("line 32) Performing modulo-0 specific operations\n");
            break;

        case 1:
            printf("line 33) Switch case 1: Remainder 1\n");
            printf("line 34) First offset from alignment\n");
            printf("line 35) Handling single unit deviation\n");
            printf("line 36) Case 1 processing complete\n");
            break;

        case 2:
            printf("line 37) Switch case 2: Remainder 2\n");
            printf("line 38) Second offset from alignment\n");
            printf("line 39) Double unit deviation detected\n");
            printf("line 40) Case 2 operations finished\n");
            break;

        case 3:
            printf("line 41) Switch case 3: Remainder 3\n");
            printf("line 42) Third offset position\n");
            printf("line 43) Triple unit offset handling\n");
            printf("line 44) Case 3 execution completed\n");
            break;

        case 4:
            printf("line 45) Switch case 4: Remainder 4\n");
            printf("line 46) Fourth and final offset\n");
            printf("line 47) Maximum deviation before wrap\n");
            printf("line 48) Case 4 processing done\n");
            break;

        default:
            printf("line 49) Switch default: Unexpected value\n");
            printf("line 50) This should not be reachable\n");
            printf("line 51) Error handling path\n");
            printf("line 52) Default case fallback\n");
            break;
    }

    // Nested if statements
    if (choice > 5) {
        printf("line 53) Outer if: choice > 5\n");
        printf("line 54) Entering nested condition checks\n");

        if (choice > 10) {
            printf("line 55) Inner if: choice > 10\n");
            printf("line 56) Deep nesting level reached\n");
            printf("line 57) Processing high value in nested context\n");
            printf("line 58) Inner condition satisfied\n");
        } else {
            printf("line 59) Inner else: 5 < choice <= 10\n");
            printf("line 60) Medium range in nested structure\n");
            printf("line 61) Alternate nested path taken\n");
            printf("line 62) Inner else block completed\n");
        }

        printf("line 63) Back to outer if block\n");
        printf("line 64) Exiting nested structure\n");
    } else {
        printf("line 65) Outer else: choice <= 5\n");
        printf("line 66) Skipping nested conditions\n");
        printf("line 67) Simple path without nesting\n");
        printf("line 68) Outer else finished\n");
    }

    // Another switch with different logic
    int category = choice / 4;
    switch (category) {
        case 0:
            printf("line 69) Category 0: Range 0-3\n");
            printf("line 70) First quartile processing\n");
            printf("line 71) Initial range operations\n");
            printf("line 72) Category 0 complete\n");
            break;

        case 1:
            printf("line 73) Category 1: Range 4-7\n");
            printf("line 74) Second quartile processing\n");
            printf("line 75) Mid-low range operations\n");
            printf("line 76) Category 1 complete\n");
            break;

        case 2:
            printf("line 77) Category 2: Range 8-11\n");
            printf("line 78) Third quartile processing\n");
            printf("line 79) Mid-high range operations\n");
            printf("line 80) Category 2 complete\n");
            break;

        case 3:
            printf("line 81) Category 3: Range 12-15\n");
            printf("line 82) Fourth quartile processing\n");
            printf("line 83) Upper range operations\n");
            printf("line 84) Category 3 complete\n");
            break;

        default:
            printf("line 85) Category default: Range 16+\n");
            printf("line 86) Extended range processing\n");
            printf("line 87) Beyond normal boundaries\n");
            printf("line 88) Extended category handling done\n");
            break;
    }

    printf("line 89) All control flow paths evaluated\n");
    printf("line 90) Preparing to exit program\n");
    printf("line 91) Final cleanup operations\n");
    printf("line 92) Program execution complete\n");

    return 0;
}

int main(int argc, char* argv[])
{
    int choice;
    volatile int result0, result1;

    // Get a value from user or generate random
    if (argc > 1) {
        choice = atoi(argv[1]);
    } else {
        choice = rand() % 20;
    }

    result0 = func_00(choice);
    result1 = func_01(choice);

    return result0 + result1;
}