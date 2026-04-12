#include <stdio.h>
union data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union data d;
    printf("Enter integer value: ");
    scanf("%d", &d.i);
    printf("Integer value = %d\n", d.i);
    printf("Enter float value: ");
    scanf("%f", &d.f);
    printf("Float value = %.2f\n", d.f);
    printf("Enter string: ");
    scanf("%s", d.str);
    printf("String = %s\n", d.str);
    return 0;
}
