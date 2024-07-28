#include <testing/test_util.hpp>


int print_info(int a, int b) {
    printf("   [DEBUG] a: %d, b: %d\n", a, b); 
    return 0;
}

int print_info(double a, double b) {
    printf("    [DEBUG] a: %d, b: %d\n", a, b);
    return 0;
}

int equals(char* name, int a, int b) {
    printf("[TEST] Executing {%s}\n", name);
    if(a == b) {
        printf("   [SUCCESS]\n");
        return 0;
    }
    printf("   Test Failed\n");
    print_info(a, b);
    return 1;
}

double equals(char* name, double a, double b) {
    printf("[TEST] Executing {%s}\n", name);
    if(a == b) {
        printf("   [SUCCESS]\n");
        return 0;
    }
    printf("   Test failed\n");
    print_info(a, b);
    return 1;
}
            
