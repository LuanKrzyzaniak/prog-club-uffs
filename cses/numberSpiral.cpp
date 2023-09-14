#include <iostream>

long long guess(long y_pos, long x_pos);
void generateGrid();

int main(){
    long tests, y, x, ans;

    std::cin >> tests;

    for (long i = 0; i < tests; i++)
    {
    std::cin >> y >> x;
    std::cout << guess(y,x) << "\n";
    }
    // generateGrid();
    
    return 0;
}

long long guess(long y_pos, long x_pos){
    long long result = 1;
    
    // CASO SUPERIOR
    if (y_pos < x_pos)
    {
        for (long i = 1; i < x_pos; i++)
        {
            if (i % 2 == 0)
            {
                result += (4 * i) - 1;
            } else {
                result++;
            }
        }
        if (x_pos % 2 == 0)
        {
            return result + (y_pos -1);
        } else {
            return result - (y_pos -1);
        }

    // CASO INFERIOR
    } else if (x_pos < y_pos){
        for (long i = 1; i < y_pos; i++)
        {
            if (i % 2 != 0)
            {
                result += 4*i-1;
            } else {
                result++;
            }
        }
        if (y_pos % 2 != 0)
        {
            return result + (x_pos -1);
        } else {
            return result - (x_pos -1);
        }
    
    // CASO DIAGONAL
    } else {
        for (long i = 1; i < x_pos; i++)
        {
            result += 2*i;
        }
        return result;
    }
}

// void generateGrid(){
//     std::cout << "\n";
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 1; j < 6; j++)
//         {
//             std::cout << guess(i, j) << "   ";
//         }
//         std::cout << "\n\n";
//     }
// }
