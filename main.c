/**
 * @file main.c
 * @author fudu (fudu@zmvision.cn)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * ZMVISION Copyright (c) 2023
 *
 */

#include "main.h"

int main(int argc, char **argv)
{

#ifdef C_LIB_TEST
    if (argc == 3 && !strcasecmp(argv[1], "test"))
    {
        if (!strcasecmp(argv[2], "atom"))
        {
            return atomTest(argc, argv);
        }
        else if (!strcasecmp(argv[2], "str"))
        {
            return strTest(argc, argv);
        }

        return -1; /* test not found */
    }
#endif

    printf("%s %s %d: hello world\n", __FILE__, __FUNCTION__, __LINE__);

    return 0;
}
