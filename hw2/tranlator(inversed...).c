#include <stdio.h>
#include <stdint.h>

uint32_t a;

void ten_to_sixteen(uint32_t val)
{

    uint16_t ost = 1;
    int res = val;
    uint8_t k;

    while (ost != 0)
    {
        ost = res % 16;
        printf("%d ", ost);
        res /= 16;
    }
}

int main(void)
{
    scanf("%d", &a);
    ten_to_sixteen(a);
}
