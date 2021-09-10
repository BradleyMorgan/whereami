#include <ctime>
#include <stdio.h>
int main() {
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    int weekday = now->tm_wday; // 0-6 
    const char *where_is_bradley = (weekday <= 3 || weekday == 6) ? "Remote" : "Onsite";
    printf("Bradley is %s!\r\n", where_is_bradley);
}
