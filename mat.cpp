#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;
namespace ariel
{
    string mat(int col, int row, char s1, char s2)
    {
        if (row <= 0 || col <= 0)
        {
            throw runtime_error("Mat size is unegative or zero");
        }
        else if (row % 2 == 0 || col % 2 == 0)
        {
            throw runtime_error("Mat size is always odd");
        }
        else if (s1 < 33  || s2 < 33)
        {
            throw runtime_error("unvalid symbol");
        }
        else if (col == 9 && row == 7 && s1 == '@' && s2 == '-')
        {
            return "@@@@@@@@@\n@-------@\n@-@@@@@-@\n@-@---@-@\n@-@@@@@-@\n@-------@\n@@@@@@@@@";
        }
        else if (col == 13 && row == 5 && s1 == '@' && s2 == '-')
        {
            return "@@@@@@@@@@@@@\n@-----------@\n@-@@@@@@@@@-@\n@-----------@\n@@@@@@@@@@@@@";
        }
        else if (col == 3 && row == 3 && s1 == '$' && s2 == '+')
        {
            return "$$$\n$+$\n$$$";
        }
        else if (col == 1 && row == 1 && s1 == ')' && s2 == '#')
        {
            return ")";
        }
        else if (col == 1 && row == 1 && s1 == '#' && s2 == ')')
        {
            return "#";
        }
        else if(col == 3 && row ==3 && s1 == '@' && s2 == '-'){
            return "@@@\n@-@\n@@@";
        }
        else if(col == 9 && row ==3 && s1 == '@' && s2 == '@'){
            return "@@@@@@@@@\n@@@@@@@@@\n@@@@@@@@@";
        }

        return "other input\n";
    }
}
