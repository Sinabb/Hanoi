#include <iostream>

void Hanoi(int n, char from, char temp, char to)
{
 
    if (n == 1)
    {
        std::cout << from << "에서" << to<<"로 옮깁니다." << std::endl;
        return;
    }
    Hanoi(n - 1, from, to, temp);
    Hanoi(n - 1, temp, from, to);
}

int main()
{
    int number;
    std::cout << "원판의 숫자를 입력하세요";
    std::cin >> number;
    Hanoi(number, 'A', 'B', 'C');
}