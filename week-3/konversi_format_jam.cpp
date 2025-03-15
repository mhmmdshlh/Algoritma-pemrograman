#include <stdio.h>
using namespace std;

int main()
{
    int t, h, m, s;
    scanf("%d", &t);

    s = (t % 3600) % 60;
    m = (t % 3600) / 60;
    h = t / 3600;

    printf("%02d:%02d:%02d", h, m, s);

	return 0;
}