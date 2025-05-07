#include "combine.h"
#include "dining.h"
#include "smartSet.h"

int main() {
    cout << "=== Створюємо комбіновані стіл і стілець ===\n";
    CombinedChairTable cct("ергономічне", "червоний", "Razor");

    cout << "=== Створюємо набір DiningSet: стіл + стілець ===\n";
    DiningSet ds;

    cout << "=== Створюємо SmartSet ===\n";
    SmartSet s;

    cout << "=== Кінець ===\n";

    return 0;
}
