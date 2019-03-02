#include "generate.hpp"
#include "ship_count.hpp"
#include "check.hpp"
#include "print.hpp"
#include "hit.hpp"
#include "rule.hpp"

int main()
{
    rule();
    char** cpu_board = gen_cpu_board();
    char** user_board = generate_board();
    hit(cpu_board, user_board);
    del(cpu_board);
    del(user_board);
    return 0;
}
